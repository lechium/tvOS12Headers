/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIMovieScrubberAccessibility_super.h>

@interface UIMovieScrubberAccessibility : __UIMovieScrubberAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(void)_accessibilityClearChildren;
-(void)_accessibilityNotifyDelegateWillBeginEditing;
-(void)_accessibilityNotifyDelegateScrubberDidBeginScrubbingWithHandle:(int)arg1 ;
-(double)_accessibilitySliderDeltaForFrame:(CGRect)arg1 ;
-(void)_accessibilityNotifyDelegateEditingStartValueDidChange:(double)arg1 ;
-(void)_accessibilityNotifyDelegateScrubberDidEndScrubbingWithHandle:(int)arg1 ;
-(void)_accessibilityNotifyDelegateEditingEndValueDidChange:(double)arg1 ;
-(void)_accessibilityIncrementMockSlider:(id)arg1 largeStep:(BOOL)arg2 ;
-(void)_accessibilityDecrementMockSlider:(id)arg1 largeStep:(BOOL)arg2 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_initSubviews;
-(void)_trimAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)setThumbIsVisible:(BOOL)arg1 ;
-(void)_updateThumbLocation;
-(void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_setValue:(double)arg1 andSendAction:(BOOL)arg2 ;
-(void)setTrimEndValue:(double)arg1 ;
-(void)setTrimStartValue:(double)arg1 ;
-(void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6 ;
@end

