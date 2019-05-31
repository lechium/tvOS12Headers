/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationBarTransitionContext.h>

@interface _UINavigationBarTransitionContextPush : _UINavigationBarTransitionContext {

	CGRect _endingNewTitleViewFrame;
	CGRect _endingNewBackButtonFrame;
	CGRect _endingBackIndicatorViewFrame;
	CGSize _titleTransitionDistance;

}
-(void)animate;
-(void)_prepareContentView;
-(void)prepare;
-(int)transition;
-(void)complete;
-(void)cancel;
-(id)viewUsingEaseOutCurve;
-(void)_prepareScaleTransition;
-(void)_prepareLargeTitleView;
-(void)_animateContentView;
-(void)_animateScaleTransition;
-(void)_animateLargeTitleView;
-(void)_finishWithFinalLayout:(id)arg1 finalLargeTitleLayout:(id)arg2 invalidLayout:(id)arg3 invalidLargeTitleLayout:(id)arg4 ;
@end
