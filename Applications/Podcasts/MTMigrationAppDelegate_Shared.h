//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

#import "UIApplicationDelegate.h"

@class MTAppDelegate_Shared, NSMutableArray, NSString, UIWindow;

@interface MTMigrationAppDelegate_Shared : NSProxy <UIApplicationDelegate>
{
    _Bool _isMigrating;	// 8 = 0x8
    UIWindow *_window;	// 16 = 0x10
    MTAppDelegate_Shared *_appDelegate;	// 24 = 0x18
    NSMutableArray *_queuedInvocations;	// 32 = 0x20
    unsigned long long _processAssertion;	// 40 = 0x28
}

+ (void)moveSourceFile:(id)arg1 toPath:(id)arg2;	// IMP=0x000000010008f140
+ (void)destroyAndRebuildDatabase;	// IMP=0x000000010008ee68
@property(nonatomic) unsigned long long processAssertion; // @synthesize processAssertion=_processAssertion;
@property(retain, nonatomic) NSMutableArray *queuedInvocations; // @synthesize queuedInvocations=_queuedInvocations;
@property(retain, nonatomic) MTAppDelegate_Shared *appDelegate; // @synthesize appDelegate=_appDelegate;
@property(nonatomic) _Bool isMigrating; // @synthesize isMigrating=_isMigrating;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x000000010008f2c0
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000010008ee14
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x000000010008edc0
- (void)flushInvocations;	// IMP=0x000000010008ec04
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000010008eba8
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000010008ea70
- (void)finishMigration;	// IMP=0x000000010008e920
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x000000010008e8e0
- (void)showIncompatibleDBDialog;	// IMP=0x000000010008e6ec
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010008e04c
- (_Bool)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;	// IMP=0x000000010008e044
- (id)init;	// IMP=0x000000010008dfd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
