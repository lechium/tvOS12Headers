/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@class PHFetchResult, NSArray, NSIndexSet;

@interface PHFetchResultChangeDetails : NSObject {

	PHFetchResult* _fetchResultBeforeChanges;
	PHFetchResult* _fetchResultAfterChanges;
	NSArray* _previousItems;
	NSArray* _currentItems;
	NSIndexSet* _removedIndexes;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _movedIndexes;
	CFArrayRef _movedFromIndexes;
	NSArray* _changedItems;
	NSIndexSet* _changedIndexes;
	BOOL _skipIncrementalChanges;

}

@property (nonatomic,readonly) NSIndexSet * movedIndexes; 
@property (nonatomic,readonly) const CFArrayRef movedFromIndexes; 
@property (readonly) PHFetchResult * fetchResultBeforeChanges; 
@property (readonly) PHFetchResult * fetchResultAfterChanges; 
@property (readonly) BOOL hasIncrementalChanges; 
@property (readonly) NSIndexSet * removedIndexes; 
@property (readonly) NSArray * removedObjects; 
@property (readonly) NSIndexSet * insertedIndexes; 
@property (readonly) NSArray * insertedObjects; 
@property (readonly) NSIndexSet * changedIndexes; 
@property (readonly) NSArray * changedObjects; 
@property (readonly) BOOL hasMoves; 
+(id)_identifiersForPHObjects:(id)arg1 ;
+(id)changeDetailsFromFetchResult:(id)arg1 toFetchResult:(id)arg2 changedObjects:(id)arg3 ;
-(void)enumerateMovesWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)snapshotIndexForContainedObject:(id)arg1 ;
-(id)initWithManualFetchResultAfterChanges:(id)arg1 ;
-(void)calculateDiffs;
-(id)initWithFetchResult:(id)arg1 currentFetchResult:(id)arg2 changedItems:(id)arg3 unknownMergeEvent:(BOOL)arg4 ;
-(id)currentItems;
-(NSIndexSet *)removedIndexes;
-(PHFetchResult *)fetchResultAfterChanges;
-(NSArray *)insertedObjects;
-(NSArray *)changedObjects;
-(NSIndexSet *)changedIndexes;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)movedIndexes;
-(const CFArrayRef)movedFromIndexes;
-(BOOL)hasIncrementalChanges;
-(BOOL)hasMoves;
-(PHFetchResult *)fetchResultBeforeChanges;
-(BOOL)shouldReload;
-(BOOL)hasDiffs;
-(void)dealloc;
-(id)description;
-(NSArray *)removedObjects;
@end
