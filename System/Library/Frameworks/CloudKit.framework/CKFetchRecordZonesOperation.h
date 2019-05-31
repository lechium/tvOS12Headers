/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSError;

@interface CKFetchRecordZonesOperation : CKDatabaseOperation {

	BOOL _isFetchAllRecordZonesOperation;
	BOOL _ignorePCSFailures;
	/*^block*/id _fetchRecordZonesCompletionBlock;
	NSArray* _recordZoneIDs;
	NSArray* _recordZones;
	NSMutableDictionary* _recordZonesByZoneID;
	NSMutableDictionary* _recordZoneErrors;
	NSError* _fetchAllRecordZonesError;

}

@property (nonatomic,retain) NSArray * recordZones;                                  //@synthesize recordZones=_recordZones - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZonesByZoneID;              //@synthesize recordZonesByZoneID=_recordZonesByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneErrors;                 //@synthesize recordZoneErrors=_recordZoneErrors - In the implementation block
@property (nonatomic,retain) NSError * fetchAllRecordZonesError;                     //@synthesize fetchAllRecordZonesError=_fetchAllRecordZonesError - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllRecordZonesOperation;                    //@synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation - In the implementation block
@property (assign,nonatomic) BOOL ignorePCSFailures;                                 //@synthesize ignorePCSFailures=_ignorePCSFailures - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDs;                                  //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) id fetchRecordZonesCompletionBlock;                       //@synthesize fetchRecordZonesCompletionBlock=_fetchRecordZonesCompletionBlock - In the implementation block
+(id)fetchAllRecordZonesOperation;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(NSMutableDictionary *)recordZoneErrors;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)setRecordZoneErrors:(NSMutableDictionary *)arg1 ;
-(id)fetchRecordZonesCompletionBlock;
-(void)setFetchAllRecordZonesError:(NSError *)arg1 ;
-(NSError *)fetchAllRecordZonesError;
-(void)setRecordZones:(NSArray *)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)setIsFetchAllRecordZonesOperation:(BOOL)arg1 ;
-(void)setIgnorePCSFailures:(BOOL)arg1 ;
-(NSMutableDictionary *)recordZonesByZoneID;
-(void)setRecordZonesByZoneID:(NSMutableDictionary *)arg1 ;
-(BOOL)isFetchAllRecordZonesOperation;
-(BOOL)ignorePCSFailures;
-(NSArray *)recordZones;
-(void)setFetchRecordZonesCompletionBlock:(id)arg1 ;
-(id)initWithRecordZoneIDs:(id)arg1 ;
-(id)init;
@end

