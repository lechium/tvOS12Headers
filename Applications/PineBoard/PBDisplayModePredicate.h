//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PBDisplayModePredicate : NSObject
{
    long long _dynamicRange;	// 8 = 0x8
    double _frameRate;	// 16 = 0x10
    long long _SDRColorMapping;	// 24 = 0x18
}

+ (id)predicatesWithPreferredSDRColorMapping:(long long)arg1 frameRate:(double)arg2;	// IMP=0x00000001000477ec
+ (id)predicatWithDynamicRange:(long long)arg1 frameRate:(double)arg2;	// IMP=0x0000000100047788
@property(readonly, nonatomic) long long SDRColorMapping; // @synthesize SDRColorMapping=_SDRColorMapping;
@property(readonly, nonatomic) double frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, nonatomic) long long dynamicRange; // @synthesize dynamicRange=_dynamicRange;
- (unsigned long long)hash;	// IMP=0x0000000100047d70
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100047c4c
- (id)description;	// IMP=0x0000000100047a68
@property(readonly, nonatomic) double roundedFrameRate;
- (id)initWithDynamicRange:(long long)arg1 SDRColorMapping:(long long)arg2 frameRate:(double)arg3;	// IMP=0x00000001000479bc

@end

