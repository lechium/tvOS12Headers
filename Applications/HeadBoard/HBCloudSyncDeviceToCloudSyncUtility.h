//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HBCloudSyncDeviceToCloudSyncUtility : NSObject
{
}

+ (id)_appIdsFromRootFolder:(id)arg1;	// IMP=0x00000001000687b0
+ (_Bool)parentFolderForApp:(id)arg1 containsOnlyNonRestorableApps:(id)arg2;	// IMP=0x00000001000684ac
+ (_Bool)hasAllParametersForInstallation:(id)arg1;	// IMP=0x00000001000682ac
+ (_Bool)isFolderSyncable:(id)arg1;	// IMP=0x0000000100067ff4
+ (_Bool)isAppSyncable:(id)arg1;	// IMP=0x0000000100067bb4
+ (id)validateFolderStructureAndDiscardUnwantedItems:(id)arg1;	// IMP=0x0000000100067498
+ (id)appsWithChangedAlternateAppIconsFromAllApps:(id)arg1 appIdsToSyncedIconNames:(id)arg2;	// IMP=0x0000000100066fb0
+ (id)updateItemOrderIdsForMovedItemsInFolder:(id)arg1;	// IMP=0x00000001000667b4
+ (id)allItemsWithUpdatedOrderIdsFromFolder:(id)arg1 baseOrderId:(unsigned long long)arg2;	// IMP=0x00000001000664ec
+ (_Bool)needToResetOrderingForItemsInFolder:(id)arg1;	// IMP=0x000000010006605c
+ (_Bool)doItemOrderIdsCollideInFolder:(id)arg1;	// IMP=0x0000000100065e68
+ (id)deletedItemsListFromFolder:(id)arg1 itemsToParentMapping:(id)arg2;	// IMP=0x0000000100065c30
+ (id)addedOrModifiedItemsFromRootFolderItems:(id)arg1 currentParentFolderLevel:(long long)arg2 itemsToParentMapping:(id)arg3;	// IMP=0x000000010006530c
+ (id)foldersWithChangedDisplayNamesFromFolder:(id)arg1 folderIdentifiersMappedToDisplayNames:(id)arg2;	// IMP=0x0000000100065090
+ (id)folderIdentifiersMappedToDisplayNamesFromSyncedRecords:(id)arg1 existingMapping:(id)arg2;	// IMP=0x0000000100064cf0
+ (id)folderIdentifiersMappedToDisplayNames:(id)arg1;	// IMP=0x0000000100064ad4
+ (id)itemsToParentMappingFromItems:(id)arg1 currentFolderLevelIndex:(long long)arg2;	// IMP=0x00000001000646c4
+ (id)itemsToParentMappingFromAddedRecords:(id)arg1 deletedRecordIDs:(id)arg2 existingItemsToParentMapping:(id)arg3 rootFolder:(id)arg4;	// IMP=0x0000000100064190
+ (void)initialize;	// IMP=0x0000000100064124

@end

