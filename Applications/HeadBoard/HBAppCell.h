//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HBRootCell.h"

#import "HBAppObserver.h"
#import "HBBubbleAnimationDelegate.h"

@class HBApp, NSString, UIView, _UIStackedImageContainerView;

@interface HBAppCell : HBRootCell <HBAppObserver, HBBubbleAnimationDelegate>
{
    _UIStackedImageContainerView *_folderBackdropView;	// 8 = 0x8
    UIView *_cacheDeleteOverlay;	// 16 = 0x10
}

@property(retain, nonatomic) UIView *cacheDeleteOverlay; // @synthesize cacheDeleteOverlay=_cacheDeleteOverlay;
@property(retain, nonatomic) _UIStackedImageContainerView *folderBackdropView; // @synthesize folderBackdropView=_folderBackdropView;
- (void).cxx_destruct;	// IMP=0x0000000100046e64
- (id)_newDotViewForStyle:(long long)arg1;	// IMP=0x00000001000468b4
- (id)_iconDotImage;	// IMP=0x000000010004675c
- (id)_tintColorForIcon;	// IMP=0x00000001000466b8
- (void)_updateCacheDeleteStyle;	// IMP=0x0000000100046544
- (void)_updatePlaceholderState;	// IMP=0x000000010004626c
- (void)_updateAppAccessory;	// IMP=0x0000000100046208
- (void)_updateDotStyle;	// IMP=0x0000000100046160
- (void)_updateAppIcon;	// IMP=0x00000001000460d0
- (id)_layerBelowFlash;	// IMP=0x0000000100045fe8
- (void)setDropState:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000455b4
- (void)setDropState:(long long)arg1;	// IMP=0x00000001000455a4
@property(readonly, nonatomic) HBApp *app;
- (void)setItem:(id)arg1 withIcon:(id)arg2;	// IMP=0x000000010004542c
- (void)setItem:(id)arg1;	// IMP=0x00000001000452e4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100045120
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000100044fa0
- (id)notificationObject:(id)arg1;	// IMP=0x0000000100044e84
- (void)appStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100044df0
- (void)appCacheDeletingDidChangeNotification:(id)arg1;	// IMP=0x0000000100044d5c
- (void)appIconDidChangeNotification:(id)arg1;	// IMP=0x0000000100044cc8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100044b9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

