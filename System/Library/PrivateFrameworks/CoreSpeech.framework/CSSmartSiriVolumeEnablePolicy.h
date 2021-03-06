/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSPolicy.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSSmartSiriVolumeEnablePolicy : CSPolicy {

	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_subscribeEventMonitors;
-(void)_addSmartSiriVolumeEnabledConditions;
-(id)init;
@end

