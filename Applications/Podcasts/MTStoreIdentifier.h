//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface MTStoreIdentifier : NSObject
{
    NSNumber *_storeIdentifier;	// 8 = 0x8
    NSString *_feedUrl;	// 16 = 0x10
}

+ (_Bool)isNotEmptyNumber:(id)arg1;	// IMP=0x00000001000e03e8
+ (_Bool)isNotEmpty:(long long)arg1;	// IMP=0x00000001000e03c8
+ (_Bool)isEmptyNumber:(id)arg1;	// IMP=0x00000001000e038c
+ (_Bool)isEmpty:(long long)arg1;	// IMP=0x00000001000e0368
+ (id)serpentIdNumberFromStoreId:(long long)arg1;	// IMP=0x00000001000e02f0
+ (long long)serpentIdFromAdamId:(long long)arg1;	// IMP=0x00000001000e02d4
+ (id)serpentIdNumberFromAdamIdNumber:(id)arg1;	// IMP=0x00000001000e027c
+ (id)serpentIdListFromAdamIDList:(id)arg1;	// IMP=0x00000001000e01fc
+ (id)adamIdNumberFromStoreId:(long long)arg1;	// IMP=0x00000001000e0184
+ (long long)adamIDFromSerpentId:(long long)arg1;	// IMP=0x00000001000e0168
+ (id)adamIdNumberFromSerpentIdNumber:(id)arg1;	// IMP=0x00000001000e0110
+ (id)adamIDListFromSerpentIdList:(id)arg1;	// IMP=0x00000001000e0090
+ (id)episodePredicateForIdentifier:(id)arg1;	// IMP=0x00000001000dffb0
+ (id)podcastPredicateForIdentifer:(id)arg1;	// IMP=0x00000001000dfe60
+ (id)identifierWithFeedUrl:(id)arg1 storeIdentifier:(id)arg2;	// IMP=0x00000001000dfddc
+ (id)identifierWithFeedUrl:(id)arg1;	// IMP=0x00000001000dfd74
@property(retain, nonatomic) NSString *feedUrl; // @synthesize feedUrl=_feedUrl;
@property(retain, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
- (void).cxx_destruct;	// IMP=0x00000001000e0450
- (id)initWithFeedUrl:(id)arg1 storeIdentifier:(id)arg2;	// IMP=0x00000001000dfccc
- (id)initWithFeedUrl:(id)arg1;	// IMP=0x00000001000dfcbc

@end

