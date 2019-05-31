/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDWiFiMetricsManagerBlacklistedNetworkInfo : PBCodable <NSCopying> {

	NSMutableArray* _blacklistingRecords;
	unsigned _networkFlags;
	unsigned _reserverdInfo;
	NSString* _ssidHash;
	SCD_Struct_AW3 _has;

}

@property (nonatomic,readonly) BOOL hasSsidHash; 
@property (nonatomic,retain) NSString * ssidHash;                               //@synthesize ssidHash=_ssidHash - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkFlags; 
@property (assign,nonatomic) unsigned networkFlags;                             //@synthesize networkFlags=_networkFlags - In the implementation block
@property (assign,nonatomic) BOOL hasReserverdInfo; 
@property (assign,nonatomic) unsigned reserverdInfo;                            //@synthesize reserverdInfo=_reserverdInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * blacklistingRecords;              //@synthesize blacklistingRecords=_blacklistingRecords - In the implementation block
+(Class)blacklistingRecordType;
-(void)setNetworkFlags:(unsigned)arg1 ;
-(void)setHasNetworkFlags:(BOOL)arg1 ;
-(BOOL)hasNetworkFlags;
-(unsigned)networkFlags;
-(void)setSsidHash:(NSString *)arg1 ;
-(void)setBlacklistingRecords:(NSMutableArray *)arg1 ;
-(void)addBlacklistingRecord:(id)arg1 ;
-(unsigned long long)blacklistingRecordsCount;
-(void)clearBlacklistingRecords;
-(id)blacklistingRecordAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSsidHash;
-(void)setReserverdInfo:(unsigned)arg1 ;
-(void)setHasReserverdInfo:(BOOL)arg1 ;
-(BOOL)hasReserverdInfo;
-(NSString *)ssidHash;
-(unsigned)reserverdInfo;
-(NSMutableArray *)blacklistingRecords;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

