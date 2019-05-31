/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreTransactionOptions.h>

@class HMDBackingStore;

@interface HMDBackingStoreTransactionActions : HMDBackingStoreTransactionOptions {

	BOOL _local;
	BOOL _changed;
	BOOL _saveToAssistant;
	BOOL _saveToSharedUserAccount;
	HMDBackingStore* _backingStore;

}

@property (nonatomic,readonly) BOOL local;                                         //@synthesize local=_local - In the implementation block
@property (nonatomic,readonly) BOOL changed;                                       //@synthesize changed=_changed - In the implementation block
@property (nonatomic,readonly) BOOL saveToAssistant;                               //@synthesize saveToAssistant=_saveToAssistant - In the implementation block
@property (nonatomic,readonly) BOOL saveToSharedUserAccount;                       //@synthesize saveToSharedUserAccount=_saveToSharedUserAccount - In the implementation block
@property (nonatomic,__weak,readonly) HMDBackingStore * backingStore;              //@synthesize backingStore=_backingStore - In the implementation block
+(id)logCategory;
-(HMDBackingStore *)backingStore;
-(void)markChanged;
-(void)markLocalChanged;
-(id)logIdentifier;
-(void)markSaveToAssistant;
-(void)markSaveToSharedUserAccount;
-(BOOL)local;
-(BOOL)changed;
-(id)initWithBackingStore:(id)arg1 options:(id)arg2 ;
-(BOOL)saveToAssistant;
-(BOOL)saveToSharedUserAccount;
-(id)description;
@end
