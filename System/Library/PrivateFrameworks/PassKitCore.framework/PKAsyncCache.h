/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSCache, NSMapTable, NSMutableDictionary;

@interface PKAsyncCache : NSObject {

	os_unfair_lock_s _lock;
	NSCache* _itemByKey;
	NSMapTable* _weakItemByKey;
	NSMutableDictionary* _outstandingRetrievals;

}
-(id)initWithCache:(id)arg1 ;
-(void)_executeRetrievalBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)retrieveItemForKey:(id)arg1 synchronous:(BOOL)arg2 retrievalBlock:(/*^block*/id)arg3 deliveryBlock:(/*^block*/id)arg4 ;
-(id)init;
@end

