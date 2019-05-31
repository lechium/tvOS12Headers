/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOAttributeKeyValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _attributeKey;
	NSString* _attributeValue;

}

@property (nonatomic,retain) NSString * attributeKey;                        //@synthesize attributeKey=_attributeKey - In the implementation block
@property (nonatomic,retain) NSString * attributeValue;                      //@synthesize attributeValue=_attributeValue - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setAttributeKey:(NSString *)arg1 ;
-(void)setAttributeValue:(NSString *)arg1 ;
-(NSString *)attributeKey;
-(NSString *)attributeValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

