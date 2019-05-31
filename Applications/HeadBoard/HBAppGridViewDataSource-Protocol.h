//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HBAppGridView, HBRootCell, NSArray, NSIndexPath;

@protocol HBAppGridViewDataSource <NSObject>
- (void)appGridView:(HBAppGridView *)arg1 cancelPrefetchingForItemsAtIndexPaths:(NSArray *)arg2;
- (void)appGridView:(HBAppGridView *)arg1 prefetchItemsAtIndexPaths:(NSArray *)arg2;
- (HBRootCell *)appGridView:(HBAppGridView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)numberOfApplicationsInAppGridView:(HBAppGridView *)arg1;

@optional
- (void)appGridView:(HBAppGridView *)arg1 droppedItemAtIndexPathOutOfBounds:(NSIndexPath *)arg2 isLeft:(_Bool)arg3;
- (void)appGridView:(HBAppGridView *)arg1 droppedItemAtIndexPath:(NSIndexPath *)arg2 onItemAtIndexPath:(NSIndexPath *)arg3;
- (void)appGridView:(HBAppGridView *)arg1 moveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (_Bool)appGridView:(HBAppGridView *)arg1 canMoveItemAtIndexPath:(NSIndexPath *)arg2;
@end

