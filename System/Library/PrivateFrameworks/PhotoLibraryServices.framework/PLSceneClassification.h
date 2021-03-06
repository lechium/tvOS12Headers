/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLAdditionalAssetAttributes;

@interface PLSceneClassification : PLManagedObject

@property (assign,nonatomic) unsigned sceneIdentifier; 
@property (assign,nonatomic) double confidence; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertIntoPhotoLibrary:(id)arg1 assetUUID:(id)arg2 sceneIdentifier:(int)arg3 confidence:(double)arg4 ;
+(void)batchFetchScenesByAssetUUIDWithAssetUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)entityName;
-(id)debugLogDescription;
@end

