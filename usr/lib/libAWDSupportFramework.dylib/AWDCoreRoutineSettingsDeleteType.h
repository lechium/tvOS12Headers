/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineSettingsDeleteType : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _deletionMethod;
	NSString* _sessionId;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasDeletionMethod; 
@property (assign,nonatomic) int deletionMethod;                        //@synthesize deletionMethod=_deletionMethod - In the implementation block
-(void)setDeletionMethod:(int)arg1 ;
-(void)setHasDeletionMethod:(BOOL)arg1 ;
-(BOOL)hasDeletionMethod;
-(int)deletionMethod;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setSessionId:(NSString *)arg1 ;
-(BOOL)hasSessionId;
-(NSString *)sessionId;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
