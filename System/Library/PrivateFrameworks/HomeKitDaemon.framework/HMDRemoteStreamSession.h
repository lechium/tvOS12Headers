/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraStreamSession.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraRemoteStreamSenderProtocol, HMDCameraRemoteStreamReceiverProtocol;
@class NSString;

@interface HMDRemoteStreamSession : HMDCameraStreamSession <HMFLogging> {

	id<HMDCameraRemoteStreamSenderProtocol> _streamSender;
	id<HMDCameraRemoteStreamReceiverProtocol> _streamReceiver;
	unsigned long long _streamState;

}

@property (nonatomic,readonly) id<HMDCameraRemoteStreamSenderProtocol> streamSender;                  //@synthesize streamSender=_streamSender - In the implementation block
@property (nonatomic,readonly) id<HMDCameraRemoteStreamReceiverProtocol> streamReceiver;              //@synthesize streamReceiver=_streamReceiver - In the implementation block
@property (assign,nonatomic) unsigned long long streamState;                                          //@synthesize streamState=_streamState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)logIdentifier;
-(id)initWithSessionID:(id)arg1 reachabilityPath:(unsigned long long)arg2 streamSender:(id)arg3 streamReceiver:(id)arg4 remoteCapabilities:(id)arg5 streamPreference:(id)arg6 ;
-(id<HMDCameraRemoteStreamSenderProtocol>)streamSender;
-(void)updateState:(long long)arg1 ;
-(BOOL)containsState:(long long)arg1 ;
-(id)stateAsString;
-(id<HMDCameraRemoteStreamReceiverProtocol>)streamReceiver;
-(unsigned long long)streamState;
-(void)setStreamState:(unsigned long long)arg1 ;
-(void)dealloc;
@end

