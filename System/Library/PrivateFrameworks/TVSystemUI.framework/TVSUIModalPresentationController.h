/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPresentationController.h>

@class UIVisualEffectView;

@interface TVSUIModalPresentationController : UIPresentationController {

	UIVisualEffectView* _visualEffectView;
	long long _blurStyle;

}

@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,readonly) long long blurStyle;                                //@synthesize blurStyle=_blurStyle - In the implementation block
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 blurStyle:(long long)arg3 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(long long)blurStyle;
-(void)_configureSubviews;
-(void)_animateWithCoordinator:(id)arg1 isPresenting:(BOOL)arg2 ;
-(UIVisualEffectView *)visualEffectView;
@end

