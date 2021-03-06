/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _DKPRValue;

@interface _DKPRMetadataEntry : PBCodable <NSCopying> {

	NSString* _key;
	_DKPRValue* _value;

}

@property (nonatomic,retain) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) _DKPRValue * value;              //@synthesize value=_value - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_DKPRValue *)value;
-(void)setValue:(_DKPRValue *)arg1 ;
-(NSString *)key;
-(void)copyTo:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
@end

