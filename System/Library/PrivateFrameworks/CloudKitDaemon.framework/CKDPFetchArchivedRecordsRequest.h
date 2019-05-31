/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CKDPAssetsToDownload, CKDPRecordZoneIdentifier;

@interface CKDPFetchArchivedRecordsRequest : PBRequest <NSCopying> {

	NSData* _archiveContinuationToken;
	CKDPAssetsToDownload* _assetsToDownload;
	unsigned _limit;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	BOOL _newestFirst;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasArchiveContinuationToken; 
@property (nonatomic,retain) NSData * archiveContinuationToken;                      //@synthesize archiveContinuationToken=_archiveContinuationToken - In the implementation block
@property (assign,nonatomic) BOOL hasNewestFirst; 
@property (assign,nonatomic) BOOL newestFirst;                                       //@synthesize newestFirst=_newestFirst - In the implementation block
@property (assign,nonatomic) BOOL hasLimit; 
@property (assign,nonatomic) unsigned limit;                                         //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetsToDownload; 
@property (nonatomic,retain) CKDPAssetsToDownload * assetsToDownload;                //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)limit;
-(void)setLimit:(unsigned)arg1 ;
-(void)setAssetsToDownload:(CKDPAssetsToDownload *)arg1 ;
-(BOOL)hasAssetsToDownload;
-(CKDPAssetsToDownload *)assetsToDownload;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(void)setHasLimit:(BOOL)arg1 ;
-(BOOL)hasLimit;
-(void)setArchiveContinuationToken:(NSData *)arg1 ;
-(BOOL)hasArchiveContinuationToken;
-(void)setNewestFirst:(BOOL)arg1 ;
-(void)setHasNewestFirst:(BOOL)arg1 ;
-(BOOL)hasNewestFirst;
-(NSData *)archiveContinuationToken;
-(BOOL)newestFirst;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

