/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSDictionary, NSOperation, NSMutableDictionary;

@interface CKDPublishAssetsOperation : CKDDatabaseOperation {

	/*^block*/id _assetPublishedBlock;
	NSArray* _recordIDs;
	NSDictionary* _fileNamesByAssetFieldNames;
	unsigned long long _requestedTTL;
	unsigned long long _URLOptions;
	NSOperation* _fetchRecordsOperation;
	NSMutableDictionary* _fetchedRecordsByID;

}

@property (nonatomic,retain) NSArray * recordIDs;                                    //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * fileNamesByAssetFieldNames;              //@synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames - In the implementation block
@property (assign,nonatomic) unsigned long long requestedTTL;                        //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned long long URLOptions;                          //@synthesize URLOptions=_URLOptions - In the implementation block
@property (retain) NSOperation * fetchRecordsOperation;                              //@synthesize fetchRecordsOperation=_fetchRecordsOperation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fetchedRecordsByID;               //@synthesize fetchedRecordsByID=_fetchedRecordsByID - In the implementation block
@property (nonatomic,copy) id assetPublishedBlock;                                   //@synthesize assetPublishedBlock=_assetPublishedBlock - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setAssetPublishedBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)makeStateTransition;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)_fetchRecords;
-(NSArray *)recordIDs;
-(NSDictionary *)fileNamesByAssetFieldNames;
-(unsigned long long)requestedTTL;
-(unsigned long long)URLOptions;
-(void)_fetchPCSForRecords;
-(id)assetPublishedBlock;
-(id)_expandTemplateURL:(id)arg1 fieldValues:(id)arg2 ;
-(NSMutableDictionary *)fetchedRecordsByID;
-(void)_dispatchAssetURLsForRecord:(id)arg1 recordID:(id)arg2 pcs:(OpaquePCSShareProtectionRef)arg3 error:(id)arg4 ;
-(void)setRequestedTTL:(unsigned long long)arg1 ;
-(void)setURLOptions:(unsigned long long)arg1 ;
-(void)setFetchRecordsOperation:(NSOperation *)arg1 ;
-(NSOperation *)fetchRecordsOperation;
-(void)setFileNamesByAssetFieldNames:(NSDictionary *)arg1 ;
-(void)setFetchedRecordsByID:(NSMutableDictionary *)arg1 ;
-(void)cancel;
-(void)main;
@end

