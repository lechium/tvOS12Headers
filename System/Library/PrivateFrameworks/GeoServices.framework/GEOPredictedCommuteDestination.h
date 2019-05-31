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

@interface GEOPredictedCommuteDestination : PBCodable <NSCopying> {

	double _confidenceScore;
	int _destinationType;
	BOOL _chosen;
	SCD_Struct_GE23 _has;

}

@property (assign,nonatomic) BOOL hasDestinationType; 
@property (assign,nonatomic) int destinationType;                  //@synthesize destinationType=_destinationType - In the implementation block
@property (assign,nonatomic) BOOL hasConfidenceScore; 
@property (assign,nonatomic) double confidenceScore;               //@synthesize confidenceScore=_confidenceScore - In the implementation block
@property (assign,nonatomic) BOOL hasChosen; 
@property (assign,nonatomic) BOOL chosen;                          //@synthesize chosen=_chosen - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDestinationType:(int)arg1 ;
-(void)setConfidenceScore:(double)arg1 ;
-(void)setChosen:(BOOL)arg1 ;
-(int)destinationType;
-(void)setHasDestinationType:(BOOL)arg1 ;
-(BOOL)hasDestinationType;
-(id)destinationTypeAsString:(int)arg1 ;
-(int)StringAsDestinationType:(id)arg1 ;
-(void)setHasConfidenceScore:(BOOL)arg1 ;
-(BOOL)hasConfidenceScore;
-(void)setHasChosen:(BOOL)arg1 ;
-(BOOL)hasChosen;
-(BOOL)chosen;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)confidenceScore;
-(id)dictionaryRepresentation;
@end

