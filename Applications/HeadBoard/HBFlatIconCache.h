//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HBFlatIconCache : NSObject
{
}

+ (id)_foregroundImageForFolder:(id)arg1;	// IMP=0x000000010008a268
+ (id)_createAndCacheFlatFolderIconForName:(id)arg1 fromFolder:(id)arg2;	// IMP=0x0000000100089e78
+ (id)_cachedFlatFolderIconForName:(id)arg1;	// IMP=0x0000000100089c0c
+ (id)_cacheFileNameForFolder:(id)arg1;	// IMP=0x00000001000899d0
+ (void)_writeFlatIconToCache:(id)arg1 forApplication:(id)arg2;	// IMP=0x00000001000895b4
+ (id)_createAndCacheFlatIconForApplication:(id)arg1;	// IMP=0x000000010008931c
+ (id)_createAndCacheFlatIconForApplication:(id)arg1 withLayerImage:(id)arg2;	// IMP=0x0000000100088fe8
+ (id)_cachedFlatIconForApplication:(id)arg1;	// IMP=0x0000000100088dd0
+ (id)_flatIconCacheDirectory;	// IMP=0x0000000100088ccc
+ (id)cacheKeyForApplication:(id)arg1;	// IMP=0x0000000100088c70
+ (id)flatForegroundIconForFolder:(id)arg1;	// IMP=0x0000000100088bb8
+ (id)flatPlaceholderIconForApplication:(id)arg1;	// IMP=0x0000000100088990
+ (id)flatIconForApplication:(id)arg1 withLayerImage:(id)arg2;	// IMP=0x00000001000888e0
+ (id)flatIconForApplication:(id)arg1 withCornerRadius:(double)arg2;	// IMP=0x000000010008878c
+ (id)flatIconForApplication:(id)arg1;	// IMP=0x00000001000886ac
+ (id)unfocusedFolderBackgroundImageWithInterfaceStyle:(long long)arg1;	// IMP=0x000000010008adb0
+ (id)focusedFolderBackgroundImageWithInterfaceStyle:(long long)arg1;	// IMP=0x000000010008aa78
+ (id)defaultPlaceholderLayerIcon;	// IMP=0x000000010008aa5c
+ (_Bool)isApplePhotosApplication:(id)arg1;	// IMP=0x000000010008aa04
+ (id)imageWithImage:(id)arg1;	// IMP=0x000000010008a888

@end

