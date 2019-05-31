/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLCore, NSSQLModel, NSSQLiteAdapter, NSMappingModel, NSSQLiteConnection, NSArray, NSMutableDictionary, NSMutableArray;

@interface _NSSQLiteStoreMigrator : NSObject {

	NSSQLCore* _store;
	NSSQLModel* _dstModel;
	NSSQLModel* _srcModel;
	NSSQLiteAdapter* _adapter;
	NSMappingModel* _mappingModel;
	NSSQLiteConnection* _connection;
	NSArray* _tableGenerationSQL;
	NSArray* _existingTableNames;
	NSMutableDictionary* _reindexedEntities;
	NSMutableDictionary* _reindexedPropertiesByEntity;
	NSMutableDictionary* _sourceToDestinationEntityMap;
	NSMutableDictionary* _addedEntityMigrations;
	NSMutableDictionary* _removedEntityMigrations;
	NSMutableDictionary* _transformedEntityMigrations;
	NSMutableDictionary* _copiedEntityMigrations;
	NSMutableDictionary* _tableMigrationDescriptionsByEntity;
	BOOL _hasPKTableChanges;
	NSMutableArray* _pkTableUpdateStatements;
	NSMutableDictionary* _attributeExtensionsToUpdate;
	NSMutableArray* _indexesToCreate;
	NSMutableArray* _indexesToDrop;
	NSMutableDictionary* _historyMigrationPropertyDataForEntityCache;

}

@property (nonatomic,readonly) NSSQLiteAdapter * adapter;                              //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,readonly) NSSQLModel * dstModel;                                  //@synthesize dstModel=_dstModel - In the implementation block
@property (nonatomic,readonly) NSSQLModel * srcModel;                                  //@synthesize srcModel=_srcModel - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * historyMigrationCache;              //@synthesize historyMigrationPropertyDataForEntityCache=_historyMigrationPropertyDataForEntityCache - In the implementation block
+(BOOL)_annotatesMigrationMetadata;
+(void)_setAnnotatesMigrationMetadata:(BOOL)arg1 ;
-(NSSQLiteAdapter *)adapter;
-(NSMutableDictionary *)historyMigrationCache;
-(NSSQLModel *)srcModel;
-(NSSQLModel *)dstModel;
-(id)initWithStore:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3 ;
-(BOOL)performMigration:(id*)arg1 ;
-(id)entityMigrationDescriptionForEntity:(id)arg1 ;
-(id)tableMigrationDescriptionForEntity:(id)arg1 ;
-(id)_originalRootsForAddedEntity:(id)arg1 ;
-(id)createEntityMigrationStatements;
-(id)createStatementsForUpdatingEntityKeys;
-(void)generatePKTableUpdateStatements;
-(BOOL)deleteStatementsForHistory;
-(id)updateStatementsForHistoryChanges;
-(BOOL)validateMigratedDataFromEntityMapping:(id)arg1 error:(id*)arg2 ;
-(long long)_countNullsInColumn:(id)arg1 forEntity:(id)arg2 ;
-(long long)_countUnreferencedPrimaryKeysForEntity:(id)arg1 inForeignKeyColumnName:(id)arg2 fromTable:(id)arg3 ;
-(BOOL)validateMandatoryAttribute:(id)arg1 onEntity:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateMandatoryRelationship:(id)arg1 onEntity:(id)arg2 error:(id*)arg3 ;
-(void)_populateTableMigrationDescriptions;
-(void)_determinePropertyDependenciesOnIDForEntity:(id)arg1 ;
-(void)_determineAttributeTriggerToMigrateForAttributeNamed:(id)arg1 withSourceEntity:(id)arg2 andDestinationEntity:(id)arg3 ;
-(void)_determineRTreeExtensionsToMigrateForAttributeNamed:(id)arg1 withSourceEntity:(id)arg2 andDestinationEntity:(id)arg3 ;
-(void)_determineIndexesToMigrateForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2 ;
-(void)_determineUniquenessConstraintsToMigrateForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2 ;
-(/*^block*/id)_indexMigrationBlockForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2 ;
-(BOOL)_sourceTableIsClean:(id)arg1 ;
-(void)_determineReindexedEntitiesAndAffectedProperties;
-(void)_populateEntityMigrationDescriptionsAndEntityMap;
-(void)_determineAncillaryModelIndexesForMigration;
-(void)_addEntityMigration:(id)arg1 toTableMigrationForRootEntity:(id)arg2 tableMigrationType:(int)arg3 ;
-(BOOL)shiftTombstones;
-(BOOL)clearTombstoneColumnsForRange:(NSRange)arg1 ;
-(void)_addReindexedProperty:(id)arg1 toSetForEntity:(id)arg2 ;
-(void)setHistoryMigrationCache:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)_disconnect;
@end

