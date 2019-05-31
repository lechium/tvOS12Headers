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

@interface AWDCallHistoryDatabaseMigration : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _domain;
	unsigned _error;
	unsigned _newSchema;
	unsigned _oldSchema;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasOldSchema; 
@property (assign,nonatomic) unsigned oldSchema;                        //@synthesize oldSchema=_oldSchema - In the implementation block
@property (assign,nonatomic) BOOL hasNewSchema; 
@property (assign,nonatomic) unsigned newSchema;                        //@synthesize newSchema=_newSchema - In the implementation block
@property (assign,nonatomic) BOOL hasDomain; 
@property (assign,nonatomic) unsigned domain;                           //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
-(BOOL)hasDomain;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasError;
-(void)setDomain:(unsigned)arg1 ;
-(void)setOldSchema:(unsigned)arg1 ;
-(void)setNewSchema:(unsigned)arg1 ;
-(void)setHasOldSchema:(BOOL)arg1 ;
-(BOOL)hasOldSchema;
-(void)setHasNewSchema:(BOOL)arg1 ;
-(BOOL)hasNewSchema;
-(void)setHasDomain:(BOOL)arg1 ;
-(unsigned)oldSchema;
-(unsigned)newSchema;
-(void)setHasError:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)domain;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)error;
-(void)setError:(unsigned)arg1 ;
@end

