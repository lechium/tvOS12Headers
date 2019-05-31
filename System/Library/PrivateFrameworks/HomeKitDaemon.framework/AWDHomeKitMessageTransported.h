/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitMessageTransported : PBCodable <NSCopying> {

	unsigned long long _payloadSize;
	unsigned long long _timestamp;
	int _direction;
	NSString* _identifier;
	int _messageType;
	NSString* _transactionID;
	int _transport;
	BOOL _isSecure;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadSize; 
@property (assign,nonatomic) unsigned long long payloadSize;              //@synthesize payloadSize=_payloadSize - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionID; 
@property (nonatomic,retain) NSString * transactionID;                    //@synthesize transactionID=_transactionID - In the implementation block
@property (assign,nonatomic) BOOL hasIsSecure; 
@property (assign,nonatomic) BOOL isSecure;                               //@synthesize isSecure=_isSecure - In the implementation block
@property (assign,nonatomic) BOOL hasMessageType; 
@property (assign,nonatomic) int messageType;                             //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) BOOL hasTransport; 
@property (assign,nonatomic) int transport;                               //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) BOOL hasDirection; 
@property (assign,nonatomic) int direction;                               //@synthesize direction=_direction - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setMessageType:(int)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasDirection;
-(int)messageType;
-(void)setHasMessageType:(BOOL)arg1 ;
-(BOOL)hasMessageType;
-(id)messageTypeAsString:(int)arg1 ;
-(int)StringAsMessageType:(id)arg1 ;
-(void)setTransport:(int)arg1 ;
-(int)transport;
-(void)setHasDirection:(BOOL)arg1 ;
-(id)directionAsString:(int)arg1 ;
-(int)StringAsDirection:(id)arg1 ;
-(void)setTransactionID:(NSString *)arg1 ;
-(void)setPayloadSize:(unsigned long long)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(BOOL)hasTransactionID;
-(void)setIsSecure:(BOOL)arg1 ;
-(void)setHasIsSecure:(BOOL)arg1 ;
-(BOOL)hasIsSecure;
-(void)setHasTransport:(BOOL)arg1 ;
-(BOOL)hasTransport;
-(id)transportAsString:(int)arg1 ;
-(int)StringAsTransport:(id)arg1 ;
-(unsigned long long)payloadSize;
-(NSString *)transactionID;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)timestamp;
-(int)direction;
-(void)setDirection:(int)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isSecure;
-(id)dictionaryRepresentation;
@end

