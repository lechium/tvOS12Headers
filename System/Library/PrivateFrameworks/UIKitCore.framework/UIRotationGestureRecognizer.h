/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch;

@interface UIRotationGestureRecognizer : UIGestureRecognizer {

	double _initialTouchDistance;
	double _initialTouchAngle;
	double _currentTouchAngle;
	long long _currentRotationCount;
	double _lastTouchTime;
	double _velocity;
	double _previousVelocity;
	CGPoint _anchorSceneReferencePoint;
	id _transformAnalyzer;
	UITouch* _touches[2];
	float _preRecognitionWeight;
	float _postRecognitionWeight;

}

@property (assign,nonatomic) double rotation; 
@property (nonatomic,readonly) double velocity; 
+(BOOL)_shouldDefaultToTouches;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(double)velocity;
-(CGPoint)anchorPoint;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(void)_resetGestureRecognizer;
-(void)_updateTransformAnalyzerWeights;
-(void)_setPreRecognitionWeight:(double)arg1 ;
-(double)_preRecognitionWeight;
-(void)_setPostRecognitionWeight:(double)arg1 ;
-(double)_postRecognitionWeight;
@end

