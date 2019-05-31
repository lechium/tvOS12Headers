/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet;

@interface CalPreferences : NSObject {

	NSString* _domain;
	NSMutableSet* _registeredNotificationsToReflect;

}
-(void)unregisterReflectionForPreferenceWithNotificationName:(id)arg1 ;
-(void)_preferenceChangedInternally:(id)arg1 ;
-(void)_synchronizePreferences;
-(void)_preferenceChangedExternally:(id)arg1 ;
-(void)registerReflectionForPreferenceWithNotificationName:(id)arg1 ;
-(id)getValueForPreference:(id)arg1 expectedClass:(Class)arg2 ;
-(void)setValueForPreference:(id)arg1 value:(id)arg2 notificationName:(id)arg3 ;
-(BOOL)getBooleanPreference:(id)arg1 defaultValue:(BOOL)arg2 ;
-(void)setBooleanPreference:(id)arg1 value:(BOOL)arg2 notificationName:(id)arg3 ;
-(long long)getIntegerPreference:(id)arg1 defaultValue:(long long)arg2 ;
-(void)setIntegerPreference:(id)arg1 value:(long long)arg2 notificationName:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)initWithDomain:(id)arg1 ;
@end
