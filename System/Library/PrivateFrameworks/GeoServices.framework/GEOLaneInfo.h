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

@class NSMutableArray;

@interface GEOLaneInfo : PBCodable <NSCopying> {

	NSMutableArray* _arrows;
	BOOL _hov;
	BOOL _preferredForMultipleManeuvers;
	BOOL _supportsManeuver;
	SCD_Struct_GE23 _has;

}

@property (assign,nonatomic) BOOL hasSupportsManeuver; 
@property (assign,nonatomic) BOOL supportsManeuver;                              //@synthesize supportsManeuver=_supportsManeuver - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredForMultipleManeuvers; 
@property (assign,nonatomic) BOOL preferredForMultipleManeuvers;                 //@synthesize preferredForMultipleManeuvers=_preferredForMultipleManeuvers - In the implementation block
@property (assign,nonatomic) BOOL hasHov; 
@property (assign,nonatomic) BOOL hov;                                           //@synthesize hov=_hov - In the implementation block
@property (nonatomic,retain) NSMutableArray * arrows;                            //@synthesize arrows=_arrows - In the implementation block
+(Class)arrowType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)arrowsCount;
-(id)arrowAtIndex:(unsigned long long)arg1 ;
-(BOOL)supportsManeuver;
-(BOOL)hov;
-(BOOL)preferredForMultipleManeuvers;
-(void)addArrow:(id)arg1 ;
-(void)clearArrows;
-(void)setSupportsManeuver:(BOOL)arg1 ;
-(void)setHasSupportsManeuver:(BOOL)arg1 ;
-(BOOL)hasSupportsManeuver;
-(void)setPreferredForMultipleManeuvers:(BOOL)arg1 ;
-(void)setHasPreferredForMultipleManeuvers:(BOOL)arg1 ;
-(BOOL)hasPreferredForMultipleManeuvers;
-(void)setHov:(BOOL)arg1 ;
-(void)setHasHov:(BOOL)arg1 ;
-(BOOL)hasHov;
-(NSMutableArray *)arrows;
-(void)setArrows:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

