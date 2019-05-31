//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPAccessObject.h"

#import "MSASModelObserver.h"
#import "MSASPlugin.h"
#import "TVCKPushNotificationListener.h"

@class ACAccount, NSCache, NSString;

@interface TVPSharedPSAccessObject : TVPAccessObject <MSASPlugin, MSASModelObserver, TVCKPushNotificationListener>
{
    ACAccount *appleAccount;	// 8 = 0x8
    id <TVPSharedPSAccessObjectDelegate> _delegate;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    NSCache *_mediaURLCache;	// 32 = 0x20
}

+ (id)delegatePluginForPersonID:(id)arg1;	// IMP=0x0000000100020078
+ (id)accessObjectWithAppleAccount:(id)arg1;	// IMP=0x000000010001eb9c
+ (void)initialize;	// IMP=0x000000010001eae8
@property(retain, nonatomic) NSCache *mediaURLCache; // @synthesize mediaURLCache=_mediaURLCache;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak id <TVPSharedPSAccessObjectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ACAccount *appleAccount; // @synthesize appleAccount;
- (void).cxx_destruct;	// IMP=0x0000000100024388
- (id)_imageTokenForMSAsset:(id)arg1;	// IMP=0x0000000100024234
- (id)_serverSideModel;	// IMP=0x0000000100024168
- (void)_didFinishRetrievingAsset:(id)arg1 inAlbum:(id)arg2 imageData:(id)arg3 error:(id)arg4;	// IMP=0x0000000100023ffc
- (void)_loadImageForImageTokens:(id)arg1;	// IMP=0x0000000100023a50
- (id)_imageTokenForAssetID:(id)arg1;	// IMP=0x0000000100023948
- (id)_imageForAssetID:(id)arg1 canLoad:(_Bool *)arg2;	// IMP=0x0000000100023934
- (void)_tearDown;	// IMP=0x00000001000237a0
- (void)_runSetup;	// IMP=0x00000001000235ac
- (void)pushNotificationServerTokenDidChange:(id)arg1;	// IMP=0x00000001000235a8
- (void)pushNotificationServer:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000001000233f4
- (void)MSASModel:(id)arg1 didFinishCheckingForChangesInfo:(id)arg2 error:(id)arg3;	// IMP=0x0000000100023260
- (void)MSASModel:(id)arg1 didFinishRetrievingAsset:(id)arg2 inAlbum:(id)arg3 error:(id)arg4;	// IMP=0x0000000100022ed0
- (void)MSASModel:(id)arg1 didFinishAcceptingInvitation:(id)arg2 forAlbum:(id)arg3 error:(id)arg4;	// IMP=0x0000000100022c80
- (void)MSASModel:(id)arg1 didFindCommentChange:(id)arg2 inAssetCollection:(id)arg3 inAlbum:(id)arg4;	// IMP=0x0000000100022958
- (void)MSASModel:(id)arg1 didFindNewComments:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;	// IMP=0x000000010002250c
- (void)MSASModel:(id)arg1 didFindDeletedComments:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;	// IMP=0x00000001000220c0
- (void)MSASModel:(id)arg1 didFindLastViewedCommentDate:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4;	// IMP=0x0000000100021de8
- (void)MSASModel:(id)arg1 didMarkAssetCollection:(id)arg2 asHavingUnreadComments:(_Bool)arg3 inAlbum:(id)arg4;	// IMP=0x0000000100021b10
- (void)MSASModel:(id)arg1 didFindDeletedAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;	// IMP=0x0000000100021854
- (void)MSASModel:(id)arg1 didFindNewAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;	// IMP=0x00000001000215d8
- (void)MSASModel:(id)arg1 didMarkAlbum:(id)arg2 asHavingUnreadContent:(_Bool)arg3;	// IMP=0x0000000100021398
- (void)MSASModel:(id)arg1 didFindAccessControlChange:(id)arg2 inAlbum:(id)arg3;	// IMP=0x0000000100021098
- (void)MSASModel:(id)arg1 didFindDeletedAccessControls:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;	// IMP=0x0000000100020c94
- (void)MSASModel:(id)arg1 didFindNewAccessControls:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;	// IMP=0x0000000100020890
- (void)MSASModel:(id)arg1 didFindAlbumMetadataChange:(id)arg2;	// IMP=0x000000010002067c
- (void)MSASModel:(id)arg1 didFindDeletedAlbums:(id)arg2 info:(id)arg3;	// IMP=0x0000000100020318
- (void)MSASModel:(id)arg1 didFindNewAlbums:(id)arg2 info:(id)arg3;	// IMP=0x00000001000200f8
- (void)setLastViewedCommentDate:(id)arg1 forAssetID:(id)arg2;	// IMP=0x000000010001fff0
- (id)lastViewedCommentDateForAssetID:(id)arg1;	// IMP=0x000000010001ff70
- (void)removeCommentForCommentID:(id)arg1;	// IMP=0x000000010001ff04
- (void)addComment:(id)arg1 forAssetID:(id)arg2;	// IMP=0x000000010001fe0c
- (id)captionForAssetID:(id)arg1;	// IMP=0x000000010001fd8c
- (id)commentsForAssetID:(id)arg1;	// IMP=0x000000010001fd0c
- (void)resolveMediaURLForMSAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f6d8
- (_Bool)isAssetUnviewedForAssetID:(id)arg1;	// IMP=0x000000010001f660
- (void)removeAssetForAssetID:(id)arg1;	// IMP=0x000000010001f5f4
- (id)latestAssetForAlbumID:(id)arg1;	// IMP=0x000000010001f4b4
- (id)assetsForAlbumID:(id)arg1;	// IMP=0x000000010001f434
- (id)assetForAssetID:(id)arg1;	// IMP=0x000000010001f3b4
- (unsigned long long)numberOfAssetsForAlbumID:(id)arg1;	// IMP=0x000000010001f2f8
- (void)unsubsribeFromAlbumForAlbumID:(id)arg1;	// IMP=0x000000010001f28c
- (void)rejectInvitationForAlbumID:(id)arg1;	// IMP=0x000000010001f1ac
- (void)acceptInvitationForAlbumID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f0b4
- (void)setAlbumIsViewedForAlbumID:(id)arg1;	// IMP=0x000000010001f048
- (_Bool)isAlbumUnviewedForAlbumID:(id)arg1;	// IMP=0x000000010001efd0
- (id)accessControlsForAlbumID:(id)arg1;	// IMP=0x000000010001ef50
- (id)invitationForAlbumID:(id)arg1;	// IMP=0x000000010001eed0
- (void)removeAlbumForAlbumID:(id)arg1;	// IMP=0x000000010001ee64
- (id)albumForAlbumID:(id)arg1;	// IMP=0x000000010001ede4
- (id)albums;	// IMP=0x000000010001ed90
- (id)albumIDs;	// IMP=0x000000010001ed3c
- (void)tearDown;	// IMP=0x000000010001eccc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
