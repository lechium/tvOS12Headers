/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICurrentContextPresentationController.h>

@class UIView;

@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController {

	UIView* _counterRotatedView;
	double _counterRotatedAngle;
	CGRect _counterRotatedOriginalBounds;
	long long _originalOrientation;
	BOOL _presentingViewControllerHandledCounterRotation;
	/*^block*/id finalRotationBlock;

}
-(void)dealloc;
-(long long)presentationStyle;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)shouldRemovePresentersView;
-(CGRect)frameOfPresentedViewInContainerView;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)_setPresentedViewController:(id)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3 ;
-(void)_removeCounterRotation;
-(BOOL)_invokesDelegatesOnOrientationChange;
-(void)_placeCounterRotationViewWithView:(id)arg1 inWindow:(id)arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4 force:(BOOL)arg5 ;
@end

