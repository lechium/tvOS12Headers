//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKJSObject.h"

#import "MTJSPodcasts.h"

@interface MTJSPodcasts : IKJSObject <MTJSPodcasts>
{
}

- (id)_adjustedOptionsWithOptions:(id)arg1;	// IMP=0x00000001000f21b4
- (id)identifierForDictionary:(id)arg1;	// IMP=0x00000001000f1fe8
- (void)markWelcomeAsShown;	// IMP=0x00000001000f1fd4
- (_Bool)shouldShowWelcome;	// IMP=0x00000001000f1fc0
- (void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1:(id)arg2;	// IMP=0x00000001000f1de0
- (_Bool)isDiagnosticSubmissionAllowed;	// IMP=0x00000001000f1d8c
- (_Bool)isSubscribed:(id)arg1;	// IMP=0x00000001000f1d78
- (void)unsubscribe:(id)arg1;	// IMP=0x00000001000f1d64
- (void)subscribeWithCallback:(id)arg1:(id)arg2;	// IMP=0x00000001000f1bb4
- (void)subscribe:(id)arg1;	// IMP=0x00000001000f1ba4

@end
