/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMKTorchPattern, CADisplayLink, AVCaptureDevice;

@interface CMKTorchPatternController : NSObject {

	BOOL __performing;
	double _stepInterval;
	CMKTorchPattern* __currentPattern;
	double __startTime;
	CADisplayLink* __displayLink;
	AVCaptureDevice* _captureDevice;

}

@property (assign,setter=_setPerforming:,nonatomic) BOOL _performing;              //@synthesize _performing=__performing - In the implementation block
@property (nonatomic,readonly) CMKTorchPattern * _currentPattern;                  //@synthesize _currentPattern=__currentPattern - In the implementation block
@property (nonatomic,readonly) double _startTime;                                  //@synthesize _startTime=__startTime - In the implementation block
@property (nonatomic,readonly) CADisplayLink * _displayLink;                       //@synthesize _displayLink=__displayLink - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * captureDevice;                      //@synthesize captureDevice=_captureDevice - In the implementation block
@property (assign,nonatomic) double stepInterval;                                  //@synthesize stepInterval=_stepInterval - In the implementation block
-(AVCaptureDevice *)captureDevice;
-(double)_startTime;
-(void)setCaptureDevice:(AVCaptureDevice *)arg1 ;
-(void)doubleBlink;
-(void)blink;
-(void)stopPerformingPattern;
-(BOOL)_performing;
-(void)_setPerforming:(BOOL)arg1 ;
-(void)_resetTorchLevel;
-(void)_applyTorchLevel:(float)arg1 ;
-(void)startPerformingPattern:(id)arg1 ;
-(double)stepInterval;
-(void)setStepInterval:(double)arg1 ;
-(CMKTorchPattern *)_currentPattern;
-(CADisplayLink *)_displayLink;
-(id)init;
-(void)displayLinkFired:(id)arg1 ;
@end

