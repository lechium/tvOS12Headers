//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TVCSHome;

@interface PBHomeMediaAccessControlManager : NSObject
{
    TVCSHome *_hmHome;	// 8 = 0x8
    _Bool _updatingAirPlaySettings;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010004b598
- (void).cxx_destruct;	// IMP=0x000000010004cba0
- (void)_handleAirPlaySettingsDidChange;	// IMP=0x000000010004c174
- (void)_handleHomeAccessoryUpdate;	// IMP=0x000000010004b94c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010004b854
- (id)_init;	// IMP=0x000000010004b65c
- (id)init;	// IMP=0x000000010004b61c

@end
