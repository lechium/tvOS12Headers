/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDMapsIdentifierPlaceLookupParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _mapsIds;
	int _resultProviderId;
	BOOL _enablePartialClientization;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId;                            //@synthesize resultProviderId=_resultProviderId - In the implementation block
@property (nonatomic,retain) NSMutableArray * mapsIds;                        //@synthesize mapsIds=_mapsIds - In the implementation block
@property (assign,nonatomic) BOOL hasEnablePartialClientization; 
@property (assign,nonatomic) BOOL enablePartialClientization;                 //@synthesize enablePartialClientization=_enablePartialClientization - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)mapsIdType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setEnablePartialClientization:(BOOL)arg1 ;
-(void)setHasEnablePartialClientization:(BOOL)arg1 ;
-(BOOL)hasEnablePartialClientization;
-(BOOL)enablePartialClientization;
-(void)setResultProviderId:(int)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(int)resultProviderId;
-(void)addMapsId:(id)arg1 ;
-(unsigned long long)mapsIdsCount;
-(void)clearMapsIds;
-(id)mapsIdAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)mapsIds;
-(void)setMapsIds:(NSMutableArray *)arg1 ;
-(id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

