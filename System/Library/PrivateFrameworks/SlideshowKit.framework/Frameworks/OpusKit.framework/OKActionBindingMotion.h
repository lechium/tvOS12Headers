/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableDictionary, CMMotionManager, CMAttitude, NSOperationQueue, UILongPressGestureRecognizer, NSString;

@interface OKActionBindingMotion : OKActionBinding <UIGestureRecognizerDelegate> {

	unsigned long long _numberOfTouchesRequired;
	double _motionInterval;
	NSMutableDictionary* _motionContext;
	BOOL _shouldForwardMotion;
	CMMotionManager* _motionManager;
	CMAttitude* _motionAttitudeReference;
	NSOperationQueue* _motionQueue;
	double _lastYaw;
	double _lastRoll;
	double _lastPitch;
	double _lastRotationX;
	double _lastRotationY;
	double _lastRotationZ;
	CGPoint _lastLocation;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (retain) CMAttitude * motionAttitudeReference;                              //@synthesize motionAttitudeReference=_motionAttitudeReference - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;              //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) double motionInterval;                                   //@synthesize motionInterval=_motionInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(CMAttitude *)motionAttitudeReference;
-(void)setMotionAttitudeReference:(CMAttitude *)arg1 ;
-(void)setMotionInterval:(double)arg1 ;
-(double)motionInterval;
-(id)init;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(unsigned long long)numberOfTouchesRequired;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(void)handleLongPress:(id)arg1 ;
@end

