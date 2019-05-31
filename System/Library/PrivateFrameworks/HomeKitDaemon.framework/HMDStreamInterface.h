/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDCameraRemoteStreamProtocol;
@class HMDCameraNetworkConfig, HMDCameraSessionID, NSObject, NSString;

@interface HMDStreamInterface : HMFObject <HMFLogging> {

	int _localRTPSocket;
	unsigned long long _streamInterfaceState;
	HMDCameraNetworkConfig* _localNetworkConfig;
	HMDCameraSessionID* _sessionID;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<HMDCameraRemoteStreamProtocol> _sessionHandler;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,readonly) HMDCameraNetworkConfig * localNetworkConfig;                   //@synthesize localNetworkConfig=_localNetworkConfig - In the implementation block
@property (nonatomic,readonly) HMDCameraSessionID * sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) id<HMDCameraRemoteStreamProtocol> sessionHandler;              //@synthesize sessionHandler=_sessionHandler - In the implementation block
@property (assign,nonatomic) int localRTPSocket;                                              //@synthesize localRTPSocket=_localRTPSocket - In the implementation block
@property (assign,nonatomic) unsigned long long streamInterfaceState;                         //@synthesize streamInterfaceState=_streamInterfaceState - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                    //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDCameraSessionID *)sessionID;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegateQueue:(id)arg3 localNetworkConfig:(id)arg4 sessionHandler:(id)arg5 ;
-(id<HMDCameraRemoteStreamProtocol>)sessionHandler;
-(int)openSocket;
-(HMDCameraNetworkConfig *)localNetworkConfig;
-(void)setLocalRTPSocket:(int)arg1 ;
-(BOOL)loadMiscFields:(id)arg1 ;
-(void)setStreamInterfaceState:(unsigned long long)arg1 ;
-(int)localRTPSocket;
-(unsigned long long)streamInterfaceState;
-(id)extractNetworkConfig:(int)arg1 peerNameExtractor:(/*function pointer*/void*)arg2 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
@end

