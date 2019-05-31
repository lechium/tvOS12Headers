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

@class PBUnknownFields, GEOPDVenueLabel;

@interface GEOPDVenueDirectoryGroup : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _directoryGroupingId;
	unsigned long long _muid;
	GEOPDVenueLabel* _label;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasDirectoryGroupingId; 
@property (assign,nonatomic) unsigned long long directoryGroupingId;              //@synthesize directoryGroupingId=_directoryGroupingId - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label;                             //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                             //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setDirectoryGroupingId:(unsigned long long)arg1 ;
-(void)setHasDirectoryGroupingId:(BOOL)arg1 ;
-(BOOL)hasDirectoryGroupingId;
-(BOOL)hasLabel;
-(unsigned long long)directoryGroupingId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPDVenueLabel *)label;
-(void)setLabel:(GEOPDVenueLabel *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

