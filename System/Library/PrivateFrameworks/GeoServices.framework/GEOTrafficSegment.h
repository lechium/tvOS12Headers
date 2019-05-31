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

@interface GEOTrafficSegment : PBCodable <NSCopying> {

	int _speed;
	int _vertexCount;
	int _vertexOffset;
	int _width;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) int vertexOffset;              //@synthesize vertexOffset=_vertexOffset - In the implementation block
@property (assign,nonatomic) int vertexCount;               //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) int speed;                     //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) int width;                     //@synthesize width=_width - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)hasWidth;
-(void)setHasSpeed:(BOOL)arg1 ;
-(BOOL)hasSpeed;
-(id)speedAsString:(int)arg1 ;
-(int)StringAsSpeed:(id)arg1 ;
-(int)vertexOffset;
-(void)setVertexOffset:(int)arg1 ;
-(void)setVertexCount:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSpeed:(int)arg1 ;
-(int)vertexCount;
-(int)width;
-(void)setWidth:(int)arg1 ;
-(int)speed;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

