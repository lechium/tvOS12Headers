/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCellEditControl.h>

@class _UIFloatingContentView;

@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl {

	_UIFloatingContentView* _focusedFloatingContentView;

}
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_ensureFocusedFloatingContentView;
-(id)_currentImage;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(BOOL)wantsImageShadow;
-(void)_updateFloatingViewForCurrentTraits;
-(BOOL)_shouldHandlePressEvent:(id)arg1 ;
@end

