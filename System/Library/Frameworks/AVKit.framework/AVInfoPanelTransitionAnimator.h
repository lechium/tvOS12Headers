/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <libobjc.A.dylib/_UITabBarControllerInterruptibleTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class NSString;

@interface AVInfoPanelTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning, _UITabBarControllerInterruptibleTransitioning> {

	double _contentHeightDifference;
	id<UIViewControllerContextTransitioning> _transitionContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_beginFadeAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 ;
-(void)_beginDrawerAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)interruptTabBarControllerTransition;
@end

