/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariCKBookmarksMigrationStartedEvent : PBCodable <NSCopying> {

	long long _localState;
	long long _remoteState;
	unsigned long long _timestamp;
	int _migratorType;
	SCD_Struct_WB10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMigratorType; 
@property (assign,nonatomic) int migratorType;                          //@synthesize migratorType=_migratorType - In the implementation block
@property (assign,nonatomic) BOOL hasLocalState; 
@property (assign,nonatomic) long long localState;                      //@synthesize localState=_localState - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteState; 
@property (assign,nonatomic) long long remoteState;                     //@synthesize remoteState=_remoteState - In the implementation block
-(int)migratorType;
-(void)setMigratorType:(int)arg1 ;
-(void)setHasMigratorType:(BOOL)arg1 ;
-(BOOL)hasMigratorType;
-(id)migratorTypeAsString:(int)arg1 ;
-(int)StringAsMigratorType:(id)arg1 ;
-(void)setLocalState:(long long)arg1 ;
-(void)setHasLocalState:(BOOL)arg1 ;
-(BOOL)hasLocalState;
-(void)setRemoteState:(long long)arg1 ;
-(void)setHasRemoteState:(BOOL)arg1 ;
-(BOOL)hasRemoteState;
-(long long)localState;
-(long long)remoteState;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

