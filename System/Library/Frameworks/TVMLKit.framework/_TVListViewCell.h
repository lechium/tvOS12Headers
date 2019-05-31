/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol _TVListViewCellDelegate;
@class UIColor, UIVisualEffectView, _UIFloatingContentView;

@interface _TVListViewCell : UICollectionViewCell {

	UIColor* _backgroundColor;
	UIColor* _highlightedBackgroundColor;
	UIVisualEffectView* _backgroundVisualEffectView;
	BOOL _visualEffectViewBackgroundEnabled;
	BOOL _disabled;
	BOOL _shouldAppearSelected;
	_UIFloatingContentView* _floatingView;
	id<_TVListViewCellDelegate> _delegate;

}

@property (assign,nonatomic) BOOL visualEffectViewBackgroundEnabled;                   //@synthesize visualEffectViewBackgroundEnabled=_visualEffectViewBackgroundEnabled - In the implementation block
@property (nonatomic,retain) _UIFloatingContentView * floatingView;                    //@synthesize floatingView=_floatingView - In the implementation block
@property (assign,nonatomic,__weak) id<_TVListViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                          //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL shouldAppearSelected;                                //@synthesize shouldAppearSelected=_shouldAppearSelected - In the implementation block
-(BOOL)isDisabled;
-(void)_updateSelectedBackgroundColor;
-(unsigned long long)_floatingViewControlState;
-(void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)arg1 ;
-(void)setVisualEffectViewBackgroundEnabled:(BOOL)arg1 ;
-(void)setShouldAppearSelected:(BOOL)arg1 ;
-(BOOL)visualEffectViewBackgroundEnabled;
-(_UIFloatingContentView *)floatingView;
-(void)setFloatingView:(_UIFloatingContentView *)arg1 ;
-(BOOL)shouldAppearSelected;
-(void)setDelegate:(id<_TVListViewCellDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)contentView;
-(void)layoutSubviews;
-(id<_TVListViewCellDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_descendantsShouldHighlight;
-(void)setDisabled:(BOOL)arg1 ;
@end

