/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, RTLocationManager, RTVisitManager, FBSDisplayLayoutMonitor, RTDefaultsManager, PKHost, RTDarwinNotificationHelper, RTPlatform, NSUUID, NSString;

@interface RTMicroLocationRequester : NSObject <FBSDisplayLayoutObserver> {

	BOOL _monitoringForMicroLocations;
	BOOL _platformSupportsMicroLocations;
	BOOL _displayBacklit;
	BOOL _applicationPredictionExtensionEnabled;
	BOOL _zeroKeywordEnabled;
	BOOL _locationEligibleForMicroLocations;
	id _driver;
	NSObject*<OS_dispatch_queue> _queue;
	RTLocationManager* _locationManager;
	RTVisitManager* _visitManager;
	FBSDisplayLayoutMonitor* _frontBoardLayoutMonitor;
	RTDefaultsManager* _defaultsManager;
	PKHost* _pluginKitHost;
	RTDarwinNotificationHelper* _darwinNotificationHelper;
	RTPlatform* _platform;
	NSUUID* _lastLocationOfInterestIdentifier;

}

@property (nonatomic,retain) id driver;                                                          //@synthesize driver=_driver - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL monitoringForMicroLocations;                                   //@synthesize monitoringForMicroLocations=_monitoringForMicroLocations - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                                //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTVisitManager * visitManager;                                      //@synthesize visitManager=_visitManager - In the implementation block
@property (nonatomic,retain) FBSDisplayLayoutMonitor * frontBoardLayoutMonitor;                  //@synthesize frontBoardLayoutMonitor=_frontBoardLayoutMonitor - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                                //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) PKHost * pluginKitHost;                                             //@synthesize pluginKitHost=_pluginKitHost - In the implementation block
@property (nonatomic,retain) RTDarwinNotificationHelper * darwinNotificationHelper;              //@synthesize darwinNotificationHelper=_darwinNotificationHelper - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                              //@synthesize platform=_platform - In the implementation block
@property (assign,nonatomic) BOOL platformSupportsMicroLocations;                                //@synthesize platformSupportsMicroLocations=_platformSupportsMicroLocations - In the implementation block
@property (assign,nonatomic) BOOL displayBacklit;                                                //@synthesize displayBacklit=_displayBacklit - In the implementation block
@property (assign,nonatomic) BOOL applicationPredictionExtensionEnabled;                         //@synthesize applicationPredictionExtensionEnabled=_applicationPredictionExtensionEnabled - In the implementation block
@property (assign,nonatomic) BOOL zeroKeywordEnabled;                                            //@synthesize zeroKeywordEnabled=_zeroKeywordEnabled - In the implementation block
@property (nonatomic,retain) NSUUID * lastLocationOfInterestIdentifier;                          //@synthesize lastLocationOfInterestIdentifier=_lastLocationOfInterestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL locationEligibleForMicroLocations;                             //@synthesize locationEligibleForMicroLocations=_locationEligibleForMicroLocations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(RTPlatform *)platform;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)_unregisterForNotifications;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(id)driver;
-(RTLocationManager *)locationManager;
-(RTVisitManager *)visitManager;
-(void)onLowConfidenceVisitNotification:(id)arg1 ;
-(void)_fetchLowConfidenceVisitIncident:(/*^block*/id)arg1 ;
-(void)shutdown;
-(void)onVisitManagerAvailable:(id)arg1 ;
-(void)setVisitManager:(RTVisitManager *)arg1 ;
-(id)initWithLocationManager:(id)arg1 visitManager:(id)arg2 defaultsManager:(id)arg3 darwinNotificationHelper:(id)arg4 platform:(id)arg5 ;
-(RTDefaultsManager *)defaultsManager;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(id)initWithLocationManager:(id)arg1 visitManager:(id)arg2 frontBoardLayoutMonitor:(id)arg3 defaultsManager:(id)arg4 pluginKitHost:(id)arg5 darwinNotificationHelper:(id)arg6 platform:(id)arg7 ;
-(void)_onLowConfidenceVisitIncident:(id)arg1 ;
-(void)_updatePredictedApplicationExtensions:(id)arg1 error:(id)arg2 ;
-(BOOL)_allowMonitoringForMicroLocations;
-(void)_requestMonitorForMicroLocations:(BOOL)arg1 atLocationOfInterestWithIdentifier:(id)arg2 ;
-(void)_unregisterForPredictedApplicationExtensionStatusChangeNotifications;
-(void)_registerForPredictedApplicationExtensionStatusChangeNotifications;
-(void)_registerForZeroKeywordStatusChangeNotifications;
-(BOOL)_determineZeroKeywordEnabled;
-(void)_handleMicroLocationRequestEligibilityUpdate:(id)arg1 ;
-(void)_resumeNotifications;
-(void)_suspendNotifications;
-(void)_onBacklightChange:(BOOL)arg1 ;
-(BOOL)_allowRequestingForMicroLocations;
-(void)setDriver:(id)arg1 ;
-(BOOL)monitoringForMicroLocations;
-(void)setMonitoringForMicroLocations:(BOOL)arg1 ;
-(FBSDisplayLayoutMonitor *)frontBoardLayoutMonitor;
-(void)setFrontBoardLayoutMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(PKHost *)pluginKitHost;
-(void)setPluginKitHost:(PKHost *)arg1 ;
-(RTDarwinNotificationHelper *)darwinNotificationHelper;
-(void)setDarwinNotificationHelper:(RTDarwinNotificationHelper *)arg1 ;
-(BOOL)platformSupportsMicroLocations;
-(void)setPlatformSupportsMicroLocations:(BOOL)arg1 ;
-(BOOL)displayBacklit;
-(void)setDisplayBacklit:(BOOL)arg1 ;
-(BOOL)applicationPredictionExtensionEnabled;
-(void)setApplicationPredictionExtensionEnabled:(BOOL)arg1 ;
-(BOOL)zeroKeywordEnabled;
-(void)setZeroKeywordEnabled:(BOOL)arg1 ;
-(NSUUID *)lastLocationOfInterestIdentifier;
-(void)setLastLocationOfInterestIdentifier:(NSUUID *)arg1 ;
-(BOOL)locationEligibleForMicroLocations;
-(void)setLocationEligibleForMicroLocations:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
@end

