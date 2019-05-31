/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWSphereModeSelector : NSObject {

	OpaqueFigCaptureStreamRef _stream;
	CFStringRef _currentSphereMode;
	float _maximumFrameRate;
	BOOL _sphereVideoSupported;
	BOOL _sphereVideoEnabled;
	BOOL _avoidsSphereRecentering;
	BOOL _enablesSphereWhenAvailable;
	BOOL _motionDataInvalid;
	BOOL _lowPowerSphereModeEnabled;
	BOOL _stillPreviewActiveSupported;
	BOOL _zeroShutterLagEnabled;
	int _sphereThermalLevel;
	BOOL _tripodModeEnabled;
	BOOL _depthDataDeliveryEnabled;

}

@property (assign,nonatomic) float maximumFrameRate; 
@property (nonatomic,readonly) BOOL sphereVideoSupported; 
@property (assign,nonatomic) BOOL sphereVideoEnabled; 
@property (assign,nonatomic) BOOL avoidsSphereRecentering; 
@property (assign,nonatomic) BOOL enablesSphereWhenAvailable; 
@property (assign,nonatomic) BOOL zeroShutterLagEnabled; 
@property (assign,nonatomic) BOOL lowPowerSphereModeEnabled; 
@property (assign,nonatomic) int systemThermalLevel; 
@property (assign,nonatomic) BOOL tripodModeEnabled; 
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (readonly) CFStringRef currentSphereMode; 
+(void)initialize;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)depthDataDeliveryEnabled;
-(void)_updateSphereMode;
-(id)initWithStillActivePreviewSupported:(BOOL)arg1 sphereVideoSupported:(BOOL)arg2 ;
-(float)maximumFrameRate;
-(void)setMaximumFrameRate:(float)arg1 ;
-(BOOL)sphereVideoSupported;
-(BOOL)sphereVideoEnabled;
-(void)setSphereVideoEnabled:(BOOL)arg1 ;
-(BOOL)avoidsSphereRecentering;
-(void)setAvoidsSphereRecentering:(BOOL)arg1 ;
-(BOOL)enablesSphereWhenAvailable;
-(void)setEnablesSphereWhenAvailable:(BOOL)arg1 ;
-(BOOL)zeroShutterLagEnabled;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(BOOL)lowPowerSphereModeEnabled;
-(void)setLowPowerSphereModeEnabled:(BOOL)arg1 ;
-(void)setSystemThermalLevel:(int)arg1 ;
-(int)systemThermalLevel;
-(CFStringRef)currentSphereMode;
-(void)setTripodModeEnabled:(BOOL)arg1 ;
-(BOOL)tripodModeEnabled;
@end

