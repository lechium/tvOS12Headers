/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface TVPSpinnerView : UIView {

	BOOL _shouldResumeAnimation;
	UIView* _spinnerContainer;
	UIView* _spinnerOverlayContainer;
	UIColor* _color;
	BOOL _animating;

}

@property (getter=isAnimating,nonatomic,readonly) BOOL animating;              //@synthesize animating=_animating - In the implementation block
@property (nonatomic,readonly) UIColor * color;                                //@synthesize color=_color - In the implementation block
-(id)initWithFrame:(CGRect)arg1 color:(id)arg2 ;
-(void)_updateImagesForTraitCollection:(id)arg1 ;
-(void)_addAnimations;
-(void)_removeAnimations;
-(id)_spinnerImageForTraitCollection:(id)arg1 size:(CGSize)arg2 alpha:(double)arg3 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didMoveToWindow;
-(UIColor *)color;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)isAnimating;
-(void)startAnimating;
-(void)stopAnimating;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
@end
