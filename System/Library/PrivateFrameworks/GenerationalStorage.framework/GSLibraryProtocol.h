/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GSLibraryProtocol
@property (nonatomic,readonly) NSObject*<GSAdditionStoring> storage; 
@property (nonatomic,readonly) NSString * nameSpace; 
@required
-(NSString *)nameSpace;
-(NSObject*<GSAdditionStoring>)storage;
-(BOOL)generationsRemove:(id)arg1 error:(id*)arg2;

@end

