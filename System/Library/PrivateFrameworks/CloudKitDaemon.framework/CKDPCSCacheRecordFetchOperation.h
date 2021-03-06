/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class NSString, CKRecordID, CKDRecordPCSData;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation {

	BOOL _serverRecordHasNoProtectionData;
	NSString* _serverRecordType;

}

@property (nonatomic,readonly) CKRecordID * recordID; 
@property (nonatomic,retain) CKDRecordPCSData * recordPCSData; 
@property (assign,nonatomic) BOOL serverRecordHasNoProtectionData;              //@synthesize serverRecordHasNoProtectionData=_serverRecordHasNoProtectionData - In the implementation block
@property (nonatomic,retain) NSString * serverRecordType;                       //@synthesize serverRecordType=_serverRecordType - In the implementation block
-(void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2 ;
-(id)itemTypeName;
-(BOOL)hasAllPCSData;
-(BOOL)_fetchPCSDataFromDatabase;
-(BOOL)_fetchPCSDataFromServer;
-(BOOL)_createAdditionalPCS;
-(BOOL)_decryptPCS;
-(BOOL)_savePCSDataToCache;
-(CKDRecordPCSData *)recordPCSData;
-(void)setRecordPCSData:(CKDRecordPCSData *)arg1 ;
-(BOOL)serverRecordHasNoProtectionData;
-(void)setServerRecordType:(NSString *)arg1 ;
-(void)setServerRecordHasNoProtectionData:(BOOL)arg1 ;
-(BOOL)needsChainPCSCreation;
-(NSString *)serverRecordType;
-(BOOL)_fetchPCSForPrivateZone;
-(BOOL)_fetchDependentPCSInSharedDatabase;
-(BOOL)_decryptRecordPCSInPrivateDatabase;
-(BOOL)_decryptRecordPCSInSharedDatabase;
-(BOOL)_fetchDependentPCS;
-(CKRecordID *)recordID;
@end

