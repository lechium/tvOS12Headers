/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDCameraSessionID, IDSService, HMFOSTransaction, NSString;

@interface HMDCameraSnapshotIDSRelay : HMFObject <IDSServiceDelegate, HMFLogging> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMDCameraSessionID* _sessionID;
	IDSService* _idsStreamService;
	HMFOSTransaction* _snapshotRelayTransaction;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMDCameraSessionID * sessionID;                         //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) IDSService * idsStreamService;                          //@synthesize idsStreamService=_idsStreamService - In the implementation block
@property (nonatomic,retain) HMFOSTransaction * snapshotRelayTransaction;              //@synthesize snapshotRelayTransaction=_snapshotRelayTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDCameraSessionID *)sessionID;
-(id)logIdentifier;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 ;
-(IDSService *)idsStreamService;
-(HMFOSTransaction *)snapshotRelayTransaction;
-(void)setSnapshotRelayTransaction:(HMFOSTransaction *)arg1 ;
-(void)dealloc;
@end

