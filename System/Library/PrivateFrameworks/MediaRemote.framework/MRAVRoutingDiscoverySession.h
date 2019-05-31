/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaRemote/MediaRemote-Structs.h>
@class NSObject, NSArray, NSString;

@interface MRAVRoutingDiscoverySession : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _endpointsChangedCallbacks;
	NSMutableDictionary* _outputDevicesChangedCallbacks;
	BOOL _alwaysAllowUpdates;

}

@property (nonatomic,readonly) unsigned endpointFeatures; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
@property (nonatomic,readonly) NSArray * availableEndpoints; 
@property (nonatomic,readonly) NSArray * availableOutputDevices; 
@property (assign,nonatomic) unsigned discoveryMode; 
@property (assign,nonatomic) BOOL alwaysAllowUpdates;                                //@synthesize alwaysAllowUpdates=_alwaysAllowUpdates - In the implementation block
@property (assign,nonatomic) unsigned targetAudioSessionID; 
@property (nonatomic,copy) NSString * routingContextUID; 
@property (nonatomic,readonly) NSArray * endpointsChangedCallbacks; 
@property (nonatomic,readonly) NSArray * outputDevicesChangedCallbacks; 
+(id)discoverySessionWithEndpointFeatures:(unsigned)arg1 ;
-(NSArray *)endpointsChangedCallbacks;
-(NSArray *)outputDevicesChangedCallbacks;
-(id)addEndpointsChangedCallback:(/*^block*/id)arg1 ;
-(id)addOutputDevicesChangedCallback:(/*^block*/id)arg1 ;
-(void)removeEndpointsChangedCallback:(id)arg1 ;
-(void)removeOutputDevicesChangedCallback:(id)arg1 ;
-(BOOL)alwaysAllowUpdates;
-(void)setAlwaysAllowUpdates:(BOOL)arg1 ;
-(id)_init;
@end

