/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPDWifiAccessPoint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _scanTimestamp;
	unsigned _age;
	int _channel;
	NSString* _macId;
	int _rssi;
	SCD_Struct_GE70 _has;

}

@property (nonatomic,readonly) BOOL hasMacId; 
@property (nonatomic,retain) NSString * macId;                               //@synthesize macId=_macId - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                                       //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) int channel;                                    //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasScanTimestamp; 
@property (assign,nonatomic) unsigned long long scanTimestamp;               //@synthesize scanTimestamp=_scanTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAge; 
@property (assign,nonatomic) unsigned age;                                   //@synthesize age=_age - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setChannel:(int)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasChannel;
-(void)setRssi:(int)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(int)channel;
-(int)rssi;
-(void)setMacId:(NSString *)arg1 ;
-(BOOL)hasMacId;
-(void)setScanTimestamp:(unsigned long long)arg1 ;
-(void)setHasScanTimestamp:(BOOL)arg1 ;
-(BOOL)hasScanTimestamp;
-(void)setAge:(unsigned)arg1 ;
-(void)setHasAge:(BOOL)arg1 ;
-(BOOL)hasAge;
-(NSString *)macId;
-(unsigned long long)scanTimestamp;
-(unsigned)age;
-(id)initWithGEOWifiAccessPoint:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

