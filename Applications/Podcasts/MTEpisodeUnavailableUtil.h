//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

@interface MTEpisodeUnavailableUtil : MTSingleton
{
}

+ (id)longReasonTextForNoInternet;	// IMP=0x00000001000c7b60
+ (id)longStringForUnavailableReason:(unsigned long long)arg1 podcastTitle:(id)arg2;	// IMP=0x00000001000c7830
+ (id)stringForUnavailableReason:(unsigned long long)arg1;	// IMP=0x00000001000c7720
+ (unsigned long long)unavailableReasonForEpisode:(id)arg1;	// IMP=0x00000001000c7640
- (void)_presentRestrictedDialogWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c8278
- (void)_presentErrorDialogWithTitle:(id)arg1 message:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c8114
- (_Bool)showDialogForReason:(unsigned long long)arg1 podcastTitle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c7d30

@end

