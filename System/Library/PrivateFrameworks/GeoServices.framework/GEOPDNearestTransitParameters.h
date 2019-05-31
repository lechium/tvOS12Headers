/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDNearestTransitParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _lineMuid;
	BOOL _isTransitOnly;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasLineMuid; 
@property (assign,nonatomic) unsigned long long lineMuid;                    //@synthesize lineMuid=_lineMuid - In the implementation block
@property (assign,nonatomic) BOOL hasIsTransitOnly; 
@property (assign,nonatomic) BOOL isTransitOnly;                             //@synthesize isTransitOnly=_isTransitOnly - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setLineMuid:(unsigned long long)arg1 ;
-(void)setHasLineMuid:(BOOL)arg1 ;
-(BOOL)hasLineMuid;
-(unsigned long long)lineMuid;
-(void)setIsTransitOnly:(BOOL)arg1 ;
-(void)setHasIsTransitOnly:(BOOL)arg1 ;
-(BOOL)hasIsTransitOnly;
-(BOOL)isTransitOnly;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

