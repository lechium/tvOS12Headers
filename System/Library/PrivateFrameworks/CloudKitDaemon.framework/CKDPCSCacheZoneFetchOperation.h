/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class CKRecordZoneID, CKDZonePCSData;

@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation {

	BOOL _shouldCreateZoneishPCS;

}

@property (nonatomic,readonly) BOOL needsZoneishPCS; 
@property (nonatomic,readonly) CKRecordZoneID * zoneID; 
@property (nonatomic,retain) CKDZonePCSData * zonePCSData; 
@property (assign,nonatomic) BOOL shouldCreateZoneishPCS;               //@synthesize shouldCreateZoneishPCS=_shouldCreateZoneishPCS - In the implementation block
-(CKDZonePCSData *)zonePCSData;
-(BOOL)needsZoneishPCS;
-(void)setZonePCSData:(CKDZonePCSData *)arg1 ;
-(void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2 ;
-(void)_saveZoneToServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saveZoneToServer:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 zoneishPCS:(OpaquePCSShareProtectionRef)arg3 previousEtag:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_saveNewPCSOnDefaultZone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShouldCreateZoneishPCS:(BOOL)arg1 ;
-(void)_handleDecryptedZonePCSData:(id)arg1 withError:(id)arg2 ;
-(BOOL)shouldCreateZoneishPCS;
-(id)itemTypeName;
-(BOOL)hasAllPCSData;
-(void)_willRetryFetch;
-(BOOL)_fetchPCSDataFromDatabase;
-(BOOL)_fetchPCSDataFromServer;
-(BOOL)_createAdditionalPCS;
-(BOOL)_decryptPCS;
-(BOOL)_saveUpdatedPCSToServer;
-(BOOL)_savePCSDataToCache;
-(CKRecordZoneID *)zoneID;
@end

