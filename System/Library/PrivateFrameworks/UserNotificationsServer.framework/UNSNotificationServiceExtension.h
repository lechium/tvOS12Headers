/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSExtension, LSPlugInKitProxy;

@interface UNSNotificationServiceExtension : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSExtension* _extension;
	double _serviceTime;
	double _graceTime;

}

@property (nonatomic,readonly) LSPlugInKitProxy * proxy; 
+(id)_extensionIdentifiersCurrentlyAllowedAccessToNotificationCenter;
+(void)_allowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1 ;
+(void)_disallowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1 ;
+(BOOL)isAccessToNotificationCenterAllowedForServiceExtensionWithIdentifier:(id)arg1 ;
-(id)_initWithExtension:(id)arg1 serviceTime:(double)arg2 graceTime:(double)arg3 ;
-(id)mutateContentForNotificationRequest:(id)arg1 error:(id*)arg2 ;
-(LSPlugInKitProxy *)proxy;
@end
