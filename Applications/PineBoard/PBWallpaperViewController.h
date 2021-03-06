//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIView;

@interface PBWallpaperViewController : UIViewController
{
    _Bool _idleModeActive;	// 8 = 0x8
    UIView *_wallpaperView;	// 16 = 0x10
}

@property(retain, nonatomic) UIView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
@property(readonly, nonatomic, getter=isIdleModeActive) _Bool idleModeActive; // @synthesize idleModeActive=_idleModeActive;
- (void).cxx_destruct;	// IMP=0x0000000100090bdc
- (id)_wallpaperForFocusedProcessWithVariant:(long long)arg1;	// IMP=0x0000000100090a8c
- (void)_updateWallpaperForFocusedProcess;	// IMP=0x00000001000909a4
- (void)updateWallpaperWithTransitionContext:(id)arg1;	// IMP=0x00000001000906bc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100090604
- (void)setIdleModeActive:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000903b8
- (void)viewDidLoad;	// IMP=0x0000000100090368
- (void)dealloc;	// IMP=0x00000001000902e0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100090220

@end

