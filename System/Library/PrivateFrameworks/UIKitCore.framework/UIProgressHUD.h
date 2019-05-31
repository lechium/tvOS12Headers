/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIProgressIndicator, UILabel, UIImageView, UIWindow;

@interface UIProgressHUD : UIView {

	UIProgressIndicator* _progressIndicator;
	UILabel* _progressMessage;
	UIImageView* _doneView;
	UIWindow* _parentWindow;
	struct {
		unsigned isShowing : 1;
		unsigned isShowingText : 1;
		unsigned fixedFrame : 1;
		unsigned reserved : 30;
	}  _progressHUDFlags;

}
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(void)layoutSubviews;
-(void)showInView:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(void)hide;
-(void)setFontSize:(int)arg1 ;
-(id)_progressIndicator;
-(void)setShowsText:(BOOL)arg1 ;
-(void)done;
-(void)show:(BOOL)arg1 ;
@end
