/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariSharedPasswordEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _initiatedSharePasswordOutcome;
	int _passwordSharingMechanism;
	int _receivedSharedPasswordOutcome;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInitiatedSharePasswordOutcome; 
@property (assign,nonatomic) int initiatedSharePasswordOutcome;                  //@synthesize initiatedSharePasswordOutcome=_initiatedSharePasswordOutcome - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedSharedPasswordOutcome; 
@property (assign,nonatomic) int receivedSharedPasswordOutcome;                  //@synthesize receivedSharedPasswordOutcome=_receivedSharedPasswordOutcome - In the implementation block
@property (assign,nonatomic) BOOL hasPasswordSharingMechanism; 
@property (assign,nonatomic) int passwordSharingMechanism;                       //@synthesize passwordSharingMechanism=_passwordSharingMechanism - In the implementation block
-(int)initiatedSharePasswordOutcome;
-(void)setInitiatedSharePasswordOutcome:(int)arg1 ;
-(void)setHasInitiatedSharePasswordOutcome:(BOOL)arg1 ;
-(BOOL)hasInitiatedSharePasswordOutcome;
-(id)initiatedSharePasswordOutcomeAsString:(int)arg1 ;
-(int)StringAsInitiatedSharePasswordOutcome:(id)arg1 ;
-(int)receivedSharedPasswordOutcome;
-(void)setReceivedSharedPasswordOutcome:(int)arg1 ;
-(void)setHasReceivedSharedPasswordOutcome:(BOOL)arg1 ;
-(BOOL)hasReceivedSharedPasswordOutcome;
-(id)receivedSharedPasswordOutcomeAsString:(int)arg1 ;
-(int)StringAsReceivedSharedPasswordOutcome:(id)arg1 ;
-(int)passwordSharingMechanism;
-(void)setPasswordSharingMechanism:(int)arg1 ;
-(void)setHasPasswordSharingMechanism:(BOOL)arg1 ;
-(BOOL)hasPasswordSharingMechanism;
-(id)passwordSharingMechanismAsString:(int)arg1 ;
-(int)StringAsPasswordSharingMechanism:(id)arg1 ;
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

