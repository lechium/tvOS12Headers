/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow, UIStatusBarViewController, UIZoomViewController;

@interface UIClassicController : NSObject {

	UIWindow* _window;
	UIStatusBarViewController* _statusBarViewController;
	UIZoomViewController* _zoomViewController;
	BOOL _hidesStatusBarFiller;

}
+(id)sharedClassicController;
-(id)_window;
-(void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2 ;
-(void)setStatusBarStyle:(long long)arg1 animationParameters:(id)arg2 ;
-(void)setStatusBarOrientation:(long long)arg1 animationParameters:(id)arg2 ;
-(void)_setupWindow;
-(BOOL)isClassicControlWindow:(id)arg1 ;
-(void)setZoomed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_supportsZoom;
-(BOOL)_shouldHideStatusBar;
-(BOOL)isZoomed;
-(void)setZoomed:(BOOL)arg1 ;
-(void)_initializeStatusBarOrientation;
-(void)_classicChangeStatusBarOrientation:(id)arg1 ;
-(void)_classicChangeStatusBarOrientationFinished:(id)arg1 finished:(BOOL)arg2 context:(id)arg3 ;
-(BOOL)drawsStatusBarFiller;
-(void)setDrawsStatusBarFiller:(BOOL)arg1 ;
@end

