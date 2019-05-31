/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHFetchResult.h>

@class PHFetchOptions, NSArray, NSOrderedSet, NSString;

@interface PHUnauthorizedFetchResult : PHFetchResult {

	/*^block*/id _fetchBlock;
	PHFetchOptions* _options;
	NSArray* _objects;
	NSOrderedSet* _objectIDs;
	NSString* _identifier;

}

@property (readonly) id fetchBlock;                              //@synthesize fetchBlock=_fetchBlock - In the implementation block
@property (copy,readonly) PHFetchOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) NSArray * objects;                          //@synthesize objects=_objects - In the implementation block
@property (readonly) NSOrderedSet * objectIDs;                   //@synthesize objectIDs=_objectIDs - In the implementation block
@property (readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
-(id)fetchRequest;
-(NSOrderedSet *)objectIDs;
-(id)containerIdentifier;
-(unsigned long long)possibleChangesForChange:(id)arg1 ;
-(id)changeHandlingKey;
-(id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3 ;
-(id)initWithOptions:(id)arg1 fetchBlock:(/*^block*/id)arg2 ;
-(long long)collectionFetchType;
-(id)fetchResultWithChangeHandlingValue:(id)arg1 ;
-(void)updateRegistrationForChangeNotificationDeltas;
-(void)getMediaTypeCounts;
-(BOOL)isFullyBackedByObjectIDs;
-(id)photoLibrary;
-(NSArray *)objects;
-(id)fetchedObjectIDs;
-(id)fetchedObjects;
-(void)prefetchObjectsAtIndexes:(id)arg1 ;
-(id)copyWithOptions:(id)arg1 ;
-(id)objectIDAtIndex:(unsigned long long)arg1 ;
-(id)fetchBlock;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(PHFetchOptions *)options;
@end

