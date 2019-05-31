//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DADeviceObserver.h"
#import "DADeviceObserverEnclosureDelegate.h"

@class NSArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface DADeviceObserverAggregator : NSObject <DADeviceObserverEnclosureDelegate, DADeviceObserver>
{
    NSOperationQueue *_discoveryQueue;	// 8 = 0x8
    NSArray *_observers;	// 16 = 0x10
    NSMutableDictionary *_handlers;	// 24 = 0x18
}

+ (id)defaultObserverClasses;	// IMP=0x0000000100003954
+ (id)aggregatorWithObserverClasses:(id)arg1;	// IMP=0x00000001000038f0
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSOperationQueue *discoveryQueue; // @synthesize discoveryQueue=_discoveryQueue;
- (void).cxx_destruct;	// IMP=0x00000001000049f8
- (void)_endObserving;	// IMP=0x000000010000486c
- (void)_beginObserving;	// IMP=0x000000010000474c
- (void)observerDidChangeDevices:(id)arg1;	// IMP=0x0000000100004430
- (void)discoverAllDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000401c
- (void)endDiscoveringDevicesWithIdentifier:(struct NSObject *)arg1;	// IMP=0x0000000100003f4c
- (struct NSObject *)beginDiscoveringDevicesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100003e20
- (id)allDevices;	// IMP=0x0000000100003ca0
- (id)initWithObserverClasses:(id)arg1;	// IMP=0x0000000100003a0c
- (id)init;	// IMP=0x00000001000039a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
