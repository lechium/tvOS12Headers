/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPAVRoutingDataSource : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _devicePresenceDetected;
	long long _discoveryMode;

}

@property (assign,nonatomic) long long discoveryMode;                       //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,readonly) BOOL devicePresenceDetected;                 //@synthesize devicePresenceDetected=_devicePresenceDetected - In the implementation block
@property (nonatomic,readonly) BOOL supportsMultipleSelection; 
-(BOOL)devicePresenceDetected;
-(void)getRoutesForCategory:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getPickedRouteHasVolumeControlWithCompletion:(/*^block*/id)arg1 ;
-(long long)discoveryMode;
-(void)getExternalScreenTypeWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)routeIsLeaderOfEndpoint:(id)arg1 ;
-(void)unpickAirPlayAVRoutesWithCompletion:(/*^block*/id)arg1 ;
-(void)_volumeControlAvailabilityDidChangeNotification:(id)arg1 ;
-(void)_externalScreenTypeDidChangeNotification:(id)arg1 ;
-(void)_activeAudioRouteDidChangeNotification:(id)arg1 ;
-(void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)supportsMultipleSelection;
-(void)_superclassRegisterNotifications;
-(void)_superclassUnregisterNotifications;
-(id)init;
-(void)dealloc;
-(void)setDiscoveryMode:(long long)arg1 ;
@end

