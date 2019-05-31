/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray;

@interface CKDFetchRecordPCSDiagnosticsOperation : CKDDatabaseOperation {

	NSArray* _zoneIDs;
	NSMutableArray* _fetchedZones;
	NSMutableArray* _mutableCorruptRecords;

}

@property (nonatomic,retain) NSArray * zoneIDs;                                   //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchedZones;                       //@synthesize fetchedZones=_fetchedZones - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableCorruptRecords;              //@synthesize mutableCorruptRecords=_mutableCorruptRecords - In the implementation block
@property (nonatomic,readonly) NSArray * corruptRecords; 
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(NSArray *)corruptRecords;
-(NSArray *)zoneIDs;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)makeStateTransition;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(void)_fetchZones;
-(void)_checkRecordPCSForAllZones;
-(NSMutableArray *)fetchedZones;
-(NSMutableArray *)mutableCorruptRecords;
-(void)setFetchedZones:(NSMutableArray *)arg1 ;
-(void)setMutableCorruptRecords:(NSMutableArray *)arg1 ;
-(void)main;
@end

