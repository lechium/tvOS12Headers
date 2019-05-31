/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSOperationQueue, NSRecursiveLock, NSMutableArray;

@interface MBAssetLoader : NSObject {

	unsigned long long _maxConcurrentOperationCount;
	NSArray* _prefetchKeys;
	NSOperationQueue* _operationQueue;
	NSRecursiveLock* _queuedOperationsLock;
	NSMutableArray* _queuedOperations;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                   //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * queuedOperationsLock;              //@synthesize queuedOperationsLock=_queuedOperationsLock - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedOperations;                   //@synthesize queuedOperations=_queuedOperations - In the implementation block
@property (assign) unsigned long long maxConcurrentOperationCount;                //@synthesize maxConcurrentOperationCount=_maxConcurrentOperationCount - In the implementation block
@property (nonatomic,retain) NSArray * prefetchKeys;                              //@synthesize prefetchKeys=_prefetchKeys - In the implementation block
+(id)sharedLoader;
-(unsigned long long)maxConcurrentOperationCount;
-(void)loadAssetsFromURLs:(id)arg1 withResultHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setQueuedOperationsLock:(NSRecursiveLock *)arg1 ;
-(void)setQueuedOperations:(NSMutableArray *)arg1 ;
-(void)setPrefetchKeys:(NSArray *)arg1 ;
-(void)suspendOperationQueue:(id)arg1 ;
-(void)resumeOperationQueue:(id)arg1 ;
-(void)_loadAssetsFromURLs:(id)arg1 withResultHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)prefetchKeys;
-(NSRecursiveLock *)queuedOperationsLock;
-(NSMutableArray *)queuedOperations;
-(id)init;
-(void)setMaxConcurrentOperationCount:(unsigned long long)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
@end

