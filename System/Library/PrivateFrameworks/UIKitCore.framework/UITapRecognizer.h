/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol UITapRecognizerDelegate;
@class NSMutableSet, NSMutableArray, NSArray;

@interface UITapRecognizer : NSObject <NSCoding> {

	unsigned long long _numberOfTouchesRequired;
	unsigned long long _numberOfTapsRequired;
	NSMutableSet* _activeTouches;
	int _currentNumberOfTouches;
	int _currentNumberOfTaps;
	int _numberOfTouchesForCurrentTap;
	CGPoint _location;
	CGPoint _startPoint;
	CGPoint _digitizerLocation;
	double _allowableMovement;
	double _allowableSeparation;
	double _allowableTouchTimeSeparation;
	double _maximumSingleTapDuration;
	double _maximumTapDuration;
	double _maximumIntervalBetweenSuccessiveTaps;
	NSMutableArray* _touches;
	long long _strongestDirectionalAxis;
	double _strongestDirectionalForce;
	unsigned _timerOn : 1;
	unsigned _multitouchTimerOn : 1;
	unsigned _noNewTouches : 1;
	id<UITapRecognizerDelegate> _delegate;
	long long _exclusiveDirectionalAxis;

}

@property (assign,nonatomic,__weak) id<UITapRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTapsRequired;                  //@synthesize numberOfTapsRequired=_numberOfTapsRequired - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;               //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) double allowableMovement; 
@property (assign,nonatomic) double allowableSeparation; 
@property (assign,nonatomic) double allowableTouchTimeSeparation;                      //@synthesize allowableTouchTimeSeparation=_allowableTouchTimeSeparation - In the implementation block
@property (assign,nonatomic) double maximumSingleTapDuration; 
@property (assign,nonatomic) double maximumTapDuration;                                //@synthesize maximumTapDuration=_maximumTapDuration - In the implementation block
@property (assign,nonatomic) double maximumIntervalBetweenSuccessiveTaps; 
@property (assign,nonatomic) long long exclusiveDirectionalAxis;                       //@synthesize exclusiveDirectionalAxis=_exclusiveDirectionalAxis - In the implementation block
@property (nonatomic,readonly) NSArray * touches;                                      //@synthesize touches=_touches - In the implementation block
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UITapRecognizerDelegate>)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(id<UITapRecognizerDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_reset;
-(unsigned long long)numberOfTouchesRequired;
-(unsigned long long)numberOfTapsRequired;
-(void)setNumberOfTapsRequired:(unsigned long long)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(CGPoint)_digitizerLocation;
-(double)allowableMovement;
-(double)allowableSeparation;
-(void)setAllowableSeparation:(double)arg1 ;
-(double)maximumIntervalBetweenSuccessiveTaps;
-(BOOL)activeTouchesExceedAllowableSeparation;
-(NSArray *)touches;
-(CGPoint)locationInView:(id)arg1 focusSystem:(id)arg2 ;
-(void)clearMultitouchTimer;
-(void)multitouchExpired:(id)arg1 ;
-(void)startMultitouchTimer:(double)arg1 ;
-(CGPoint)_locationInSceneReferenceSpace;
-(void)clearTapTimer;
-(void)tooSlow:(id)arg1 ;
-(void)_updateDigitizerLocationForEvent:(id)arg1 ;
-(void)_beginInteraction;
-(double)_effectiveAllowableMovement;
-(void)_interactionEndedTouch:(BOOL)arg1 ;
-(double)maximumTapDuration;
-(void)startTapTimer:(double)arg1 ;
-(double)allowableTouchTimeSeparation;
-(double)maximumSingleTapDuration;
-(void)setMaximumSingleTapDuration:(double)arg1 ;
-(void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1 ;
-(void)setMaximumTapDuration:(double)arg1 ;
-(void)setAllowableTouchTimeSeparation:(double)arg1 ;
-(long long)exclusiveDirectionalAxis;
-(void)setExclusiveDirectionalAxis:(long long)arg1 ;
@end

