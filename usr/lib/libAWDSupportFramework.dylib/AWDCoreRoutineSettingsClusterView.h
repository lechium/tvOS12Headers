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

@interface AWDCoreRoutineSettingsClusterView : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _clusterCount;
	int _elsewhereCount;
	NSString* _sessionId;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasClusterCount; 
@property (assign,nonatomic) int clusterCount;                          //@synthesize clusterCount=_clusterCount - In the implementation block
@property (assign,nonatomic) BOOL hasElsewhereCount; 
@property (assign,nonatomic) int elsewhereCount;                        //@synthesize elsewhereCount=_elsewhereCount - In the implementation block
-(void)setClusterCount:(int)arg1 ;
-(void)setHasClusterCount:(BOOL)arg1 ;
-(BOOL)hasClusterCount;
-(void)setElsewhereCount:(int)arg1 ;
-(void)setHasElsewhereCount:(BOOL)arg1 ;
-(BOOL)hasElsewhereCount;
-(int)clusterCount;
-(int)elsewhereCount;
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

