/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FTCServiceAvailabilityCenter : NSObject {

	NSMutableDictionary* _availabilityHandlers;

}
+(id)sharedInstance;
-(void)_postNotificationForService:(long long)arg1 availability:(long long)arg2 ;
-(void)_handleServiceMonitorNotification:(id)arg1 ;
-(BOOL)_isValidServiceType:(long long)arg1 ;
-(void)_startListeningToMonitor:(id)arg1 ;
-(id)containerForService:(long long)arg1 create:(BOOL)arg2 ;
-(void)_stopListeningToMonitor:(id)arg1 ;
-(BOOL)hasListenerID:(id)arg1 forService:(long long)arg2 ;
-(BOOL)removeListenerID:(id)arg1 forService:(long long)arg2 ;
-(long long)availabilityForListenerID:(id)arg1 forService:(long long)arg2 ;
-(BOOL)addListenerID:(id)arg1 forService:(long long)arg2 ;
-(id)init;
-(void)dealloc;
@end

