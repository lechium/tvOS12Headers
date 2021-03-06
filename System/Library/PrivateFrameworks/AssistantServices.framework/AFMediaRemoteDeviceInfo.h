/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface AFMediaRemoteDeviceInfo : NSObject {

	NSString* _routeIdentifier;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,copy) NSString * routeIdentifier;                              //@synthesize routeIdentifier=_routeIdentifier - In the implementation block
+(id)currentDevice;
-(void)setRouteIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)routeIdentifier;
-(id)init;
@end

