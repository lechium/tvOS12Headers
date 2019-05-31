/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKWritableDeviceActivityStore.h>

@class CKKnowledgeStore;

@interface CKDeviceActivityStore : NSObject <CKWritableDeviceActivityStore> {

	 store;

}

@property (readonly,nonatomic) CKKnowledgeStore * store; 
+(id)defaultStore;
-(void)recordActivityWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)recordActivityWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id*)arg4 ;
-(id)initWithStore:(id)arg1 ;
-(CKKnowledgeStore *)store;
-(id)init;
@end
