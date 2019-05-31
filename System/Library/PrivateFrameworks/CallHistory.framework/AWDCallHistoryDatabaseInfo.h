/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CallHistory-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCallHistoryDatabaseInfo : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _fetchLimit;
	unsigned _schema;
	unsigned _size;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) unsigned size;                             //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL hasFetchLimit; 
@property (assign,nonatomic) unsigned fetchLimit;                       //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) BOOL hasSchema; 
@property (assign,nonatomic) unsigned schema;                           //@synthesize schema=_schema - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(void)setFetchLimit:(unsigned)arg1 ;
-(unsigned)fetchLimit;
-(void)setHasFetchLimit:(BOOL)arg1 ;
-(BOOL)hasFetchLimit;
-(void)setHasSchema:(BOOL)arg1 ;
-(BOOL)hasSchema;
-(unsigned)schema;
-(void)setSchema:(unsigned)arg1 ;
-(unsigned)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setSize:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

