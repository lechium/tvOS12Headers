/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteraction.h>

@interface UITextSelectionInteraction : UITextInteraction {

	double _lastTapTimestamp;
	CGPoint _lastTapLocation;
	long long _previousRepeatedGranularity;

}
-(void)confirmMarkedText:(id)arg1 ;
-(void)oneFingerDoubleTap:(id)arg1 ;
-(void)oneFingerTap:(id)arg1 ;
-(void)oneFingerTapSelectsAll:(id)arg1 ;
-(void)tapAndAHalf:(id)arg1 ;
-(void)setHybridSelectionWithPoint:(CGPoint)arg1 ;
-(BOOL)shouldHandleOneFingerTapInUneditable:(id)arg1 ;
-(void)twoFingerRangedSelectGesture:(id)arg1 ;
-(id)initWithMode:(long long)arg1 ;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_isShiftKeyBeingHeldForGesture:(id)arg1 ;
-(void)performTapActionAtPoint:(CGPoint)arg1 granularity:(long long)arg2 modifierFlags:(long long)arg3 ;
-(void)performTapActionAtPoint:(CGPoint)arg1 granularity:(long long)arg2 ;
-(BOOL)isNowWithinRepeatedTapTime;
@end

