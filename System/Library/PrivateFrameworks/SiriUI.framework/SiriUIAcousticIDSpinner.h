/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SiriUIAcousticIDSpinnerDelegate;
@class UIImageView, UIVisualEffectView;

@interface SiriUIAcousticIDSpinner : UIView {

	UIImageView* _musicNoteView;
	UIImageView* _spinnerView;
	UIVisualEffectView* _vibrancyView;
	id<SiriUIAcousticIDSpinnerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUIAcousticIDSpinnerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_imageForSpinner;
-(id)_spinningAnimation;
-(void)setDelegate:(id<SiriUIAcousticIDSpinnerDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SiriUIAcousticIDSpinnerDelegate>)delegate;
-(BOOL)isShowing;
-(void)animateIn;
-(void)animateOut;
@end

