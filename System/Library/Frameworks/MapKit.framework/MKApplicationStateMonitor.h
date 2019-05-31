/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSApplicationStateMonitor;

@interface MKApplicationStateMonitor : NSObject {

	BKSApplicationStateMonitor* _appStateMonitor;
	BOOL _inBackground;
	BOOL _active;
	unsigned long long _observerCount;
	BOOL _forceBackboardServicesMonitoring;

}

@property (assign,nonatomic) BOOL forceBackboardServicesMonitoring;                  //@synthesize forceBackboardServicesMonitoring=_forceBackboardServicesMonitoring - In the implementation block
@property (getter=isInBackground,nonatomic,readonly) BOOL inBackground;              //@synthesize inBackground=_inBackground - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;                          //@synthesize active=_active - In the implementation block
+(id)sharedInstance;
-(void)stopObserving;
-(void)startObserving;
-(void)setForceBackboardServicesMonitoring:(BOOL)arg1 ;
-(void)_enterBackground;
-(void)_exitBackground;
-(void)_becomeActive;
-(void)_handleApplicationStateChange:(id)arg1 interestedPID:(int)arg2 ;
-(void)_performSynchronouslyOnMainQueue:(/*^block*/id)arg1 ;
-(BOOL)isInBackground;
-(BOOL)forceBackboardServicesMonitoring;
-(void)_resignActive;
-(void)dealloc;
-(BOOL)isActive;
@end
