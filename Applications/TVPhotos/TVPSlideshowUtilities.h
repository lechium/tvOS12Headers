//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVPSlideshowUtilities : NSObject
{
    long long _mode;	// 8 = 0x8
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (id)_getRandomizedMarimbaTheme;	// IMP=0x0000000100097ac8
- (void)_setTransitionTiming:(double)arg1 marimbaView:(id)arg2;	// IMP=0x00000001000977a0
- (id)alertControllerDisplayingTimePerSlideOptionsForCell:(id)arg1;	// IMP=0x0000000100096ba0
- (_Bool)themeHasAdditionalOptions:(id)arg1;	// IMP=0x0000000100096b28
- (double)timePerSlide;	// IMP=0x0000000100096a64
- (void)cleanUpMarimbaResources:(id)arg1;	// IMP=0x00000001000969c8
- (void)updateMarimbaView:(id)arg1 transitionTiming:(double)arg2;	// IMP=0x00000001000966e0
- (void)updateTransitionTimingForMarimbaView:(id)arg1;	// IMP=0x00000001000966d0
- (void)updateMarimbaView:(id)arg1 currentTheme:(id)arg2 currentTransition:(id)arg3;	// IMP=0x0000000100095d9c
- (id)updateMarimbaDocument:(id)arg1 photoAssets:(id)arg2;	// IMP=0x000000010009577c
- (id)init;	// IMP=0x0000000100095730
- (id)initWithMarimbaMode:(long long)arg1;	// IMP=0x00000001000956e0

@end
