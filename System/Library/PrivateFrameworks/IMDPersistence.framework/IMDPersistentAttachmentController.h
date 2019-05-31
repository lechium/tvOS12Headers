/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDPersistentAttachmentController : NSObject
+(id)sharedInstance;
-(id)_saveAttachmentForTransfer:(id)arg1 highQuality:(BOOL)arg2 copyWithinAttachmentStore:(BOOL)arg3 ;
-(id)_persistentPathForTransfer:(id)arg1 filename:(id)arg2 highQuality:(BOOL)arg3 ;
-(id)_migrateSiblingAssetsInAttachmentStoreWithOriginalPath:(id)arg1 destinationPath:(id)arg2 withFileManager:(id)arg3 ;
-(void)_removeLegacyAttachmentPathsInAttachmentStoreWithOriginalPath:(id)arg1 withFileManager:(id)arg2 ;
-(BOOL)_canDeleteAttachmentPath:(id)arg1 ;
-(BOOL)_deleteAttachmentForTransfer:(id)arg1 highQuality:(BOOL)arg2 ;
-(void)moveAttachmentsForTransfer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)cleanseOrphanedFileTransfers;
-(void)saveAttachmentsForTransfer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)deleteAttachmentsForTransfer:(id)arg1 ;
-(BOOL)isSafeToDeleteAttachmentPath:(id)arg1 ;
@end
