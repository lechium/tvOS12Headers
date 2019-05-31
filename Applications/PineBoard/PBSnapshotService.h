//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSApplicationWorkspaceObserverProtocol.h"
#import "PBSMigrationHandling.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface PBSnapshotService : NSObject <LSApplicationWorkspaceObserverProtocol, PBSMigrationHandling>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSOperationQueue *_imageProcessingQueue;	// 16 = 0x10
    NSMutableArray *_pendingImageOperations;	// 24 = 0x18
}

+ (void)_invalidateSnapshotsWithMask:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000010005b880
+ (id)sharedInstance;	// IMP=0x0000000100058e6c
+ (unsigned long long)migrateWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100058b30
@property(readonly, nonatomic) NSMutableArray *pendingImageOperations; // @synthesize pendingImageOperations=_pendingImageOperations;
@property(readonly, nonatomic) NSOperationQueue *imageProcessingQueue; // @synthesize imageProcessingQueue=_imageProcessingQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void).cxx_destruct;	// IMP=0x000000010005dbf4
- (void)_processPendingOperations;	// IMP=0x000000010005d948
- (void)_processImageOperationsSync:(id)arg1;	// IMP=0x000000010005d834
- (void)_cancelSnapshotOperationsWithGroupID:(id)arg1;	// IMP=0x000000010005d540
- (void)_cancelWallpaperOperations;	// IMP=0x000000010005d31c
- (void)_processImageOperation:(id)arg1;	// IMP=0x000000010005d1f4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010005d0b4
- (long long)_userInterfaceStyleForFocusedProcess;	// IMP=0x000000010005cfa0
- (id)_sortDescriptorsForImageScale:(double)arg1;	// IMP=0x000000010005cc80
- (void)_updateSnapshot:(id)arg1 withContext:(id)arg2 forProcessWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010005c014
- (void)_ingestDefaultLaunchImageForBundleIdentifier:(id)arg1;	// IMP=0x000000010005b9b0
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000010005b714
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000010005b570
- (void)cancelSnapshotsForSceneID:(id)arg1;	// IMP=0x000000010005b554
- (void)invalidateSnapshotsForBundleIdentifier:(id)arg1;	// IMP=0x000000010005b4f4
- (void)_saveWallpaperForSnapshotImage:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100059f50
- (void)saveWallpaperForSnapshotImage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100059ef8
- (void)setupWallpaper;	// IMP=0x0000000100059c30
- (void)saveSnapshotForScene:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000598e4
- (id)loadSnapshotImageWithRequest:(id)arg1;	// IMP=0x00000001000593dc
- (void)ingestLaunchImages;	// IMP=0x000000010005913c
- (void)dealloc;	// IMP=0x0000000100059098
- (id)init;	// IMP=0x0000000100058f28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
