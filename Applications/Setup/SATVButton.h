//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class _UIFloatingContentView;

@interface SATVButton : UIButton
{
    _Bool _scalesOnFocus;	// 8 = 0x8
    _UIFloatingContentView *_floatingView;	// 16 = 0x10
}

@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(nonatomic) _Bool scalesOnFocus; // @synthesize scalesOnFocus=_scalesOnFocus;
- (void).cxx_destruct;	// IMP=0x0000000100033b20
- (void)_updateFloatingViewStateAnimated:(_Bool)arg1;	// IMP=0x00000001000338d8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010003377c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000100033728
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100033688
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010003360c
- (void)layoutSubviews;	// IMP=0x00000001000332b4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010003302c

@end

