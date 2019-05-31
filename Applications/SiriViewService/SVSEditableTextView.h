//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SVSUtteranceCorrectionTextViewDelegate.h"

@class NSString, SVSSpeechRecognizedCorrectionTextView, UIVisualEffectView;

@interface SVSEditableTextView : UIView <SVSUtteranceCorrectionTextViewDelegate>
{
    struct NSDirectionalEdgeInsets _edgeInsets;	// 8 = 0x8
    SVSSpeechRecognizedCorrectionTextView *_textView;	// 40 = 0x28
    UIVisualEffectView *_blurView;	// 48 = 0x30
    double _topOffsetForTextView;	// 56 = 0x38
    double _heightOffsetForTextView;	// 64 = 0x40
    _Bool _editable;	// 72 = 0x48
    _Bool _didCorrect;	// 73 = 0x49
    id <SVSEditableTextViewDelegate> _delegate;	// 80 = 0x50
    long long _textAlignment;	// 88 = 0x58
}

+ (double)insertionAnimatedZPosition;	// IMP=0x0000000100005760
@property(nonatomic) _Bool didCorrect; // @synthesize didCorrect=_didCorrect;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) __weak id <SVSEditableTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000061f8
- (void)utteranceTextDidReceiveReturnKey:(id)arg1;	// IMP=0x00000001000060a4
- (void)utteranceTextDidResignFirstResponder:(id)arg1;	// IMP=0x000000010000604c
- (void)utteranceTextDidBecomeFirstResponder:(id)arg1;	// IMP=0x0000000100006040
- (double)_indentWidth;	// IMP=0x000000010000600c
- (void)textViewDidChange:(id)arg1;	// IMP=0x0000000100005f68
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x0000000100005f40
- (_Bool)textViewShouldBeginEditing:(id)arg1;	// IMP=0x0000000100005e8c
- (void)setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;	// IMP=0x0000000100005dd8
- (void)_adjustLineSpacing;	// IMP=0x0000000100005cac
- (void)endEditingAndCorrect:(_Bool)arg1;	// IMP=0x0000000100005bdc
- (void)beginEditing;	// IMP=0x0000000100005bc4
- (void)_handleTap:(id)arg1;	// IMP=0x0000000100005b78
- (_Bool)isFirstResponder;	// IMP=0x0000000100005b60
- (_Bool)resignFirstResponder;	// IMP=0x0000000100005b08
- (_Bool)canResignFirstResponder;	// IMP=0x0000000100005af0
- (void)layoutSubviews;	// IMP=0x00000001000059b4
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100005980
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100005918
@property(copy, nonatomic) NSString *text;
- (double)baselineOffsetFromBottom;	// IMP=0x00000001000057c8
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x000000010000576c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000052b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

