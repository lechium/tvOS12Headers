/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTPurgable.h>

@protocol OS_dispatch_queue;
@class RTBluetoothManager, RTBatteryManager, RTCameraManager, RTNavigationManager, RTReachabilityManager, RTWalletManager, RTLocationManager, RTMetricManager, RTLearnedLocationManager, RTPersistenceManager, RTPlatform, NSObject, NSString;

@interface RTHintManager : NSObject <RTPurgable> {

	RTBluetoothManager* _bluetoothManager;
	RTBatteryManager* _batteryManager;
	RTCameraManager* _cameraManager;
	RTNavigationManager* _navigationManager;
	RTReachabilityManager* _reachabilityManager;
	RTWalletManager* _walletManager;
	RTLocationManager* _locationManager;
	RTMetricManager* _metricManager;
	RTLearnedLocationManager* _learnedLocationManager;
	RTPersistenceManager* _persistenceManager;
	RTPlatform* _platform;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) RTBluetoothManager * bluetoothManager;                          //@synthesize bluetoothManager=_bluetoothManager - In the implementation block
@property (nonatomic,retain) RTBatteryManager * batteryManager;                              //@synthesize batteryManager=_batteryManager - In the implementation block
@property (nonatomic,retain) RTCameraManager * cameraManager;                                //@synthesize cameraManager=_cameraManager - In the implementation block
@property (nonatomic,retain) RTNavigationManager * navigationManager;                        //@synthesize navigationManager=_navigationManager - In the implementation block
@property (nonatomic,retain) RTReachabilityManager * reachabilityManager;                    //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (nonatomic,retain) RTWalletManager * walletManager;                                //@synthesize walletManager=_walletManager - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                            //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;              //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;                      //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                          //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)boundingBoxPredicateForLocation:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(RTPlatform *)platform;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)_unregisterForNotifications;
-(void)_registerForNotifications;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(RTLocationManager *)locationManager;
-(RTLearnedLocationManager *)learnedLocationManager;
-(void)shutdown;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(RTPersistenceManager *)persistenceManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(RTMetricManager *)metricManager;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(id)initWithBluetoothManager:(id)arg1 batteryManager:(id)arg2 navigationManager:(id)arg3 reachabilityManager:(id)arg4 walletManager:(id)arg5 locationManager:(id)arg6 metricManager:(id)arg7 learnedLocationManager:(id)arg8 persistenceManager:(id)arg9 cameraManager:(id)arg10 platform:(id)arg11 ;
-(void)purgeManager:(id)arg1 performPurgeOfType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchIsHintNearLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchHintStatsNearLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTBluetoothManager *)bluetoothManager;
-(void)onBluetoothNotification:(id)arg1 ;
-(RTBatteryManager *)batteryManager;
-(void)onBatteryNotification:(id)arg1 ;
-(RTNavigationManager *)navigationManager;
-(void)onNavigationNotification:(id)arg1 ;
-(RTReachabilityManager *)reachabilityManager;
-(void)onReachabilityChange:(id)arg1 ;
-(RTCameraManager *)cameraManager;
-(void)onCameraNotification:(id)arg1 ;
-(RTWalletManager *)walletManager;
-(void)onWalletNotification:(id)arg1 ;
-(void)_submitHintFromSource:(long long)arg1 location:(id)arg2 ;
-(void)_submitHintFromSource:(long long)arg1 location:(id)arg2 managedObjectContext:(id)arg3 ;
-(void)_fetchHintStatsNearLocation:(id)arg1 managedObjectContext:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_clearHintsPredating:(id)arg1 managedObjectContext:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_clearHintsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_onBluetoothNotification:(id)arg1 ;
-(void)_submitHintFromSource:(long long)arg1 ;
-(void)_onBatteryNotification:(id)arg1 ;
-(void)_onNavigationNotification:(id)arg1 ;
-(void)_onReachabilityChange:(id)arg1 ;
-(void)_onCameraNotification:(id)arg1 ;
-(void)_onWalletNotification:(id)arg1 ;
-(void)setBluetoothManager:(RTBluetoothManager *)arg1 ;
-(void)setBatteryManager:(RTBatteryManager *)arg1 ;
-(void)setCameraManager:(RTCameraManager *)arg1 ;
-(void)setNavigationManager:(RTNavigationManager *)arg1 ;
-(void)setReachabilityManager:(RTReachabilityManager *)arg1 ;
-(void)setWalletManager:(RTWalletManager *)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
@end

