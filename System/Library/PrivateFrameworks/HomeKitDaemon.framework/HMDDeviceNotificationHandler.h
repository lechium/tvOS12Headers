/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class HMDHome, NSString, NSMutableSet, HMFTimer, NSUUID;

@interface HMDDeviceNotificationHandler : HMFObject <HMFTimerDelegate> {

	BOOL _delaySupported;
	HMDHome* _home;
	NSString* _destination;
	NSString* _requestIdentifier;
	NSMutableSet* _updatedCharacteristics;
	NSMutableSet* _updatedMediaProperties;
	HMFTimer* _coalesceTimer;
	HMFTimer* _delayTimer;
	NSUUID* _notificationUpdateIdentifier;

}

@property (nonatomic,retain) NSString * destination;                             //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) NSString * requestIdentifier;                       //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                              //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedCharacteristics;              //@synthesize updatedCharacteristics=_updatedCharacteristics - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedMediaProperties;              //@synthesize updatedMediaProperties=_updatedMediaProperties - In the implementation block
@property (nonatomic,retain) HMFTimer * coalesceTimer;                           //@synthesize coalesceTimer=_coalesceTimer - In the implementation block
@property (nonatomic,retain) HMFTimer * delayTimer;                              //@synthesize delayTimer=_delayTimer - In the implementation block
@property (assign,nonatomic) BOOL delaySupported;                                //@synthesize delaySupported=_delaySupported - In the implementation block
@property (nonatomic,retain) NSUUID * notificationUpdateIdentifier;              //@synthesize notificationUpdateIdentifier=_notificationUpdateIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHome:(HMDHome *)arg1 ;
-(HMDHome *)home;
-(NSString *)requestIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(id)initWithDestination:(id)arg1 watchDevice:(BOOL)arg2 withRequestIdentifier:(id)arg3 home:(id)arg4 ;
-(id)sendNotificationForCharacteristicChanges:(id)arg1 withRequestIdentifier:(id)arg2 ;
-(id)sendNotificationForMediaProperties:(id)arg1 withRequestIdentifier:(id)arg2 ;
-(NSMutableSet *)updatedCharacteristics;
-(id)_beginCoalesce:(BOOL)arg1 ;
-(id)_dispatchNotification;
-(NSMutableSet *)updatedMediaProperties;
-(HMFTimer *)coalesceTimer;
-(void)setCoalesceTimer:(HMFTimer *)arg1 ;
-(BOOL)delaySupported;
-(HMFTimer *)delayTimer;
-(void)setDelayTimer:(HMFTimer *)arg1 ;
-(NSUUID *)notificationUpdateIdentifier;
-(void)setNotificationUpdateIdentifier:(NSUUID *)arg1 ;
-(void)setUpdatedCharacteristics:(NSMutableSet *)arg1 ;
-(void)setUpdatedMediaProperties:(NSMutableSet *)arg1 ;
-(void)setDelaySupported:(BOOL)arg1 ;
-(void)setDestination:(NSString *)arg1 ;
-(NSString *)destination;
-(void)setRequestIdentifier:(NSString *)arg1 ;
@end

