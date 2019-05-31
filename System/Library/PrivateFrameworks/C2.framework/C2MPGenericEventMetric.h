/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, C2MPGenericEventMetricValue;

@interface C2MPGenericEventMetric : PBCodable <NSCopying> {

	NSString* _key;
	C2MPGenericEventMetricValue* _value;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) C2MPGenericEventMetricValue * value;              //@synthesize value=_value - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(C2MPGenericEventMetricValue *)value;
-(void)setValue:(C2MPGenericEventMetricValue *)arg1 ;
-(NSString *)key;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasKey;
-(void)setKey:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
@end

