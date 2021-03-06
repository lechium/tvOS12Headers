//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BuddyLanguageChangeObserverDelegate.h"

@class BuddyLanguageChangeObserver, NSString, SATVAbstractFlow, SATVNavigationController, SATVWindow, UIView;

@interface TVSetupController : NSObject <BuddyLanguageChangeObserverDelegate>
{
    SATVWindow *_window;	// 8 = 0x8
    UIView *_windowView;	// 16 = 0x10
    unsigned long long _earliestCompletionTime;	// 24 = 0x18
    SATVNavigationController *_nav;	// 32 = 0x20
    _Bool _buddyDone;	// 40 = 0x28
    NSString *_languageAtStartup;	// 48 = 0x30
    NSString *_localeIdentifierAtStartup;	// 56 = 0x38
    BuddyLanguageChangeObserver *_languageObserver;	// 64 = 0x40
    SATVAbstractFlow *_flow;	// 72 = 0x48
    _Bool _inOutOfBoxFlow;	// 80 = 0x50
}

+ (id)sharedSetupController;	// IMP=0x00000001000871b8
@property(nonatomic, getter=isInOutofBoxFlow) _Bool inOutOfBoxFlow; // @synthesize inOutOfBoxFlow=_inOutOfBoxFlow;
- (void).cxx_destruct;	// IMP=0x00000001000889cc
- (void)_localeChanged;	// IMP=0x0000000100088964
- (_Bool)deviceHasWiFi;	// IMP=0x000000010008887c
- (void)_refreshLanguage;	// IMP=0x00000001000887b8
- (void)observer:(id)arg1 didObserveLanguageChange:(_Bool)arg2 localeChange:(_Bool)arg3;	// IMP=0x0000000100088680
- (void)exitBuddy;	// IMP=0x0000000100088668
- (void)didEnterBackground;	// IMP=0x00000001000885ac
- (void)respring;	// IMP=0x0000000100088564
- (void)suspendApp;	// IMP=0x00000001000882fc
- (void)resign;	// IMP=0x00000001000882b4
- (void)resume;	// IMP=0x00000001000882b0
- (void)run;	// IMP=0x0000000100087c88
- (void)_createNav;	// IMP=0x00000001000877ec
- (id)navigationController;	// IMP=0x00000001000877dc
- (void)_finishBuddy;	// IMP=0x00000001000875bc
- (void)_finishBuddyWhenReady;	// IMP=0x0000000100087534
- (void)setBuddyComplete;	// IMP=0x0000000100087274
- (void)dealloc;	// IMP=0x0000000100087210

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

