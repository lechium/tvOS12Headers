//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol DADeviceObserver <NSObject>
- (void)discoverAllDevicesWithCompletionHandler:(void (^)(NSSet *))arg1;
- (void)endDiscoveringDevicesWithIdentifier:(struct NSObject *)arg1;
- (struct NSObject *)beginDiscoveringDevicesWithHandler:(void (^)(NSSet *))arg1;
@end

