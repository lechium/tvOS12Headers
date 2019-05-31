/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLGenericAlbum.h>
#import <libobjc.A.dylib/PLAlbumContainer.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>

@class NSOrderedSet, NSString;

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer, PLCloudDeletable> {

	BOOL _needsPersistenceUpdate;
	BOOL _needsFixedOrderKeysComplianceUpdate;

}

@property (assign,nonatomic) BOOL needsPersistenceUpdate;                           //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (assign,nonatomic) BOOL needsFixedOrderKeysComplianceUpdate;              //@synthesize needsFixedOrderKeysComplianceUpdate=_needsFixedOrderKeysComplianceUpdate - In the implementation block
@property (nonatomic,retain) NSOrderedSet * childCollections; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) int filter; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)cloudUUIDKeyForDeletion;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)validKindsForPersistence;
+(id)childKeyForOrdering;
+(id)localizedRecoveredTitle;
+(id)entityName;
-(unsigned long long)photosCount;
-(long long)cloudDeletionType;
-(id)albums;
-(id)mutableAssets;
-(void)prepareForDeletion;
-(void)persistMetadataToFileSystem;
-(void)willSave;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(void)didSave;
-(BOOL)needsPersistenceUpdate;
-(void)removePersistedFileSystemData;
-(NSString *)cloudUUIDForDeletion;
-(BOOL)isValidKindForPersistence;
-(unsigned long long)albumsCount;
-(id)childKeyForOrdering;
-(NSString *)_prettyDescription;
-(void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)insertObject:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2 ;
-(short)albumListType;
-(id)containers;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(NSString *)_typeDescription;
-(BOOL)hasAtLeastOneAlbum;
-(id)albumsSortingComparator;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(BOOL)albumHasFixedOrder:(NSObject*)arg1 ;
-(void)setNeedsReordering;
-(BOOL)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(void)addChildCollections:(id)arg1 ;
-(void)setNeedsFixedOrderKeysComplianceUpdate:(BOOL)arg1 ;
-(BOOL)needsFixedOrderKeysComplianceUpdate;
-(void)enforceFixedOrderKeyCompliance;
-(void)removeChildCollectionsAtIndexes:(id)arg1 ;
-(void)insertChildCollections:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeObjectFromChildCollectionsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInChildCollectionsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2 ;
-(void)addChildCollectionsObject:(id)arg1 ;
-(void)removeChildCollectionsObject:(id)arg1 ;
-(void)removeChildCollections:(id)arg1 ;
-(void)refreshCollections;
-(id)descriptionOfChildCollectionOrderValues;
-(id)assets;
-(unsigned long long)assetsCount;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(unsigned long long)approximateCount;
-(unsigned long long)videosCount;
-(unsigned long long)unreadAlbumsCount;
-(BOOL)canEditAlbums;
-(id)identifier;
-(unsigned long long)count;
-(int)filter;
-(BOOL)isEmpty;
@end

