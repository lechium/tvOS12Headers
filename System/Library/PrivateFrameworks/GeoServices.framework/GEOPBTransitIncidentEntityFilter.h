/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPBTransitIncidentEntityFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE61* _nextStopMuids;

}

@property (nonatomic,readonly) unsigned long long nextStopMuidsCount; 
@property (nonatomic,readonly) unsigned long long* nextStopMuids; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)nextStopMuidsCount;
-(unsigned long long)nextStopMuidAtIndex:(unsigned long long)arg1 ;
-(void)clearNextStopMuids;
-(void)addNextStopMuid:(unsigned long long)arg1 ;
-(unsigned long long*)nextStopMuids;
-(void)setNextStopMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

