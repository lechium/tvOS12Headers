/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDUserPresenceFeedSessionDelegate, OS_dispatch_queue;
@class NSObject, HMDHomeManager, NSUUID, HMDCentralMessageDispatcher, HMDDevice, HMDUser, HMUserPresenceAuthorization, HMUserPresenceCompute, HMDUserPresenceRegion, HMDUserPresenceUpdateReason, NSDate, HMDUserPresenceFeedRetryTimer, NSString;

@interface HMDUserPresenceFeedSession : NSObject <HMFLogging, HMFTimerDelegate> {

	id<HMDUserPresenceFeedSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHomeManager* _homeManager;
	NSUUID* _targetUUID;
	HMDCentralMessageDispatcher* _remoteMessageDispatcher;
	HMDDevice* _residentDevice;
	HMDUser* _user;
	HMUserPresenceAuthorization* _presenceAuthStatus;
	HMUserPresenceCompute* _presenceComputeStatus;
	HMDUserPresenceRegion* _presenceRegionStatus;
	HMDUserPresenceUpdateReason* _reason;
	NSDate* _statusChangeDate;
	NSUUID* _sessionID;
	HMDUserPresenceFeedRetryTimer* _statusUpdateRetryTimer;

}

@property (nonatomic,__weak,readonly) id<HMDUserPresenceFeedSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,__weak,readonly) HMDHomeManager * homeManager;                                 //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) NSUUID * targetUUID;                                                 //@synthesize targetUUID=_targetUUID - In the implementation block
@property (nonatomic,readonly) HMDCentralMessageDispatcher * remoteMessageDispatcher;               //@synthesize remoteMessageDispatcher=_remoteMessageDispatcher - In the implementation block
@property (nonatomic,readonly) HMDDevice * residentDevice;                                          //@synthesize residentDevice=_residentDevice - In the implementation block
@property (nonatomic,readonly) HMDUser * user;                                                      //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) HMUserPresenceAuthorization * presenceAuthStatus;                    //@synthesize presenceAuthStatus=_presenceAuthStatus - In the implementation block
@property (nonatomic,readonly) HMUserPresenceCompute * presenceComputeStatus;                       //@synthesize presenceComputeStatus=_presenceComputeStatus - In the implementation block
@property (nonatomic,readonly) HMDUserPresenceRegion * presenceRegionStatus;                        //@synthesize presenceRegionStatus=_presenceRegionStatus - In the implementation block
@property (nonatomic,retain) HMDUserPresenceUpdateReason * reason;                                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDate * statusChangeDate;                                           //@synthesize statusChangeDate=_statusChangeDate - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionID;                                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) HMDUserPresenceFeedRetryTimer * statusUpdateRetryTimer;                //@synthesize statusUpdateRetryTimer=_statusUpdateRetryTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)sessionID;
-(void)setReason:(HMDUserPresenceUpdateReason *)arg1 ;
-(HMDHomeManager *)homeManager;
-(id)logIdentifier;
-(HMDUser *)user;
-(HMDDevice *)residentDevice;
-(HMUserPresenceAuthorization *)presenceAuthStatus;
-(HMUserPresenceCompute *)presenceComputeStatus;
-(void)timerDidFire:(id)arg1 ;
-(NSUUID *)targetUUID;
-(HMDCentralMessageDispatcher *)remoteMessageDispatcher;
-(HMDUserPresenceRegion *)presenceRegionStatus;
-(HMDUserPresenceFeedRetryTimer *)statusUpdateRetryTimer;
-(void)_send;
-(void)_handleStatusUpdateMessageError:(id)arg1 responseTime:(double)arg2 ;
-(NSDate *)statusChangeDate;
-(void)_callDelegate;
-(id)initWithDelegate:(id)arg1 homeManager:(id)arg2 workQueue:(id)arg3 targetUUID:(id)arg4 remoteMessageDispatcher:(id)arg5 residentDevice:(id)arg6 user:(id)arg7 presenceAuthStatus:(id)arg8 presenceComputeStatus:(id)arg9 presenceRegionStatus:(id)arg10 reason:(id)arg11 ;
-(void)setStatusUpdateRetryTimer:(HMDUserPresenceFeedRetryTimer *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<HMDUserPresenceFeedSessionDelegate>)delegate;
-(HMDUserPresenceUpdateReason *)reason;
-(void)send;
@end

