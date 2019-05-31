//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SiriUIAceObjectViewController.h"

#import "SVSEditableTextViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class AFUserUtterance, NSArray, NSMutableArray, NSMutableDictionary, NSString, SAUIChangePrimaryUtterance, SVSEditableTextView, SVSUserUtteranceContainerView, SVSUserUtteranceView, SiriUICollectionViewFlowLayout, UICollectionView, UITapGestureRecognizer;

@interface SVSUserUtteranceViewController : SiriUIAceObjectViewController <SVSEditableTextViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    SVSUserUtteranceView *_utteranceView;	// 8 = 0x8
    _Bool _changeUtteranceShouldDisplay;	// 16 = 0x10
    UITapGestureRecognizer *_tapRecognizer;	// 24 = 0x18
    NSArray *_speechAlternativeDisplayList;	// 32 = 0x20
    NSMutableArray *_speechAlternativeList;	// 40 = 0x28
    NSMutableArray *_viewArray;	// 48 = 0x30
    SVSEditableTextView *_editableUtteranceView;	// 56 = 0x38
    UICollectionView *_speechAlternativeCollectionView;	// 64 = 0x40
    SiriUICollectionViewFlowLayout *_speechAlternativeCollectionViewLayout;	// 72 = 0x48
    _Bool _showSpeechAlternativeList;	// 80 = 0x50
    SVSUserUtteranceContainerView *_containerView;	// 88 = 0x58
    _Bool _startEditWhenShown;	// 96 = 0x60
    NSString *_speechAlternativeListTitle;	// 104 = 0x68
    NSMutableDictionary *_alternativeInfoMap;	// 112 = 0x70
    _Bool _showOnDeviceResults;	// 120 = 0x78
    NSString *_sessionId;	// 128 = 0x80
    NSString *_originalUtteranceText;	// 136 = 0x88
    NSString *_preCorrectionText;	// 144 = 0x90
    struct CGSize _currentTextSize;	// 152 = 0x98
    _Bool _textChanged;	// 168 = 0xa8
    SAUIChangePrimaryUtterance *_changeUtteranceCommand;	// 176 = 0xb0
    _Bool _newRequestSent;	// 184 = 0xb8
    struct CGSize _oldUtteranceViewSize;	// 192 = 0xc0
    struct CGRect _previousBounds;	// 208 = 0xd0
    _Bool _needsToInvalidateCollectionViewLayoutOnViewWillLayoutSubviews;	// 240 = 0xf0
    double _latestGivenWidth;	// 248 = 0xf8
    _Bool _receivedFinalRecognitionResult;	// 256 = 0x100
    long long _speechAlternativesStartIndex;	// 264 = 0x108
    AFUserUtterance *_userUtterance;	// 272 = 0x110
}

@property(retain, nonatomic, getter=_userUtterance, setter=_setUserUtterance:) AFUserUtterance *userUtterance; // @synthesize userUtterance=_userUtterance;
- (void).cxx_destruct;	// IMP=0x000000010005b4fc
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010005b358
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010005b2bc
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010005ae18
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010005ae00
- (id)userSelectionResults:(id)arg1;	// IMP=0x000000010005aa70
- (void)handleSelectRow:(long long)arg1;	// IMP=0x000000010005a6f0
- (id)_processUserUtterance:(id)arg1 isCombined:(_Bool)arg2 displayedText:(id)arg3 withScore:(_Bool)arg4;	// IMP=0x0000000100059a6c
- (id)speechAlternativeHighlightListWithScore:(_Bool)arg1;	// IMP=0x000000010005946c
- (void)_createSpeechAlternativeViewsIfNecessary;	// IMP=0x00000001000591fc
- (void)createViewArray;	// IMP=0x0000000100058f6c
- (void)restoreOriginalEditTextContents:(id)arg1;	// IMP=0x0000000100058e84
- (void)editableTextViewTextDidResignFirstResponder:(id)arg1;	// IMP=0x0000000100058dd8
- (void)editableTextViewTextDidReceiveReturnKey:(id)arg1;	// IMP=0x0000000100058dcc
- (void)editableTextViewTextDidFinishCorrecting:(id)arg1;	// IMP=0x0000000100058974
- (void)editableTextViewTextDidChange:(id)arg1;	// IMP=0x0000000100058834
- (void)_checkUpdatedSizingForEditableTextView:(id)arg1;	// IMP=0x000000010005873c
- (void)editableTextViewTextWillBeginCorrecting:(id)arg1;	// IMP=0x000000010005855c
- (_Bool)editableTextViewTextShouldPreventCorrection:(id)arg1;	// IMP=0x0000000100058508
- (void)createEditableUtteranceView;	// IMP=0x0000000100058414
- (void)_hideEditableUtteranceView;	// IMP=0x00000001000582b8
- (void)_utteranceViewDidSelect:(id)arg1;	// IMP=0x0000000100058170
- (double)_insertionAnimatedZPosition;	// IMP=0x000000010005815c
- (long long)_replacementAnimation;	// IMP=0x000000010005813c
- (long long)_insertionAnimation;	// IMP=0x0000000100058124
- (long long)_pinAnimationType;	// IMP=0x000000010005811c
- (void)endEditingAndCorrectByTouchPoint:(struct CGPoint)arg1;	// IMP=0x0000000100057e44
- (void)endEditingAndCorrect:(_Bool)arg1;	// IMP=0x0000000100057d7c
- (double)baselineOffsetFromBottom;	// IMP=0x0000000100057d64
- (double)_scaledPaddingForPadding:(double)arg1;	// IMP=0x0000000100057ce4
- (double)desiredPinnedTopPadding;	// IMP=0x0000000100057c90
- (double)desiredTopPaddingBelowController:(id)arg1;	// IMP=0x0000000100057c3c
- (void)setAceObject:(id)arg1;	// IMP=0x00000001000577f4
- (void)handleChangeUtteranceCommand:(id)arg1;	// IMP=0x000000010005745c
- (void)handleShowSpeechAlternativesCommand:(id)arg1;	// IMP=0x00000001000573a8
- (void)handleAceCommand:(id)arg1;	// IMP=0x00000001000572d0
- (void)removeSpeechAlternativeViewAndUpdateUtteranceTextIfNecessary;	// IMP=0x0000000100057198
- (void)removeSpeechAlternatives;	// IMP=0x0000000100057108
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x000000010005709c
- (id)_correctionIdentifier;	// IMP=0x0000000100057048
@property(readonly, copy) NSString *description;
- (void)setUtteranceUserInteractionEnabled:(_Bool)arg1;	// IMP=0x0000000100056e78
- (void)_updateViewWithChangeUtteranceIfNeeded:(id)arg1;	// IMP=0x0000000100056d6c
- (void)_updateViewWithUserUtterance:(id)arg1;	// IMP=0x0000000100056be0
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100056ad4
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100056930
- (void)viewWillLayoutSubviews;	// IMP=0x000000010005681c
- (void)loadView;	// IMP=0x0000000100056688

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

