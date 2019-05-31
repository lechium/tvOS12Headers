/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEONameInfo;

@interface GEORouteName : PBCodable <NSCopying> {

	int _lastZilchStitchedIndex;
	GEONameInfo* _nameInfo;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasNameInfo; 
@property (nonatomic,retain) GEONameInfo * nameInfo;                      //@synthesize nameInfo=_nameInfo - In the implementation block
@property (assign,nonatomic) BOOL hasLastZilchStitchedIndex; 
@property (assign,nonatomic) int lastZilchStitchedIndex;                  //@synthesize lastZilchStitchedIndex=_lastZilchStitchedIndex - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setNameInfo:(GEONameInfo *)arg1 ;
-(BOOL)hasNameInfo;
-(int)lastZilchStitchedIndex;
-(void)setLastZilchStitchedIndex:(int)arg1 ;
-(void)setHasLastZilchStitchedIndex:(BOOL)arg1 ;
-(BOOL)hasLastZilchStitchedIndex;
-(GEONameInfo *)nameInfo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
