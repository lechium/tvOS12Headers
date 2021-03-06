//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSURL;

@interface SVSSiriPresentationPluginHost : NSObject
{
    _Bool _loaded;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSMutableDictionary *_bundleURLsByBundleIdentifier;	// 24 = 0x18
}

+ (id)sharedSiriPresentationPluginHost;	// IMP=0x0000000100046680
+ (id)_defaultURL;	// IMP=0x00000001000465c4
@property(readonly, nonatomic, getter=_bundleURLsByBundleIdentifier) NSMutableDictionary *bundleURLsByBundleIdentifier; // @synthesize bundleURLsByBundleIdentifier=_bundleURLsByBundleIdentifier;
@property(nonatomic, getter=_isLoaded, setter=_setLoaded:) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic, getter=_URL) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;	// IMP=0x0000000100047fb4
- (void)_save;	// IMP=0x0000000100047cf4
- (void)_load;	// IMP=0x0000000100047990
- (void)_loadFromPropertyListRepresentation:(id)arg1;	// IMP=0x0000000100047620
- (id)_propertyListRepresentation;	// IMP=0x0000000100047490
- (id)presentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x0000000100047364
- (void)preloadPluginBundles;	// IMP=0x000000010004727c
- (void)preloadPresentationBundleWithIdentifier:(id)arg1;	// IMP=0x0000000100047134
- (id)_siriPresentationPluginBundleWithIdentifier:(id)arg1;	// IMP=0x0000000100047030
- (id)_cachedURLForBundleWithIdentifier:(id)arg1;	// IMP=0x0000000100046f9c
- (void)_rescanBundles;	// IMP=0x0000000100046b1c
- (id)_builtInPresentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x00000001000469e4
- (id)_classNameForBuiltInPresentationWithIdentifier:(id)arg1;	// IMP=0x0000000100046894
- (id)init;	// IMP=0x0000000100046830
- (id)initWithURL:(id)arg1;	// IMP=0x0000000100046774

@end

