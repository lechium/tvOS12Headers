/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTXPCListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class RTAccountManager, RTActionManager, RTAssetManager, RTAuthorizationManager, RTDeviceLocationPredictor, RTDiagnostics, RTEventAgentManager, RTEventModelProvider, RTFingerprintManager, RTLearnedLocationManager, RTLocationManager, RTLocationStore, RTMotionActivityManager, RTPersistenceManager, RTPlatform, RTPredictedApplicationManager, RTPurgeManager, RTRouteManager, RTScenarioTriggerManager, RTVehicleLocationProvider, RTVisitManager, RTWiFiManager, NSString;

@interface RTClientListenerInternal : RTXPCListener <NSXPCListenerDelegate> {

	RTAccountManager* _accountManager;
	RTActionManager* _actionManager;
	RTAssetManager* _assetManager;
	RTAuthorizationManager* _authorizationManager;
	RTDeviceLocationPredictor* _deviceLocationPredictor;
	RTDiagnostics* _diagnostics;
	RTEventAgentManager* _eventAgentManager;
	RTEventModelProvider* _eventModelProvider;
	RTFingerprintManager* _fingerprintManager;
	RTLearnedLocationManager* _learnedLocationManager;
	RTLocationManager* _locationManager;
	RTLocationStore* _locationStore;
	RTMotionActivityManager* _motionActivityManager;
	RTPersistenceManager* _persistenceManager;
	RTPlatform* _platform;
	RTPredictedApplicationManager* _predictedApplicationManager;
	RTPurgeManager* _purgeManager;
	RTRouteManager* _routeManager;
	RTScenarioTriggerManager* _scenarioTriggerManager;
	RTVehicleLocationProvider* _vehicleLocationProvider;
	RTVisitManager* _visitManager;
	RTWiFiManager* _wifiManager;

}

@property (nonatomic,retain) RTAccountManager * accountManager;                                        //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,retain) RTActionManager * actionManager;                                          //@synthesize actionManager=_actionManager - In the implementation block
@property (nonatomic,retain) RTAssetManager * assetManager;                                            //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) RTAuthorizationManager * authorizationManager;                            //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (nonatomic,retain) RTDeviceLocationPredictor * deviceLocationPredictor;                      //@synthesize deviceLocationPredictor=_deviceLocationPredictor - In the implementation block
@property (nonatomic,retain) RTDiagnostics * diagnostics;                                              //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,retain) RTEventAgentManager * eventAgentManager;                                  //@synthesize eventAgentManager=_eventAgentManager - In the implementation block
@property (nonatomic,retain) RTEventModelProvider * eventModelProvider;                                //@synthesize eventModelProvider=_eventModelProvider - In the implementation block
@property (nonatomic,retain) RTFingerprintManager * fingerprintManager;                                //@synthesize fingerprintManager=_fingerprintManager - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;                        //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                                      //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTLocationStore * locationStore;                                          //@synthesize locationStore=_locationStore - In the implementation block
@property (nonatomic,retain) RTMotionActivityManager * motionActivityManager;                          //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;                                //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                                    //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) RTPredictedApplicationManager * predictedApplicationManager;              //@synthesize predictedApplicationManager=_predictedApplicationManager - In the implementation block
@property (nonatomic,retain) RTPurgeManager * purgeManager;                                            //@synthesize purgeManager=_purgeManager - In the implementation block
@property (nonatomic,retain) RTRouteManager * routeManager;                                            //@synthesize routeManager=_routeManager - In the implementation block
@property (nonatomic,retain) RTScenarioTriggerManager * scenarioTriggerManager;                        //@synthesize scenarioTriggerManager=_scenarioTriggerManager - In the implementation block
@property (nonatomic,retain) RTVehicleLocationProvider * vehicleLocationProvider;                      //@synthesize vehicleLocationProvider=_vehicleLocationProvider - In the implementation block
@property (nonatomic,retain) RTVisitManager * visitManager;                                            //@synthesize visitManager=_visitManager - In the implementation block
@property (nonatomic,retain) RTWiFiManager * wifiManager;                                              //@synthesize wifiManager=_wifiManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RTPlatform *)platform;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(RTDiagnostics *)diagnostics;
-(RTActionManager *)actionManager;
-(void)setDiagnostics:(RTDiagnostics *)arg1 ;
-(RTWiFiManager *)wifiManager;
-(RTLocationManager *)locationManager;
-(void)setAssetManager:(RTAssetManager *)arg1 ;
-(RTVisitManager *)visitManager;
-(RTAuthorizationManager *)authorizationManager;
-(RTLearnedLocationManager *)learnedLocationManager;
-(void)setAuthorizationManager:(RTAuthorizationManager *)arg1 ;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(void)setVisitManager:(RTVisitManager *)arg1 ;
-(RTPersistenceManager *)persistenceManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(RTDeviceLocationPredictor *)deviceLocationPredictor;
-(RTScenarioTriggerManager *)scenarioTriggerManager;
-(RTPredictedApplicationManager *)predictedApplicationManager;
-(RTAccountManager *)accountManager;
-(void)setAccountManager:(RTAccountManager *)arg1 ;
-(void)setActionManager:(RTActionManager *)arg1 ;
-(void)setDeviceLocationPredictor:(RTDeviceLocationPredictor *)arg1 ;
-(RTEventAgentManager *)eventAgentManager;
-(void)setEventAgentManager:(RTEventAgentManager *)arg1 ;
-(RTEventModelProvider *)eventModelProvider;
-(void)setEventModelProvider:(RTEventModelProvider *)arg1 ;
-(RTFingerprintManager *)fingerprintManager;
-(void)setFingerprintManager:(RTFingerprintManager *)arg1 ;
-(RTLocationStore *)locationStore;
-(void)setLocationStore:(RTLocationStore *)arg1 ;
-(void)setPredictedApplicationManager:(RTPredictedApplicationManager *)arg1 ;
-(RTPurgeManager *)purgeManager;
-(void)setPurgeManager:(RTPurgeManager *)arg1 ;
-(RTRouteManager *)routeManager;
-(void)setRouteManager:(RTRouteManager *)arg1 ;
-(void)setScenarioTriggerManager:(RTScenarioTriggerManager *)arg1 ;
-(RTVehicleLocationProvider *)vehicleLocationProvider;
-(void)setVehicleLocationProvider:(RTVehicleLocationProvider *)arg1 ;
-(void)setWifiManager:(RTWiFiManager *)arg1 ;
-(id)initWithAccountManager:(id)arg1 actionManager:(id)arg2 assetManager:(id)arg3 authorizationManager:(id)arg4 deviceLocationPredictor:(id)arg5 diagnostics:(id)arg6 eventAgentManager:(id)arg7 eventModelProvider:(id)arg8 fingerprintManager:(id)arg9 learnedLocationManager:(id)arg10 locationManager:(id)arg11 locationStore:(id)arg12 motionActivityManager:(id)arg13 persistenceManager:(id)arg14 platform:(id)arg15 predictedApplicationManager:(id)arg16 purgeManager:(id)arg17 routeManager:(id)arg18 scenarioTriggerManager:(id)arg19 vehicleLocationProvider:(id)arg20 visitManager:(id)arg21 ;
-(RTMotionActivityManager *)motionActivityManager;
-(void)setMotionActivityManager:(RTMotionActivityManager *)arg1 ;
-(id)handleClientConnection:(id)arg1 ;
-(id)init;
-(RTAssetManager *)assetManager;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

