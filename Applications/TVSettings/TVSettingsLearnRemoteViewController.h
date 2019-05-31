//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PBSExternalControlIRLearningManagerDelegate.h"

@class NSSet, NSString, NSUUID, PBSExternalControlIRLearningConfiguration, PBSExternalControlIRLearningManager, UIButton, UIImageView, UILabel, UIProgressView, UIStackView, UITapGestureRecognizer;

@interface TVSettingsLearnRemoteViewController : UIViewController <PBSExternalControlIRLearningManagerDelegate>
{
    struct {
        unsigned int startLearningAttemptCount:4;
        unsigned int shouldCompleteOnViewDidAppear:1;
        unsigned int didFailFromError:1;
        unsigned int didFailFromInactivity:1;
        unsigned int shouldLearnNextActionOnButtonRelease:1;
    } _flags;	// 8 = 0x8
    PBSExternalControlIRLearningConfiguration *_configuration;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_instructionLabel;	// 40 = 0x28
    UILabel *_bottomTextLabel;	// 48 = 0x30
    UILabel *_activityLabel;	// 56 = 0x38
    UIProgressView *_progressView;	// 64 = 0x40
    UIImageView *_buttonImageView;	// 72 = 0x48
    UIStackView *_learningStackView;	// 80 = 0x50
    UIStackView *_learningHeaderStackView;	// 88 = 0x58
    UIStackView *_learningProgressStackView;	// 96 = 0x60
    UIButton *_focusButton;	// 104 = 0x68
    UITapGestureRecognizer *_leftTapGestureRecognizer;	// 112 = 0x70
    UITapGestureRecognizer *_rightTapGestureRecognizer;	// 120 = 0x78
    PBSExternalControlIRLearningManager *_learningManager;	// 128 = 0x80
    NSSet *_learnedActions;	// 136 = 0x88
    NSUUID *_learnedDeviceUUID;	// 144 = 0x90
}

@property(retain, nonatomic) NSUUID *learnedDeviceUUID; // @synthesize learnedDeviceUUID=_learnedDeviceUUID;
@property(copy, nonatomic) NSSet *learnedActions; // @synthesize learnedActions=_learnedActions;
@property(retain, nonatomic) PBSExternalControlIRLearningManager *learningManager; // @synthesize learningManager=_learningManager;
@property(retain, nonatomic) UITapGestureRecognizer *rightTapGestureRecognizer; // @synthesize rightTapGestureRecognizer=_rightTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *leftTapGestureRecognizer; // @synthesize leftTapGestureRecognizer=_leftTapGestureRecognizer;
@property(retain, nonatomic) UIButton *focusButton; // @synthesize focusButton=_focusButton;
@property(retain, nonatomic) UIStackView *learningProgressStackView; // @synthesize learningProgressStackView=_learningProgressStackView;
@property(retain, nonatomic) UIStackView *learningHeaderStackView; // @synthesize learningHeaderStackView=_learningHeaderStackView;
@property(retain, nonatomic) UIStackView *learningStackView; // @synthesize learningStackView=_learningStackView;
@property(retain, nonatomic) UIImageView *buttonImageView; // @synthesize buttonImageView=_buttonImageView;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) UILabel *bottomTextLabel; // @synthesize bottomTextLabel=_bottomTextLabel;
@property(retain, nonatomic) UILabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) PBSExternalControlIRLearningConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;	// IMP=0x00000001000966a0
- (id)_imageForAction:(int)arg1;	// IMP=0x00000001000960d4
- (void)_learnNextAction:(id)arg1;	// IMP=0x0000000100096034
- (void)_learnPreviousAction:(id)arg1;	// IMP=0x0000000100095f94
- (void)_updateProgressViewWithProgress:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100095efc
- (void)_hideProgressView;	// IMP=0x0000000100095e74
- (void)irLearningManager:(id)arg1 didFinishLearningAction:(int)arg2;	// IMP=0x0000000100095950
- (void)irLearningManager:(id)arg1 didCompleteLearningAction:(int)arg2 withResult:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000100095390
- (void)irLearningManager:(id)arg1 didLearnAction:(int)arg2 withProgress:(double)arg3;	// IMP=0x000000010009522c
- (void)irLearningManager:(id)arg1 willStartLearningAction:(int)arg2;	// IMP=0x0000000100094eb8
- (void)irLearningManagerDidCancel:(id)arg1;	// IMP=0x0000000100094eb4
- (void)irLearningManager:(id)arg1 didSaveLearnedActions:(id)arg2 forDeviceWithUUID:(id)arg3;	// IMP=0x0000000100094b64
- (void)irLearningManager:(id)arg1 didFailToStartLearningWithError:(id)arg2;	// IMP=0x0000000100094950
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100094730
- (id)preferredFocusEnvironments;	// IMP=0x00000001000946a0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100094524
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010009432c
- (void)viewDidLoad;	// IMP=0x0000000100092da0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100092ca8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

