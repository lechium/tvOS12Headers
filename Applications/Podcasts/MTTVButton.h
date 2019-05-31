//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class _UIFloatingContentView;

@interface MTTVButton : UIButton
{
    _Bool _scalesOnFocus;	// 8 = 0x8
    _UIFloatingContentView *_floatingView;	// 16 = 0x10
}

@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(nonatomic) _Bool scalesOnFocus; // @synthesize scalesOnFocus=_scalesOnFocus;
- (void).cxx_destruct;	// IMP=0x00000001000abc34
- (void)_updateFloatingViewStateAnimated:(_Bool)arg1;	// IMP=0x00000001000abb94
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000abaac
- (void)_setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000aba54
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000001000ab984
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000ab908
- (void)layoutSubviews;	// IMP=0x00000001000ab810
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000ab6b0

@end
