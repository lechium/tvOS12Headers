/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _TVFocusAdaptor : UIView {

	BOOL _pressIsAnimating;
	BOOL _unpressOnEndAnimating;
	BOOL _disabled;
	UIView* _selectingView;

}

@property (assign,getter=isDisabled,nonatomic) BOOL disabled;              //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) UIView * selectingView;                       //@synthesize selectingView=_selectingView - In the implementation block
-(BOOL)isDisabled;
-(void)_selectButtonAction:(id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(UIView *)selectingView;
-(void)_showPressState;
-(void)_clearPressState;
-(void)setSelectingView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)setDisabled:(BOOL)arg1 ;
@end

