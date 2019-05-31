/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3Entity.h>

@class ML3Predicate, NSString, NSArray;

@interface ML3Container : ML3Entity

@property (readonly) ML3Predicate * smartCriteriaPredicate; 
@property (getter=isLimitedByCount,readonly) BOOL limitedByCount; 
@property (getter=isLimitOrderingDescending,readonly) BOOL limitOrderingDescending; 
@property (copy,readonly) NSString * limitingProperty; 
@property (copy,readonly) NSArray * limitOrderingTerms; 
@property (readonly) long long limitValue; 
@property (copy,readonly) NSArray * cloudDisplayOrderingTerms; 
@property (copy,readonly) NSArray * displayOrderingTerms; 
+(id)databaseTable;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(id)persistentIDColumnForTable:(id)arg1 ;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)foreignColumnForProperty:(id)arg1 ;
+(BOOL)libraryContentsChangeForProperty:(id)arg1 ;
+(BOOL)libraryDynamicChangeForProperty:(id)arg1 ;
+(id)extraTablesToDelete;
+(id)defaultFilterPredicates;
+(id)sectionPropertyForProperty:(id)arg1 ;
+(void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 ;
+(void)populateMediaTypesOfStaticContainersInLibrary:(id)arg1 ;
+(BOOL)hasCriterionInCriteriaList:(SearchCriteriaListRef)arg1 forITDBTrackField:(int)arg2 ;
+(id)nextFilepathForPlaylistType:(int)arg1 withPersistentID:(unsigned long long)arg2 inLibrary:(id)arg3 ;
+(id)predicateForCriteriaList:(SearchCriteriaListRef)arg1 parentMatchedAny:(BOOL)arg2 ;
+(void)_updateContainedMediaTypeInContainerWithPersistentID:(long long)arg1 connection:(id)arg2 itemUpdateBlock:(/*^block*/id)arg3 ;
+(void)reloadContainedMediaTypesForContainerWithPersistID:(long long)arg1 usingConnection:(id)arg2 ;
+(id)_mediaTypesForTracksWithPersistentIDs:(id)arg1 usingConnection:(id)arg2 ;
+(id)_allStaticItemContainersInLibrary:(id)arg1 usingConnection:(id)arg2 ;
+(void)removeNonLibraryItemsFromContainer:(id)arg1 usingConnection:(id)arg2 ;
+(void)_clearContainerMediaTypeInContainerWithPersistentID:(long long)arg1 connection:(id)arg2 ;
+(id)_mediaTypesForTracksInContainerWithPersistentID:(long long)arg1 connection:(id)arg2 ;
+(void)_addMediaTypesToContainerWithPersistentID:(long long)arg1 mediaTypes:(id)arg2 connection:(id)arg3 ;
+(void)_removeMediaTypesFromContainerWithPersistentID:(long long)arg1 mediaTypes:(id)arg2 connection:(id)arg3 ;
+(BOOL)smartCriteriaCanBeEvaluated:(id)arg1 ;
+(BOOL)updateBuiltInSmartPlaylistNamesForCurrentLanguage:(id)arg1 ;
+(id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1 ;
+(void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1 inLibrary:(id)arg2 ;
+(void)removeAnyNonLibraryItemsInPersistentIDs:(id)arg1 fromContainersInLibrary:(id)arg2 usingConnection:(id)arg3 ;
+(void)removeNonLibraryItemsFromContainersInLibrary:(id)arg1 usingConnection:(id)arg2 ;
+(void)_insertNewSmartPlaylist:(id)arg1 criteriaBlob:(id)arg2 evaluationOrder:(unsigned)arg3 limited:(BOOL)arg4 trackOrder:(unsigned)arg5 distinguishedKind:(int)arg6 inLibrary:(id)arg7 cachedNameOrders:(id)arg8 ;
+(int)protocolSortTypeFromTrackOrder:(unsigned)arg1 ;
+(unsigned)trackOrderFromProtocolSortType:(int)arg1 ;
+(BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 ;
+(long long)revisionTrackingCode;
+(id)defaultOrderingTerms;
+(void)initialize;
-(id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4 ;
-(void)_setContainerSeedItemPersistentIDValue:(id)arg1 ;
-(SearchCriteriaListRef)importedCriteriaList;
-(BOOL)isEvaluationOrderingDescending;
-(BOOL)isLimitOrderingDescending;
-(NSArray *)limitOrderingTerms;
-(id)evaluationOrderingTerms;
-(BOOL)_setItemPersistentIDs:(id)arg1 reloadContainedMediaTypes:(BOOL)arg2 removedMediaTypes:(id)arg3 addedMediaTypes:(id)arg4 notify:(BOOL)arg5 incrementEntityRevision:(BOOL)arg6 usingConnection:(id)arg7 ;
-(BOOL)_supportsOrderedTrackOperations;
-(long long)_maxPositionForTracksUsingConnection:(id)arg1 ;
-(BOOL)_reloadContainedMediaTypes:(BOOL)arg1 removedMediaTypes:(id)arg2 addedMediaTypes:(id)arg3 notify:(BOOL)arg4 incrementEntityRevision:(BOOL)arg5 usingConnection:(id)arg6 ;
-(BOOL)_removeTracksAtIndexes:(id)arg1 notify:(BOOL)arg2 usingConnection:(id)arg3 ;
-(ML3Predicate *)smartCriteriaPredicate;
-(BOOL)isLimitedByCount;
-(NSString *)limitingProperty;
-(long long)limitValue;
-(NSArray *)cloudDisplayOrderingTerms;
-(NSArray *)displayOrderingTerms;
-(id)trackPersistentIds;
-(id)childPlaylistPersistentIds;
-(BOOL)isBuiltInSmartPlaylist;
-(id)protocolItem;
-(id)_criteriaListDescription:(SearchCriteriaListRef)arg1 level:(long long)arg2 ;
-(id)_stringForCriterionMatchKey:(SCD_Struct_ML10*)arg1 ;
-(id)_stringForCriterionMatchType:(SCD_Struct_ML10*)arg1 ;
-(id)_stringForCriterionBuffer:(SCD_Struct_ML10*)arg1 ;
-(id)_addUnitesForCriterionInfo:(SCD_Struct_ML10*)arg1 ;
-(id)_booleanStringForCriteriaInfo:(SCD_Struct_ML10*)arg1 ;
-(id)_stringForTrackFieldMediaKind:(long long)arg1 ;
-(id)_stringForTrackFieldCloudStatus:(long long)arg1 ;
-(id)_convertNumericValueFromCriterionMatchKey:(unsigned)arg1 criteriaValue:(long long)arg2 ;
-(id)_formatTime:(long long)arg1 ;
-(id)_stringStringForCriteriaInfo:(SCD_Struct_ML10*)arg1 ;
-(id)_numericStringForCriteriaInfo:(SCD_Struct_ML10*)arg1 ;
-(id)_nonzeroStringForCriteriaInfo:(SCD_Struct_ML10*)arg1 ;
-(id)_dateStringForCriteriaInfo:(SCD_Struct_ML10*)arg1 ;
-(id)criteriaListDescription;
-(void)setValues:(id)arg1 forProperties:(id)arg2 async:(BOOL)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(id)multiverseIdentifier;
-(BOOL)setTracksWithPersistentIDs:(id)arg1 notify:(BOOL)arg2 ;
-(BOOL)appendTracksWithPersistentIDs:(id)arg1 notify:(BOOL)arg2 ;
-(BOOL)removeTracksAtIndexes:(id)arg1 notify:(BOOL)arg2 ;
-(BOOL)removeAllTracks;
-(BOOL)removeFirstTrack;
-(BOOL)moveTrackFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
@end

