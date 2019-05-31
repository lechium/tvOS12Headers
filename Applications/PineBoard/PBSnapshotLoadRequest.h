//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface PBSnapshotLoadRequest : NSObject <NSCopying>
{
    _Bool _preferLaunchImage;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    double _preferredScaleFactor;	// 24 = 0x18
    NSString *_variant;	// 32 = 0x20
}

+ (id)requestWithBundleIdentifier:(id)arg1;	// IMP=0x000000010002fd04
@property(copy, nonatomic) NSString *variant; // @synthesize variant=_variant;
@property(nonatomic) double preferredScaleFactor; // @synthesize preferredScaleFactor=_preferredScaleFactor;
@property(nonatomic) _Bool preferLaunchImage; // @synthesize preferLaunchImage=_preferLaunchImage;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;	// IMP=0x00000001000301ec
- (unsigned long long)hash;	// IMP=0x0000000100030098
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010002fe68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002fdb0

@end

