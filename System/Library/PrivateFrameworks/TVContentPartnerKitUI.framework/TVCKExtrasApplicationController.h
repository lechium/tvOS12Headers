/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVApplicationController.h>

@class _TVImageView, UIVisualEffectView, UIActivityIndicatorView;

@interface TVCKExtrasApplicationController : TVApplicationController {

	BOOL _extrasDidPushRoot;
	_TVImageView* _loadingImageView;
	UIVisualEffectView* _loadingVisualEffectView;
	UIActivityIndicatorView* _loadingSpinnerView;

}

@property (nonatomic,readonly) BOOL extrasDidPushRoot;                                    //@synthesize extrasDidPushRoot=_extrasDidPushRoot - In the implementation block
@property (nonatomic,readonly) _TVImageView * loadingImageView;                           //@synthesize loadingImageView=_loadingImageView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * loadingVisualEffectView;              //@synthesize loadingVisualEffectView=_loadingVisualEffectView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * loadingSpinnerView;              //@synthesize loadingSpinnerView=_loadingSpinnerView - In the implementation block
+(id)extrasLaunchContextForURL:(id)arg1 adamID:(id)arg2 actionParams:(id)arg3 previewURL:(id)arg4 loadingImage:(id)arg5 lightTheme:(BOOL)arg6 ;
-(void)_showSpinner;
-(void)_hideSpinner;
-(id)initWithContext:(id)arg1 window:(id)arg2 delegate:(id)arg3 ;
-(void)_controllerDidDisplay:(id)arg1 ;
-(void)presentWithViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_bestURLForSrcSet:(id)arg1 ;
-(_TVImageView *)loadingImageView;
-(void)_hideExtrasLoadingImageView;
-(id)_parseSrcset:(id)arg1 ;
-(UIVisualEffectView *)loadingVisualEffectView;
-(UIActivityIndicatorView *)loadingSpinnerView;
-(BOOL)extrasDidPushRoot;
@end

