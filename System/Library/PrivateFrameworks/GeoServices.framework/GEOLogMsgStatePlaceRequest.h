/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDPlaceRequest;

@interface GEOLogMsgStatePlaceRequest : PBRequest <NSCopying> {

	GEOPDPlaceRequest* _placeDataRequest;
	int _placeRequestType;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType;                              //@synthesize placeRequestType=_placeRequestType - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceDataRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeDataRequest;              //@synthesize placeDataRequest=_placeDataRequest - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)placeRequestType;
-(void)setPlaceRequestType:(int)arg1 ;
-(void)setHasPlaceRequestType:(BOOL)arg1 ;
-(BOOL)hasPlaceRequestType;
-(id)placeRequestTypeAsString:(int)arg1 ;
-(int)StringAsPlaceRequestType:(id)arg1 ;
-(void)setPlaceDataRequest:(GEOPDPlaceRequest *)arg1 ;
-(BOOL)hasPlaceDataRequest;
-(GEOPDPlaceRequest *)placeDataRequest;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

