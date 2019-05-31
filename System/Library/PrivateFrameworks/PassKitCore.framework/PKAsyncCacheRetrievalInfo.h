/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSMutableArray;

@interface PKAsyncCacheRetrievalInfo : NSObject {

	os_unfair_lock_s _lock;
	BOOL _itemFetched;
	id _item;
	NSMutableArray* _deliveryBlocks;

}
-(void)addDeliveryBlock:(/*^block*/id)arg1 ;
-(id)synchronouslyRetrieve:(/*^block*/id)arg1 outDeliveryBlocks:(id*)arg2 ;
-(void)deliverItem:(id)arg1 ;
-(id)init;
@end

