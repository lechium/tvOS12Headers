/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUMetadataCacheDataProviderDelegate, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface TUMetadataCacheDataProvider : NSObject {

	id<TUMetadataCacheDataProviderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	NSMutableDictionary* _providerCache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> concurrentQueue;                       //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * providerCache;                                //@synthesize providerCache=_providerCache - In the implementation block
@property (assign,nonatomic,__weak) id<TUMetadataCacheDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2 ;
-(void)setObject:(id)arg1 forDestinationID:(id)arg2 ;
-(id)metadataForDestinationID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(NSMutableDictionary *)providerCache;
-(void)refresh;
-(id)init;
-(id)description;
-(void)setDelegate:(id<TUMetadataCacheDataProviderDelegate>)arg1 ;
-(id<TUMetadataCacheDataProviderDelegate>)delegate;
-(BOOL)isEmpty;
@end

