/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PKMapContainer, NSTimer;

@interface PKPeerPaymentRecipientCache : NSObject {

	NSObject*<OS_dispatch_queue> _mapAccessQueue;
	PKMapContainer* _mapContainer;
	NSTimer* _mapNeedsWriteTimer;

}
+(id)_instanceName;
+(id)sharedCache;
-(void)noteSubmittedLowFrequencyDeviceScoreForRecipientAddress:(id)arg1 ;
-(BOOL)lowFrequencyDeviceScoreSubmissionRequiredForRecipientAddress:(id)arg1 ;
-(id)recipientForRecipientAddress:(id)arg1 ;
-(void)cacheRecipient:(id)arg1 forRecipientAddress:(id)arg2 ;
-(void)purgeRecipientWithRecipientAddress:(id)arg1 ;
-(BOOL)purgeCache;
-(void)_updateMapsFromDisk;
-(void)_handlePurgedNotification:(id)arg1 ;
-(void)_handleDiskMapChangedNotification:(id)arg1 ;
-(id)_keyForRecipientAddress:(id)arg1 ;
-(void)_setMapNeedsWrite;
-(BOOL)_writeMapToDisk;
-(BOOL)_canReadMap;
-(BOOL)_canWriteMap;
-(id)__init;
-(id)init;
-(void)dealloc;
@end

