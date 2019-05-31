/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSUUID, HMDBackingStore;

@interface HMDBackingStoreOperation : NSOperation {

	/*^block*/id _resultBlock;
	NSUUID* _operationUUID;
	HMDBackingStore* _store;

}

@property (nonatomic,retain) HMDBackingStore * store;               //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) id resultBlock;                          //@synthesize resultBlock=_resultBlock - In the implementation block
@property (nonatomic,readonly) NSUUID * operationUUID;              //@synthesize operationUUID=_operationUUID - In the implementation block
-(HMDBackingStore *)store;
-(void)setResultBlock:(id)arg1 ;
-(id)mainReturningError;
-(id)initWithResultBlock:(/*^block*/id)arg1 ;
-(void)setStore:(HMDBackingStore *)arg1 ;
-(id)resultBlock;
-(NSUUID *)operationUUID;
-(id)init;
-(id)description;
-(void)main;
@end

