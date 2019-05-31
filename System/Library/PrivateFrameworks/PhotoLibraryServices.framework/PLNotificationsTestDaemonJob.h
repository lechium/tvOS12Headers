/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, NSArray, PLPhotoLibrary;

@interface PLNotificationsTestDaemonJob : PLDaemonJob {

	long long _notificationType;
	NSString* _albumUUID;
	NSArray* _addedAssetUUIDs;
	PLPhotoLibrary* _photoLibrary;

}

@property (assign) long long notificationType;                           //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,retain) NSString * albumUUID;                       //@synthesize albumUUID=_albumUUID - In the implementation block
@property (nonatomic,retain) NSArray * addedAssetUUIDs;                  //@synthesize addedAssetUUIDs=_addedAssetUUIDs - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
+(void)notifyInvitationWasReceivedForAlbum:(id)arg1 ;
+(void)notifyAssets:(id)arg1 wereAddedToAlbum:(id)arg2 ;
+(void)notifyLikeWasReceivedForAssets:(id)arg1 ;
+(void)notifyCommentWasReceivedForAssets:(id)arg1 ;
-(void)runDaemonSide;
-(void)setAlbumUUID:(NSString *)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(long long)daemonOperation;
-(long long)notificationType;
-(NSString *)albumUUID;
-(NSArray *)addedAssetUUIDs;
-(void)setNotificationType:(long long)arg1 ;
-(void)setAddedAssetUUIDs:(NSArray *)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)dealloc;
-(void)run;
@end

