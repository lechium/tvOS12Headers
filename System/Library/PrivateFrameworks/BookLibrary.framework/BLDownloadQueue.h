/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/SSBookDownloadQueue.h>

@class NSArray, NSHashTable, BLServiceProxy, NSMutableDictionary, NSNumber, NSString;

@interface BLDownloadQueue : NSObject <SSBookDownloadQueue> {

	os_unfair_lock_s _observersLock;
	os_unfair_lock_s _activeDownloadsLock;
	NSHashTable* _observers;
	BLServiceProxy* _serviceProxy;
	NSMutableDictionary* _activeDownloads;
	NSNumber* _currentAccountNumber;

}

@property (nonatomic,retain) NSHashTable * observers;                            //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) BLServiceProxy * serviceProxy;                      //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeDownloads;              //@synthesize activeDownloads=_activeDownloads - In the implementation block
@property (nonatomic,retain) NSNumber * currentAccountNumber;                    //@synthesize currentAccountNumber=_currentAccountNumber - In the implementation block
@property (nonatomic,readonly) NSArray * downloads; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)storeIDFromBuyParameters:(id)arg1 ;
+(BOOL)isPreorderFromBuyParameters:(id)arg1 ;
+(id)buyParametersValueForKey:(id)arg1 fromBuyParams:(id)arg2 ;
+(void)cancelAllActiveDownloads;
+(id)sharedInstance;
-(void)cancelDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)pauseDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resumeDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSArray *)downloads;
-(NSMutableDictionary *)activeDownloads;
-(void)setServiceProxy:(BLServiceProxy *)arg1 ;
-(BLServiceProxy *)serviceProxy;
-(void)_storeChanged:(id)arg1 ;
-(void)_notifyComplete:(id)arg1 ;
-(void)_notifyFailed:(id)arg1 ;
-(void)_purchaseSucceeded:(id)arg1 ;
-(void)_purchaseFailed:(id)arg1 ;
-(void)_cancelAllPausedDownloads;
-(void)setActiveDownloads:(NSMutableDictionary *)arg1 ;
-(void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 isAudiobook:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_sendInitialProgressNotificationForDownloadWithStoreID:(id)arg1 orPermlink:(id)arg2 downloadID:(id)arg3 isPaused:(BOOL)arg4 isAudiobook:(BOOL)arg5 targetObserver:(id)arg6 ;
-(void)_addDownloadWithMetadata:(id)arg1 isRestore:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_postUpdatesForCurrentlyPausedDownloadsForObserver:(id)arg1 ;
-(id)_stringFromObject:(id)arg1 ;
-(id)_numberFromObject:(id)arg1 ;
-(id)_dateFromObject:(id)arg1 ;
-(id)_downloadStatusStoreID:(id)arg1 orPermLink:(id)arg2 downloadID:(id)arg3 isPaused:(BOOL)arg4 isAudiobook:(BOOL)arg5 ;
-(id)_downloadStatusFromDictionary:(id)arg1 outParamNewlyTrackedDownload:(BOOL*)arg2 ;
-(void)_postDownloadCompleteNotificationWithDictionary:(id)arg1 failed:(BOOL)arg2 ;
-(id)_purchaseResponseFromDictionary:(id)arg1 ;
-(void)addDownloadWithPurchaseParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addDownloadWithPermlink:(id)arg1 title:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addDownloadWithMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addRestoreDownloadWithMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelAllActiveDownloadsWithCompletion:(/*^block*/id)arg1 ;
-(void)addDownloadsWithMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addRestoreDownloadsWithMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addDownloadWithPurchaseParameters:(id)arg1 storeID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSNumber *)currentAccountNumber;
-(void)setCurrentAccountNumber:(NSNumber *)arg1 ;
-(void)_notifyProgress:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
@end

