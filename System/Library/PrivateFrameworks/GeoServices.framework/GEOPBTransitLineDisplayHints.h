/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPBTransitLineDisplayHints : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _showVehicleNumber;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasShowVehicleNumber; 
@property (assign,nonatomic) BOOL showVehicleNumber;                         //@synthesize showVehicleNumber=_showVehicleNumber - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)showVehicleNumber;
-(void)setShowVehicleNumber:(BOOL)arg1 ;
-(void)setHasShowVehicleNumber:(BOOL)arg1 ;
-(BOOL)hasShowVehicleNumber;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

