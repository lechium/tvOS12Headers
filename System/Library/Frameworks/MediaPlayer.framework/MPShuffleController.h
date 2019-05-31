/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MPShuffleControllerDataSource;
@class NSMutableIndexSet, NSMapTable, MPSparseArray, NSMutableArray;

@interface MPShuffleController : NSObject <NSSecureCoding> {

	NSMutableIndexSet* _availableShuffleIndexSet;
	BOOL _isPendingFineGrainedInvalidation;
	BOOL _isPendingGlobalInvalidation;
	unsigned long long _itemCount;
	NSMapTable* _itemIdentifierToKnownCount;
	MPSparseArray* _originalIndexToItemIdentifier;
	MPSparseArray* _originalIndexToShuffledIndex;
	NSMutableArray* _pendingInvalidationRemovedIdentifiers;
	id<MPShuffleControllerDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<MPShuffleControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)shuffle;
-(void)_commitPendingInvalidations;
-(void)_replaceItemIdentifierAtOriginalIndex:(unsigned long long)arg1 withItemIdentifier:(id)arg2 ;
-(void)_loadItemCountIfPendingInvalidation;
-(void)_clearPendingInvalidationInformation;
-(void)_removeAllItemIdentifiers;
-(unsigned long long)_generateShuffleIndexFromAvailableIndexSet;
-(void)_removeItemIdentifierAtOriginalIndex:(unsigned long long)arg1 ;
-(void)_loadItemCount;
-(void)invalidateWithRemovedIdentifiers:(id)arg1 ;
-(unsigned long long)itemIndexForShuffledIndex:(unsigned long long)arg1 ;
-(void)shuffleWithStartingIndex:(unsigned long long)arg1 ;
-(unsigned long long)shuffledIndexForItemIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(id<MPShuffleControllerDataSource>)dataSource;
-(void)setDataSource:(id<MPShuffleControllerDataSource>)arg1 ;
@end

