//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface TVPhotoCollectionGroup : NSObject
{
    NSString *_photoCollectionGroupName;	// 8 = 0x8
    NSString *_photoCollectionGroupIdentifier;	// 16 = 0x10
    NSDictionary *_photoCollectionGroupProviderInfo;	// 24 = 0x18
    NSArray *_photoCollections;	// 32 = 0x20
}

@property(readonly, copy, nonatomic) NSArray *photoCollections; // @synthesize photoCollections=_photoCollections;
- (void).cxx_destruct;	// IMP=0x000000010009a848
@property(readonly, copy, nonatomic) NSDictionary *photoCollectionGroupProviderInfo;
@property(readonly, copy, nonatomic) NSString *photoCollectionGroupIdentifier;
@property(readonly, copy, nonatomic) NSString *photoCollectionGroupName;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010009a2d4
- (unsigned long long)hash;	// IMP=0x000000010009a2a8
- (id)initWithPhotoCollections:(id)arg1;	// IMP=0x000000010009a220
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000010009a198
- (id)initWithName:(id)arg1;	// IMP=0x000000010009a110

@end
