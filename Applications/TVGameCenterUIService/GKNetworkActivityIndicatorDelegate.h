//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKDaemonProxyNetworkActivityIndicatorDelegate.h"

@class NSString;

@interface GKNetworkActivityIndicatorDelegate : NSObject <GKDaemonProxyNetworkActivityIndicatorDelegate>
{
    int _networkIndicatorCount;	// 8 = 0x8
}

@property(nonatomic) int networkIndicatorCount; // @synthesize networkIndicatorCount=_networkIndicatorCount;
- (void)resetNetworkActivity;	// IMP=0x000000010001800c
- (void)endNetworkActivity;	// IMP=0x0000000100017f2c
- (void)beginNetworkActivity;	// IMP=0x0000000100017e5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

