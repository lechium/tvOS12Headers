//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBWindow.h"

@class PBWallpaperViewController;

@interface PBBackgroundWindow : PBWindow
{
    PBWallpaperViewController *_wallpaperViewController;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010006ae8c
@property(retain, nonatomic) PBWallpaperViewController *wallpaperViewController; // @synthesize wallpaperViewController=_wallpaperViewController;
- (void).cxx_destruct;	// IMP=0x000000010006b23c
- (void)updateWallpaperWithTransitionContext:(id)arg1;	// IMP=0x000000010006b1f0
- (void)exitIdleMode:(_Bool)arg1;	// IMP=0x000000010006b1bc
- (void)enterIdleMode:(_Bool)arg1;	// IMP=0x000000010006b188
- (void)updateBackgroundWindowAndMakeVisible;	// IMP=0x000000010006b0c4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010006b030

@end
