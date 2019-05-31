/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface CKDFetchBatchedRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _shouldFetchAssetContents;
	BOOL _fetchAllChanges;
	BOOL _shouldReportAllPerItemFailures;
	BOOL _forcePCSDecryptionAttempt;
	NSArray* _recordZoneIDs;
	NSDictionary* _configurationsByRecordZoneID;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;

}

@property (nonatomic,retain) NSArray * recordZoneIDs;                                            //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * configurationsByRecordZoneID;                        //@synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                                      //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                               //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (assign,nonatomic) BOOL shouldReportAllPerItemFailures;                                //@synthesize shouldReportAllPerItemFailures=_shouldReportAllPerItemFailures - In the implementation block
@property (assign,nonatomic) BOOL forcePCSDecryptionAttempt;                                     //@synthesize forcePCSDecryptionAttempt=_forcePCSDecryptionAttempt - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)setConfigurationsByRecordZoneID:(NSDictionary *)arg1 ;
-(void)setForcePCSDecryptionAttempt:(BOOL)arg1 ;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(NSDictionary *)configurationsByRecordZoneID;
-(BOOL)shouldFetchAssetContents;
-(BOOL)fetchAllChanges;
-(BOOL)shouldReportAllPerItemFailures;
-(BOOL)forcePCSDecryptionAttempt;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
-(void)setShouldReportAllPerItemFailures:(BOOL)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

