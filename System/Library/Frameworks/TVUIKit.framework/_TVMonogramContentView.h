/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <TVUIKit/_TVImageContentView.h>

@class _UIFloatingContentView, UIView, UIImage;

@interface _TVMonogramContentView : _TVImageContentView {

	_UIFloatingContentView* _floatingContentView;
	UIView* _unfocusedShadowView;
	UIView* _focusedShadowView;
	UIImage* _unfocusedShadowImage;
	UIImage* _focusedShadowImage;

}

@property (nonatomic,retain) _UIFloatingContentView * floatingContentView;              //@synthesize floatingContentView=_floatingContentView - In the implementation block
@property (nonatomic,retain) UIView * unfocusedShadowView;                              //@synthesize unfocusedShadowView=_unfocusedShadowView - In the implementation block
@property (nonatomic,retain) UIView * focusedShadowView;                                //@synthesize focusedShadowView=_focusedShadowView - In the implementation block
@property (nonatomic,retain) UIImage * unfocusedShadowImage;                            //@synthesize unfocusedShadowImage=_unfocusedShadowImage - In the implementation block
@property (nonatomic,retain) UIImage * focusedShadowImage;                              //@synthesize focusedShadowImage=_focusedShadowImage - In the implementation block
-(UIView *)unfocusedShadowView;
-(void)setUnfocusedShadowView:(UIView *)arg1 ;
-(UIView *)focusedShadowView;
-(void)setFocusedShadowView:(UIView *)arg1 ;
-(UIImage *)unfocusedShadowImage;
-(void)setUnfocusedShadowImage:(UIImage *)arg1 ;
-(UIImage *)focusedShadowImage;
-(void)setFocusedShadowImage:(UIImage *)arg1 ;
-(id)effectiveContentView;
-(NSDirectionalEdgeInsets)intrinsicFocusSizeIncrease;
-(void)setLockupViewState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)updateAppearanceForLockupViewState:(unsigned long long)arg1 ;
-(void)_createFloatingContentView;
-(void)_createShadowViews;
-(void)setFloatingContentView:(_UIFloatingContentView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(_UIFloatingContentView *)floatingContentView;
@end

