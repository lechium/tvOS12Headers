//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "_UIFloatingContentViewDelegate.h"

@class NSAttributedString, NSString, UIColor, UILabel, UITapGestureRecognizer, UITextView, UIVisualEffectView, _UIFloatingContentView;

@interface TVMTExpandingTextView : UIView <_UIFloatingContentViewDelegate, UIGestureRecognizerDelegate>
{
    UIVisualEffectView *_vibrantEffectView;	// 8 = 0x8
    _Bool _textTruncating;	// 16 = 0x10
    _Bool _moreLabelOnNewLine;	// 17 = 0x11
    _Bool _trackHorizontal;	// 18 = 0x12
    _Bool _needsTextSizeComputation;	// 19 = 0x13
    UIColor *_descriptionTextColor;	// 24 = 0x18
    UIColor *_descriptionTextHighlightColor;	// 32 = 0x20
    UIColor *_highlightBackgroundColor;	// 40 = 0x28
    double _moreHighlightPadding;	// 48 = 0x30
    CDUnknownBlockType _selectionHandler;	// 56 = 0x38
    CDUnknownBlockType _playHandler;	// 64 = 0x40
    UITextView *_descriptionTextView;	// 72 = 0x48
    _UIFloatingContentView *_floatingView;	// 80 = 0x50
    UIVisualEffectView *_backgroundView;	// 88 = 0x58
    UITapGestureRecognizer *_selectRecognizer;	// 96 = 0x60
    UITapGestureRecognizer *_playRecognizer;	// 104 = 0x68
    UILabel *_moreLabel;	// 112 = 0x70
}

+ (double)cornerRadius;	// IMP=0x000000010016c464
@property(nonatomic) _Bool needsTextSizeComputation; // @synthesize needsTextSizeComputation=_needsTextSizeComputation;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UITapGestureRecognizer *playRecognizer; // @synthesize playRecognizer=_playRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *selectRecognizer; // @synthesize selectRecognizer=_selectRecognizer;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(copy, nonatomic) CDUnknownBlockType playHandler; // @synthesize playHandler=_playHandler;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) _Bool trackHorizontal; // @synthesize trackHorizontal=_trackHorizontal;
@property(nonatomic) _Bool moreLabelOnNewLine; // @synthesize moreLabelOnNewLine=_moreLabelOnNewLine;
@property(nonatomic) double moreHighlightPadding; // @synthesize moreHighlightPadding=_moreHighlightPadding;
@property(readonly, nonatomic, getter=isTextTruncating) _Bool textTruncating; // @synthesize textTruncating=_textTruncating;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(retain, nonatomic) UIColor *descriptionTextHighlightColor; // @synthesize descriptionTextHighlightColor=_descriptionTextHighlightColor;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
- (void).cxx_destruct;	// IMP=0x000000010016d25c
- (void)_playButtonAction:(id)arg1;	// IMP=0x000000010016cfe8
- (void)_selectButtonAction:(id)arg1;	// IMP=0x000000010016cf5c
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x000000010016cf34
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010016ce9c
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010016cda4
- (struct CGRect)_moreLabelFrame;	// IMP=0x000000010016cac4
- (id)_moreLabelExclusionPath;	// IMP=0x000000010016ca28
- (void)_recomputeTextSizeIfNeeded;	// IMP=0x000000010016c8dc
- (void)_setNeedsTextSizeComputation;	// IMP=0x000000010016c8c8
@property(nonatomic) unsigned long long maximumNumberOfLines;
@property(retain, nonatomic) NSAttributedString *descriptionText;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000010016c3e8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010016c2e4
- (_Bool)canBecomeFocused;	// IMP=0x000000010016c2d8
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010016c1dc
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010016c14c
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010016c0a8
- (void)layoutSubviews;	// IMP=0x000000010016bd38
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010016b4a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

