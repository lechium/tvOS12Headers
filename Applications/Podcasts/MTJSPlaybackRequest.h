//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString;

@interface MTJSPlaybackRequest : NSObject
{
    _Bool _firstItemIsRestricted;	// 8 = 0x8
    NSString *_featureName;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    NSData *_recommendationData;	// 32 = 0x20
    unsigned long long _shuffleMode;	// 40 = 0x28
    unsigned long long _startIndex;	// 48 = 0x30
    unsigned long long _upNextAction;	// 56 = 0x38
}

@property(readonly, nonatomic) _Bool firstItemIsRestricted; // @synthesize firstItemIsRestricted=_firstItemIsRestricted;
@property(readonly, nonatomic) unsigned long long upNextAction; // @synthesize upNextAction=_upNextAction;
@property(readonly, nonatomic) unsigned long long startIndex; // @synthesize startIndex=_startIndex;
@property(readonly, nonatomic) unsigned long long shuffleMode; // @synthesize shuffleMode=_shuffleMode;
@property(readonly, copy, nonatomic) NSData *recommendationData; // @synthesize recommendationData=_recommendationData;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
- (void).cxx_destruct;	// IMP=0x00000001000c713c
- (id)initWithJSDictionary:(id)arg1;	// IMP=0x00000001000c6b20
- (id)init;	// IMP=0x00000001000c6adc

@end

