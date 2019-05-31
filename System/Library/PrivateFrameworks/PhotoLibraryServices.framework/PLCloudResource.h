/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLCloudResource.h>

@class NSString, NSDate, CPLScopedIdentifier, PLManagedAsset, PLCloudMaster, NSManagedObjectID;

@interface PLCloudResource : PLManagedObject <PLCloudResource>

@property (nonatomic,retain) NSString * assetUuid; 
@property (nonatomic,retain) NSDate * dateCreated; 
@property (nonatomic,retain) NSString * filePath; 
@property (assign,nonatomic) unsigned long long fileSize; 
@property (nonatomic,retain) NSString * fingerprint; 
@property (assign,nonatomic) long long height; 
@property (assign,nonatomic) BOOL isAvailable; 
@property (assign,nonatomic) BOOL isLocallyAvailable; 
@property (assign,nonatomic) short cloudLocalState; 
@property (nonatomic,retain) NSString * itemIdentifier; 
@property (nonatomic,retain,readonly) CPLScopedIdentifier * scopedIdentifier; 
@property (nonatomic,retain) NSDate * lastOnDemandDownloadDate; 
@property (nonatomic,retain) NSDate * lastPrefetchDate; 
@property (assign,nonatomic) short prefetchCount; 
@property (nonatomic,retain) NSDate * prunedAt; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) int sourceType; 
@property (nonatomic,retain) NSString * uniformTypeIdentifier; 
@property (assign,nonatomic) long long width; 
@property (nonatomic,retain) PLManagedAsset * asset; 
@property (nonatomic,retain) PLCloudMaster * cloudMaster; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) unsigned long long cplType; 
@property (nonatomic,readonly) unsigned long long sourceCplType; 
@property (nonatomic,retain,readonly) NSString * utiString; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(void)resetCloudResourcesStateForCloudInManagedObjectContext:(id)arg1 hardReset:(BOOL)arg2 ;
+(void)resetPrefetchStateForResourcesWithResourceType:(long long)arg1 itemIdentifiers:(id)arg2 inLibrary:(id)arg3 ;
+(id)nonLocalResourcesInManagedObjectContext:(id)arg1 forAssetUUIDs:(id)arg2 cplResourceTypes:(id)arg3 ;
+(unsigned long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1 ;
+(BOOL)_countOfLocalCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 forMediumSized:(BOOL)arg3 localCount:(unsigned long long*)arg4 unavailableCount:(unsigned long long*)arg5 error:(id*)arg6 ;
+(id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 withCPLResource:(id)arg3 adjusted:(BOOL)arg4 withCreationDate:(id)arg5 ;
+(id)duplicateCloudResource:(id)arg1 forAsset:(id)arg2 withFilePath:(id)arg3 inManagedObjectContext:(id)arg4 ;
+(BOOL)countOfMediumOriginalLocalCloudResourcesInManagedObjectContext:(id)arg1 localCount:(unsigned long long*)arg2 unavailableCount:(unsigned long long*)arg3 error:(id*)arg4 ;
+(BOOL)countOfLocalCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 localCount:(unsigned long long*)arg3 unavailableCount:(unsigned long long*)arg4 error:(id*)arg5 ;
+(id)entityName;
-(CPLScopedIdentifier *)scopedIdentifier;
-(void)markAsNotLocallyAvailable;
-(unsigned long long)cplType;
-(void)setPrefetchCount:(short)arg1 ;
-(void)setLastPrefetchDate:(NSDate *)arg1 ;
-(void)setPrunedAt:(NSDate *)arg1 ;
-(void)markAsLocallyAvailableWithFilePath:(id)arg1 ;
-(void)prepareForDeletion;
-(id)cplResourceIncludeFile:(BOOL)arg1 ;
-(unsigned long long)sourceCplType;
-(NSString *)utiString;
-(void)setIsLocallyAvailable:(BOOL)arg1 ;
-(void)applyPropertiesFromCloudResource:(id)arg1 ;
-(void)_duplicatePropertiesFromCloudResource:(id)arg1 withFilePath:(id)arg2 forAssetUuid:(id)arg3 ;
-(void)createSidecarFileForMasterAssetIfNeeded:(id)arg1 ;
-(NSString *)description;
@end
