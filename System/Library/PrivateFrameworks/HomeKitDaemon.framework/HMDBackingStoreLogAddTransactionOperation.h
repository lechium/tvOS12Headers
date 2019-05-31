/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreTransactionBlock;

@interface HMDBackingStoreLogAddTransactionOperation : HMDBackingStoreOperation {

	HMDBackingStoreTransactionBlock* _transaction;
	long long _pushFlags;

}

@property (nonatomic,retain) HMDBackingStoreTransactionBlock * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) long long pushFlags;                                        //@synthesize pushFlags=_pushFlags - In the implementation block
-(HMDBackingStoreTransactionBlock *)transaction;
-(void)setTransaction:(HMDBackingStoreTransactionBlock *)arg1 ;
-(id)mainReturningError;
-(id)initWithTransaction:(id)arg1 ;
-(long long)pushFlags;
-(void)setPushFlags:(long long)arg1 ;
@end

