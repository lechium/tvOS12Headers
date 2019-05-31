/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKFetchShareMetadataOperation : CKOperation {

	BOOL _shouldFetchRootRecord;
	/*^block*/id _perShareMetadataBlock;
	/*^block*/id _fetchShareMetadataCompletionBlock;
	NSArray* _shareURLs;
	NSArray* _rootRecordDesiredKeys;
	NSMutableDictionary* _errorsByURL;
	NSMutableSet* _packagesToDestroy;

}

@property (nonatomic,retain) NSMutableDictionary * errorsByURL;               //@synthesize errorsByURL=_errorsByURL - In the implementation block
@property (nonatomic,retain) NSMutableSet * packagesToDestroy;                //@synthesize packagesToDestroy=_packagesToDestroy - In the implementation block
@property (nonatomic,copy) NSArray * shareURLs;                               //@synthesize shareURLs=_shareURLs - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchRootRecord;                      //@synthesize shouldFetchRootRecord=_shouldFetchRootRecord - In the implementation block
@property (nonatomic,copy) NSArray * rootRecordDesiredKeys;                   //@synthesize rootRecordDesiredKeys=_rootRecordDesiredKeys - In the implementation block
@property (nonatomic,copy) id perShareMetadataBlock;                          //@synthesize perShareMetadataBlock=_perShareMetadataBlock - In the implementation block
@property (nonatomic,copy) id fetchShareMetadataCompletionBlock;              //@synthesize fetchShareMetadataCompletionBlock=_fetchShareMetadataCompletionBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)initWithShareURLs:(id)arg1 ;
-(void)setPerShareMetadataBlock:(id)arg1 ;
-(void)setFetchShareMetadataCompletionBlock:(id)arg1 ;
-(NSArray *)shareURLs;
-(void)setShareURLs:(NSArray *)arg1 ;
-(id)perShareMetadataBlock;
-(id)fetchShareMetadataCompletionBlock;
-(NSMutableSet *)packagesToDestroy;
-(BOOL)claimPackagesInRecord:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)errorsByURL;
-(void)setErrorsByURL:(NSMutableDictionary *)arg1 ;
-(void)setPackagesToDestroy:(NSMutableSet *)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)rootRecordDesiredKeys;
-(BOOL)shouldFetchRootRecord;
-(void)setShouldFetchRootRecord:(BOOL)arg1 ;
-(void)setRootRecordDesiredKeys:(NSArray *)arg1 ;
-(id)init;
@end

