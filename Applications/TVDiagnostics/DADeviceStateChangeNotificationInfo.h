//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DADeviceState;

@interface DADeviceStateChangeNotificationInfo : NSObject
{
    unsigned long long _changedProperties;	// 8 = 0x8
    DADeviceState *_snapshot;	// 16 = 0x10
}

+ (id)infoWithChangedProperties:(unsigned long long)arg1 snapshot:(id)arg2;	// IMP=0x000000010000d198
@property(readonly, nonatomic) DADeviceState *snapshot; // @synthesize snapshot=_snapshot;
@property(readonly, nonatomic) unsigned long long changedProperties; // @synthesize changedProperties=_changedProperties;
- (void).cxx_destruct;	// IMP=0x000000010000d2b4
- (id)initWithChangedProperties:(unsigned long long)arg1 snapshot:(id)arg2;	// IMP=0x000000010000d204

@end

