/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPersistentHistoryToken;

@interface RMHistoryAnalyzer : NSObject {

	NSPersistentHistoryToken* _finalToken;

}

@property (nonatomic,readonly) NSPersistentHistoryToken * finalToken;              //@synthesize finalToken=_finalToken - In the implementation block
+(id)_uninterestingAttributes;
-(BOOL)newIsChangeInteresting:(id)arg1 ;
-(BOOL)isChangeInteresting:(id)arg1 interestingEntityNames:(id)arg2 ;
-(id)newDeltasForStore:(id)arg1 inManagedObjectContext:(id)arg2 sinceToken:(id)arg3 ignoreAuthor:(id)arg4 finalToken:(id*)arg5 error:(id*)arg6 ;
-(id)deltasForStore:(id)arg1 inManagedObjectContext:(id)arg2 sinceToken:(id)arg3 ignoreAuthor:(id)arg4 finalToken:(id*)arg5 interestingEntityNames:(id)arg6 error:(id*)arg7 ;
-(id)changesForStore:(id)arg1 inManagedObjectContext:(id)arg2 sinceToken:(id)arg3 error:(id*)arg4 ;
-(NSPersistentHistoryToken *)finalToken;
@end

