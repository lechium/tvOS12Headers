//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface BuddyLanguageChangeObserver : NSObject
{
    _Bool _observing;	// 8 = 0x8
    id <BuddyLanguageChangeObserverDelegate> _delegate;	// 16 = 0x10
    NSTimer *_localeTimer;	// 24 = 0x18
}

@property(retain, nonatomic) NSTimer *localeTimer; // @synthesize localeTimer=_localeTimer;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(nonatomic) __weak id <BuddyLanguageChangeObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100070390
- (void)localeDidChange;	// IMP=0x00000001000701a0
- (void)unsubscribeFromLocaleChangeNotification;	// IMP=0x0000000100070170
- (void)subscribeToLocaleChangeNotification;	// IMP=0x00000001000700dc
- (void)localeTimerFired:(id)arg1;	// IMP=0x000000010006ffd8
- (void)startLocaleTimer;	// IMP=0x000000010006fe4c
- (void)languageDidChange;	// IMP=0x000000010006fd68
- (void)unsubscribeFromLanguageChangeNotification;	// IMP=0x000000010006fd38
- (void)subscribeToLanguageChangeNotification;	// IMP=0x000000010006fca4
- (void)stopObservingLanguageChanges;	// IMP=0x000000010006fbf8
- (void)startObservingLanguageChanges;	// IMP=0x000000010006fb90
- (void)dealloc;	// IMP=0x000000010006fb44

@end
