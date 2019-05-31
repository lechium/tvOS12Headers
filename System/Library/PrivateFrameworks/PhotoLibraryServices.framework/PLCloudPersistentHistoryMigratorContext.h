/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLCloudPersistentHistoryMigratorContext
@required
-(void)updateTransferCountsWithInsertedPhotoCount:(unsigned long long)arg1 insertedVideoCount:(unsigned long long)arg2;
-(void)saveTokenObject:(id)arg1;
-(id)readMigrationMarker;
-(void)setMigrationMarker:(id)arg1;
-(void)setMigratedLocalVersion:(id)arg1;
-(void)setLocalVersion:(id)arg1;
-(id)readLocalVersion;
-(void)resetSyncDueToMigrationMarker;

@end

