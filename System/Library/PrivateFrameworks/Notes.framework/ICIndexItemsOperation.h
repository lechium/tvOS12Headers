/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class CSSearchableIndex, NSArray, NSError;

@interface ICIndexItemsOperation : NSOperation {

	CSSearchableIndex* _searchableIndex;
	NSArray* _dataSources;
	unsigned long long _maxBytesPerBatch;
	NSError* _error;

}

@property (nonatomic,retain) CSSearchableIndex * searchableIndex;              //@synthesize searchableIndex=_searchableIndex - In the implementation block
@property (nonatomic,copy) NSArray * dataSources;                              //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long maxBytesPerBatch;              //@synthesize maxBytesPerBatch=_maxBytesPerBatch - In the implementation block
-(void)deleteAllItems;
-(BOOL)shouldDeleteAllItemsBeforeIndexing;
-(id)objectIDsToIndexFromDataSource:(id)arg1 ;
-(id)searchableItemIdentifiersToDeleteFromDataSource:(id)arg1 ;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 ;
-(void)setMaxBytesPerBatch:(unsigned long long)arg1 ;
-(void)indexItems;
-(unsigned long long)maxBytesPerBatch;
-(CSSearchableIndex *)searchableIndex;
-(void)setSearchableIndex:(CSSearchableIndex *)arg1 ;
-(NSArray *)dataSources;
-(void)setDataSources:(NSArray *)arg1 ;
-(id)init;
-(void)main;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)deleteItems;
@end

