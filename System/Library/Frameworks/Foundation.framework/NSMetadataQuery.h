/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPredicate, NSArray, NSOperationQueue, NSDictionary;

@interface NSMetadataQuery : NSObject {

	unsigned long long _flags;
	double _interval;
	id _private[11];
	void* _reserved;

}

@property (assign) id<NSMetadataQueryDelegate> delegate; 
@property (copy) NSPredicate * predicate; 
@property (copy) NSArray * sortDescriptors; 
@property (copy) NSArray * valueListAttributes; 
@property (copy) NSArray * groupingAttributes; 
@property (assign) double notificationBatchingInterval; 
@property (copy) NSArray * searchScopes; 
@property (copy) NSArray * searchItems; 
@property (retain) NSOperationQueue * operationQueue; 
@property (getter=isStarted,readonly) BOOL started; 
@property (getter=isGathering,readonly) BOOL gathering; 
@property (getter=isStopped,readonly) BOOL stopped; 
@property (readonly) unsigned long long resultCount; 
@property (copy,readonly) NSArray * results; 
@property (copy,readonly) NSDictionary * valueLists; 
@property (copy,readonly) NSArray * groupedResults; 
+(void)didEndPossibleFileOperation:(id)arg1 ;
+(Class)_stitchingClass;
+(id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2 ;
+(id)willBeginPossibleDeletionOfItemAtURL:(id)arg1 ;
+(id)willBeginPossibleCreationOfItemAtURL:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)_canModifyQueryOrObserversInCurrentContext;
-(void)_validateInvocationContext;
-(void)_validatePredicate:(id)arg1 withScopes:(id)arg2 ;
-(void)_recreateQuery;
-(NSArray *)valueListAttributes;
-(NSArray *)groupingAttributes;
-(id)_sortingAttributes;
-(void)_setBatchingParams;
-(NSArray *)searchItems;
-(void)setSearchItems:(NSArray *)arg1 ;
-(id)_externalDocumentsBundleIdentifier;
-(void)_postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)_disableAutoUpdates;
-(void)_resetQueryState;
-(void)_noteNote1:(id)arg1 ;
-(void)_noteNote2:(id)arg1 ;
-(void)_noteNote3:(id)arg1 ;
-(void)_noteNote4:(id)arg1 ;
-(void)_inOriginalContextInvokeBlock:(/*^block*/id)arg1 ;
-(void)_noteNote5:(id)arg1 ;
-(void)enumerateResultsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)disableUpdates;
-(void)enableUpdates;
-(void)_enableAutoUpdates;
-(id)valueOfAttribute:(id)arg1 forResultAtIndex:(unsigned long long)arg2 ;
-(id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(BOOL)arg2 ;
-(void)setValueListAttributes:(NSArray *)arg1 ;
-(void)setGroupingAttributes:(NSArray *)arg1 ;
-(id)_allAttributes;
-(double)notificationBatchingInterval;
-(void)setNotificationBatchingInterval:(double)arg1 ;
-(NSArray *)searchScopes;
-(void)setSearchScopes:(NSArray *)arg1 ;
-(id)searchItemURLs;
-(void)setSearchItemURLs:(id)arg1 ;
-(void)_setExternalDocumentsBundleIdentifier:(id)arg1 ;
-(id)_queryString;
-(BOOL)startQuery;
-(void)stopQuery;
-(BOOL)isGathering;
-(BOOL)isStopped;
-(void)enumerateResultsUsingBlock:(/*^block*/id)arg1 ;
-(void)_zapResultArrayIfIdenticalTo:(id)arg1 ;
-(unsigned long long)indexOfResult:(id)arg1 ;
-(NSDictionary *)valueLists;
-(NSArray *)groupedResults;
-(BOOL)_isMDQuery;
-(id)resultAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)resultCount;
-(BOOL)isStarted;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<NSMetadataQueryDelegate>)arg1 ;
-(id<NSMetadataQueryDelegate>)delegate;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_update;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)results;
@end

