/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class _UIFloatingContentView, UIImageView, UITextView, UILabel;

@interface OBPrivacyLinkButton : UIButton {

	_UIFloatingContentView* _floatingContentView;
	UIImageView* _iconView;
	UITextView* _textView;
	UILabel* _label;

}

@property (nonatomic,readonly) _UIFloatingContentView * floatingContentView;              //@synthesize floatingContentView=_floatingContentView - In the implementation block
@property (readonly) UIImageView * iconView;                                              //@synthesize iconView=_iconView - In the implementation block
@property (readonly) UITextView * textView;                                               //@synthesize textView=_textView - In the implementation block
@property (readonly) UILabel * label;                                                     //@synthesize label=_label - In the implementation block
-(UIImageView *)iconView;
-(id)initWithText:(id)arg1 image:(id)arg2 imageSize:(CGSize)arg3 ;
-(void)_updateFloatingViewStateAnimated:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(id)titleForState:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)label;
-(_UIFloatingContentView *)floatingContentView;
-(UITextView *)textView;
@end

