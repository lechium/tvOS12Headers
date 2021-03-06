/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TVSettingKit-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning, _TSKAnimatorDelegate;
@class NSString;

@interface _TSKSlideAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	id<UIViewControllerContextTransitioning> _lastCompletedTransitionContext;
	long long _operation;
	id<_TSKAnimatorDelegate> _animatorDelegate;

}

@property (assign,nonatomic) long long operation;                                           //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic,__weak) id<_TSKAnimatorDelegate> animatorDelegate;              //@synthesize animatorDelegate=_animatorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_TSKAnimatorDelegate>)animatorDelegate;
-(void)setAnimatorDelegate:(id<_TSKAnimatorDelegate>)arg1 ;
-(void)_animatePushWithContext:(id)arg1 ;
-(void)_animatePopWithContext:(id)arg1 ;
-(id)_maskViewForFrame:(CGRect)arg1 layoutDirection:(long long)arg2 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(void)setOperation:(long long)arg1 ;
-(long long)operation;
@end

