/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIPopoverBackgroundView, UIImageView, UIActionSheet, UIPopoverController, UIColor;

@interface _UIPopoverView : UIView {

	UIView* _contentView;
	UIPopoverBackgroundView* _backgroundView;
	Class _backgroundViewClass;
	UIImageView* _toolbarShine;
	BOOL _showsBackgroundComponentHighlights;
	BOOL _showsBackgroundViewHighlight;
	BOOL _showsContentViewHighlight;
	BOOL _chromeHidden;
	UIActionSheet* _presentedActionSheet;
	UIPopoverController* _popoverController;

}

@property (assign,nonatomic) BOOL showsBackgroundComponentHighlights;              //@synthesize showsBackgroundComponentHighlights=_showsBackgroundComponentHighlights - In the implementation block
@property (assign,nonatomic) BOOL showsBackgroundViewHighlight;                    //@synthesize showsBackgroundViewHighlight=_showsBackgroundViewHighlight - In the implementation block
@property (assign,nonatomic) BOOL showsContentViewHighlight;                       //@synthesize showsContentViewHighlight=_showsContentViewHighlight - In the implementation block
@property (assign,nonatomic) double arrowOffset; 
@property (assign,nonatomic) unsigned long long arrowDirection; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (nonatomic,copy) UIColor * popoverBackgroundColor; 
@property (nonatomic,copy) UIColor * arrowBackgroundColor; 
@property (assign,nonatomic) BOOL chromeHidden;                                    //@synthesize chromeHidden=_chromeHidden - In the implementation block
@property (nonatomic,retain) UIActionSheet * presentedActionSheet;                 //@synthesize presentedActionSheet=_presentedActionSheet - In the implementation block
@property (assign,nonatomic) UIPopoverController * popoverController;              //@synthesize popoverController=_popoverController - In the implementation block
+(id)popoverViewContainingView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)contentView;
-(void)layoutSubviews;
-(int)_style;
-(UIPopoverController *)popoverController;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)backgroundView;
-(void)_setCornerRadius:(double)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(void)_setFrame:(CGRect)arg1 arrowOffset:(double)arg2 ;
-(unsigned long long)arrowDirection;
-(void)setPopoverBackgroundColor:(UIColor *)arg1 ;
-(double)arrowOffset;
-(void)setArrowOffset:(double)arg1 ;
-(void)_setPopoverContentView:(id)arg1 ;
-(void)setArrowBackgroundColor:(UIColor *)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 ;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(void)setChromeHidden:(BOOL)arg1 ;
-(void)prepareForAnimatedTransitioningWithCoordinator:(id)arg1 ;
-(BOOL)chromeHidden;
-(UIColor *)arrowBackgroundColor;
-(void)setUseToolbarShine:(BOOL)arg1 ;
-(id)toolbarShine;
-(BOOL)_allowsCustomizationOfContent;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(BOOL)arg3 ;
-(void)_hideArrow;
-(void)_showArrow;
-(UIActionSheet *)presentedActionSheet;
-(CGRect)_snapshotBounds;
-(long long)backgroundStyle;
-(BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(CGRect)arg1 ;
-(UIColor *)popoverBackgroundColor;
-(id)standardChromeView;
-(void)_layoutToolbarShine;
-(void)_updateContentBlendingColor;
-(BOOL)_backgroundNeedsSeperateBlending;
-(BOOL)showsBackgroundComponentHighlights;
-(void)setShowsBackgroundComponentHighlights:(BOOL)arg1 ;
-(BOOL)showsBackgroundViewHighlight;
-(void)setShowsBackgroundViewHighlight:(BOOL)arg1 ;
-(BOOL)showsContentViewHighlight;
-(void)setShowsContentViewHighlight:(BOOL)arg1 ;
-(void)setPresentedActionSheet:(UIActionSheet *)arg1 ;
@end

