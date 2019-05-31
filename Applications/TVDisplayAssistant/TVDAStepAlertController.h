//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVSUITextAlertController.h"

#import "TVDAInternalStepViewControllerDescribing.h"

@class NSString, TVDAUserStep, TVSUITextAlertButton, UILabel;

@interface TVDAStepAlertController : TVSUITextAlertController <TVDAInternalStepViewControllerDescribing>
{
    TVSUITextAlertButton *_timerButton;	// 8 = 0x8
    NSString *_initialTimerButtonTitle;	// 16 = 0x10
    TVDAUserStep *_step;	// 24 = 0x18
    UILabel *_internalDescriptionLabel;	// 32 = 0x20
    CDUnknownBlockType _actionFlowHandler;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType actionFlowHandler; // @synthesize actionFlowHandler=_actionFlowHandler;
@property(readonly, nonatomic) UILabel *internalDescriptionLabel; // @synthesize internalDescriptionLabel=_internalDescriptionLabel;
@property(readonly, nonatomic) TVDAUserStep *step; // @synthesize step=_step;
- (void).cxx_destruct;	// IMP=0x00000001000154b4
- (void)_handleActionTimerStatusChange:(double)arg1;	// IMP=0x0000000100015344
- (void)_triggerActionHandlerWithAction:(id)arg1;	// IMP=0x00000001000152e0
- (void)_handleMenuPress:(id)arg1;	// IMP=0x0000000100015230
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000150c4
- (void)viewDidLoad;	// IMP=0x0000000100014f64
- (id)initWithStep:(id)arg1 actionFlowHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100014658
- (id)initWithTitle:(id)arg1 text:(id)arg2 footers:(id)arg3;	// IMP=0x0000000100014644

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

