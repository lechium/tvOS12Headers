//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SSIndicatorLight;

@interface PRESystemIndicator : NSObject
{
    SSIndicatorLight *_sil;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010000516c
@property(retain, nonatomic) SSIndicatorLight *sil; // @synthesize sil=_sil;
- (void).cxx_destruct;	// IMP=0x0000000100005448
- (void)off;	// IMP=0x00000001000053d4
- (void)on;	// IMP=0x0000000100005384
- (void)flashMorseCodePattern:(id)arg1;	// IMP=0x000000010000526c
- (id)init;	// IMP=0x00000001000051ec

@end

