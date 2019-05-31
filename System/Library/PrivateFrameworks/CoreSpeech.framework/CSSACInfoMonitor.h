/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSSACInfoMonitor : CSEventMonitor {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isDeviceRoleStereo;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)isDeviceRoleStereo;
-(id)init;
@end

