/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AssistantServices/AssistantServices-Structs.h>
@class NSObject, NSHashTable;

@interface AFAccessibilityObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AccessibilityPreferences _preferences;
	NSHashTable* _listeners;

}

@property (nonatomic,readonly) BOOL isVoiceOverTouchEnabled; 
@property (nonatomic,readonly) BOOL isVibrationDisabled; 
+(id)sharedObserver;
-(BOOL)isVoiceOverTouchEnabled;
-(BOOL)isVibrationDisabled;
-(void)voiceOverTouchEnabledPreferenceDidChange:(id)arg1 ;
-(void)vibrationDisabledPreferenceDidChange:(id)arg1 ;
-(void)_updateVoiceOverTouchEnabledPreference;
-(void)_updateVibrationDisabledPreference;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(id)init;
@end

