/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/_UIFloatingContentView.h>
#import <libobjc.A.dylib/_UIFloatingContentViewDelegate.h>
#import <TVUIKit/TVAuxiliaryViewSelecting.h>

@class UIView, UIImageView, UIImage, NSString;

@interface _TVCardFloatingContentView : _UIFloatingContentView <_UIFloatingContentViewDelegate, TVAuxiliaryViewSelecting> {

	UIView* _unfocusedShadowView;
	UIView* _focusedShadowView;
	UIImageView* _bgImageView;
	double _unfocusedAlpha;
	BOOL _isSelected;
	double _unfocusedShadowAlpha;
	double _focusedShadowAlpha;
	UIImage* _unfocusedShadowImage;
	UIImage* _focusedShadowImage;
	/*^block*/id _pressCompletionBlock;

}

@property (nonatomic,copy) id pressCompletionBlock;                       //@synthesize pressCompletionBlock=_pressCompletionBlock - In the implementation block
@property (assign,nonatomic) double unfocusedShadowAlpha;                 //@synthesize unfocusedShadowAlpha=_unfocusedShadowAlpha - In the implementation block
@property (assign,nonatomic) double focusedShadowAlpha;                   //@synthesize focusedShadowAlpha=_focusedShadowAlpha - In the implementation block
@property (nonatomic,retain) UIImage * unfocusedShadowImage;              //@synthesize unfocusedShadowImage=_unfocusedShadowImage - In the implementation block
@property (nonatomic,retain) UIImage * focusedShadowImage;                //@synthesize focusedShadowImage=_focusedShadowImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)_updateForAccessibilityChange;
-(double)unfocusedShadowAlpha;
-(void)setUnfocusedShadowAlpha:(double)arg1 ;
-(double)focusedShadowAlpha;
-(void)setFocusedShadowAlpha:(double)arg1 ;
-(UIImage *)unfocusedShadowImage;
-(void)setUnfocusedShadowImage:(UIImage *)arg1 ;
-(UIImage *)focusedShadowImage;
-(void)setFocusedShadowImage:(UIImage *)arg1 ;
-(void)_setBgImageWithColor:(id)arg1 cornerRadius:(double)arg2 ;
-(void)setPressCompletionBlock:(id)arg1 ;
-(id)pressCompletionBlock;
-(void)setBgColor:(id)arg1 highlightBgColor:(id)arg2 cornerRadius:(double)arg3 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2 ;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

