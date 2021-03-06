//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSAnimationFenceHandle, NSArray;

@protocol PBSystemServiceClientInterface <NSObject>
- (void)prepareForDefaultKioskAppTransitionWithCompletion:(void (^)(void))arg1;
- (void)startDefaultKioskAppTransitionForType:(long long)arg1 animationDuration:(double)arg2 animationFence:(BKSAnimationFenceHandle *)arg3 delay:(double)arg4;
- (void)startDefaultKioskAppTransitionWithAnimationFence:(BKSAnimationFenceHandle *)arg1 completion:(void (^)(void))arg2;
- (void)prepareDefaultKioskAppTransitionForType:(long long)arg1 animationDuration:(double)arg2 delay:(double)arg3 completion:(void (^)(void))arg4;
- (void)defaultKioskAppPurgeTopShelfContentForApplicationIdentifiers:(NSArray *)arg1;
- (void)defaultKioskAppHandleHomeButtonWithCompletion:(void (^)(void))arg1;
@end

