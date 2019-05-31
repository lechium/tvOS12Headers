/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, CKServerChangeToken, NSArray;


@protocol SCKZoneStore
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (nonatomic,copy) NSDate * lastDirtyDate; 
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken; 
@property (nonatomic,copy) NSArray * serverRecords; 
@property (nonatomic,copy) NSArray * pendingCommands; 
@required
-(NSDate *)lastSyncDate;
-(void)setLastSyncDate:(id)arg1;
-(NSDate *)lastDirtyDate;
-(void)setLastDirtyDate:(id)arg1;
-(NSArray *)serverRecords;
-(NSArray *)pendingCommands;
-(void)applyServerRecordsDiff:(id)arg1;
-(void)addPendingCommands:(id)arg1;
-(void)clearPendingCommandsUpToCount:(unsigned long long)arg1;
-(void)setServerRecords:(id)arg1;
-(void)setPendingCommands:(id)arg1;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(id)arg1;

@end

