/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKitCore/_UIDigitizerGestureRecognizerImpDelegate.h>

@class _UIDigitizerGestureRecognizerImp, NSString;

@interface UIDigitizerLongPressGestureRecognizer : UIGestureRecognizer <_UIDigitizerGestureRecognizerImpDelegate> {

	_UIDigitizerGestureRecognizerImp* _imp;

}

@property (nonatomic,readonly) long long avTouchPosition; 
@property (assign,nonatomic) double minimumPressDuration; 
@property (nonatomic,readonly) CGPoint digitizerLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)avTouchPosition;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(CGPoint)digitizerLocation;
-(void)touchesBeganSuccessfully:(id)arg1 ;
-(void)pressesEndedSuccessfully:(id)arg1 ;
-(void)pressesNotHeldLongEnough:(id)arg1 ;
-(void)pressesHeldForMinimum:(id)arg1 ;
-(double)minimumPressDuration;
@end

