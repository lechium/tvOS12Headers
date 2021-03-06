/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView;

@interface RPYouTubeActivityProgressOverlay : UIView {

	BOOL _isShowing;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) BOOL isShowing;                                           //@synthesize isShowing=_isShowing - In the implementation block
-(void)setIsShowing:(BOOL)arg1 ;
-(void)setupOverlayAnimated:(BOOL)arg1 ;
-(void)tearDownOverlayAnimated:(BOOL)arg1 ;
-(void)setShowing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)stopActivity;
-(BOOL)isShowing;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
@end

