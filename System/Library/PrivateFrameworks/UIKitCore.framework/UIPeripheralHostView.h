/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIKeyboardCornerView, UIKBInputBackdropView, UIKBRenderConfig;

@interface UIPeripheralHostView : UIView {

	int _explicitLayoutCount;
	UIKeyboardCornerView* _cornerViewLeft;
	UIKeyboardCornerView* _cornerViewRight;
	UIKBInputBackdropView* _inputBackdropView;
	UIKBInputBackdropView* _inputAccessoryBackdropView;
	UIKBRenderConfig* _renderConfig;

}

@property (nonatomic,readonly) UIKeyboardCornerView * cornerViewLeft;                           //@synthesize cornerViewLeft=_cornerViewLeft - In the implementation block
@property (nonatomic,readonly) UIKeyboardCornerView * cornerViewRight;                          //@synthesize cornerViewRight=_cornerViewRight - In the implementation block
@property (nonatomic,readonly) UIKBInputBackdropView * inputBackdropView;                       //@synthesize inputBackdropView=_inputBackdropView - In the implementation block
@property (nonatomic,readonly) UIKBInputBackdropView * inputAccessoryBackdropView;              //@synthesize inputAccessoryBackdropView=_inputAccessoryBackdropView - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_inheritedRenderConfig;
-(void)didAddSubview:(id)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(int)textEffectsVisibilityLevel;
-(int)_clipCornersOfView:(id)arg1 ;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(void)updateBackdropViewForInputAccessoryView:(BOOL)arg1 ;
-(UIKeyboardCornerView *)cornerViewLeft;
-(UIKeyboardCornerView *)cornerViewRight;
-(UIKBInputBackdropView *)inputAccessoryBackdropView;
-(UIKBInputBackdropView *)inputBackdropView;
-(void)beginExplicitLayout;
-(void)endExplicitLayout;
-(void)syncInputViewBackdropToFrame:(CGRect)arg1 ;
-(void)_setRenderConfig:(id)arg1 updateKeyboard:(BOOL)arg2 ;
-(void)syncInputAccessoryViewBackdropToFrame:(CGRect)arg1 ;
-(void)_setBaseRenderConfig:(id)arg1 ;
-(BOOL)explicitLayout;
@end

