/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOTransitPath : PBCodable <NSCopying> {

	NSMutableArray* _legs;

}

@property (nonatomic,retain) NSMutableArray * legs;              //@synthesize legs=_legs - In the implementation block
+(Class)legType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)legs;
-(void)setLegs:(NSMutableArray *)arg1 ;
-(void)addLeg:(id)arg1 ;
-(unsigned long long)legsCount;
-(void)clearLegs;
-(id)legAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

