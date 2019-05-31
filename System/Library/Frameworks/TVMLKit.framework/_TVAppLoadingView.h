/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIWindow, UIImageView, UIVisualEffectView, UIActivityIndicatorView;

@interface _TVAppLoadingView : UIView {

	UIView* _wallpaperView;
	UIWindow* _overlayWindow;
	BOOL _hiding;
	double _timeout;
	double _delay;
	UIImageView* _maskView;
	UIVisualEffectView* _visualEffectView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
+(id)loadingScreen;
-(void)setTimeout:(double)arg1 ;
-(void)timeout;
-(void)setLoadingDelay:(double)arg1 ;
-(void)showOverKeyWindow;
-(id)initWithFrame:(CGRect)arg1 templateImage:(id)arg2 ;
-(double)hideAnimationDuration;
-(BOOL)isVisible;
-(void)hide;
-(UIActivityIndicatorView *)spinner;
-(void)didRotate:(id)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end

