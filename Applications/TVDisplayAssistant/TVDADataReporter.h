//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPAggregateDictionary;

@interface TVDADataReporter : NSObject
{
    long long _aggKind;	// 8 = 0x8
    CPAggregateDictionary *_aggDictionary;	// 16 = 0x10
    _Bool _advertisingHDMI2;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000540c
- (void)recordNetworkInterferenceWarning;	// IMP=0x00000001000052f0
- (void)recordInsufficientNetworkBandwidthWarning;	// IMP=0x00000001000051d4
- (void)recordReset;	// IMP=0x00000001000051b4
- (void)recordConfirmUpgradedMode;	// IMP=0x0000000100004ec4
- (void)recordRevert;	// IMP=0x0000000100004de8
- (id)initWithPresentationRequest:(id)arg1;	// IMP=0x0000000100004ccc

@end
