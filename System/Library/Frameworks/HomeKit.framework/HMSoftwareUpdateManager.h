/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMSoftwareUpdateManagerDelegate;
@class HMFUnfairLock, HMSoftwareUpdate, _HMContext, NSUUID, NSString;

@interface HMSoftwareUpdateManager : NSObject <HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	BOOL _started;
	HMSoftwareUpdate* _availableUpdate;
	id<HMSoftwareUpdateManagerDelegate> _delegate;
	_HMContext* _context;
	NSUUID* _identifier;

}

@property (nonatomic,readonly) _HMContext * context;                                          //@synthesize context=_context - In the implementation block
@property (readonly) NSUUID * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isStarted,nonatomic) BOOL started;                                   //@synthesize started=_started - In the implementation block
@property (__weak) id<HMSoftwareUpdateManagerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) HMSoftwareUpdate * availableUpdate;                                      //@synthesize availableUpdate=_availableUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(void)reconnect;
-(BOOL)isStarted;
-(void)setAvailableUpdate:(HMSoftwareUpdate *)arg1 ;
-(void)_handleUpdatedAvailableUpdate:(id)arg1 ;
-(void)_handleFetch:(id)arg1 ;
-(void)_handleStartUpdate:(id)arg1 ;
-(void)_reallyStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateAvailableUpdate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMSoftwareUpdate *)availableUpdate;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)messageDestination;
-(void)__registerForMessages;
-(id)init;
-(void)dealloc;
-(NSUUID *)identifier;
-(void)setDelegate:(id<HMSoftwareUpdateManagerDelegate>)arg1 ;
-(id<HMSoftwareUpdateManagerDelegate>)delegate;
-(_HMContext *)context;
-(void)stop;
-(void)setStarted:(BOOL)arg1 ;
@end

