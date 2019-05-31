/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, CKDPShareIdentifier;

@interface CKDPShareVettingInitiateRequest : PBRequest <NSCopying> {

	NSString* _baseToken;
	NSData* _encryptedKey;
	NSString* _participantId;
	CKDPShareIdentifier* _shareId;

}

@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;              //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedKey; 
@property (nonatomic,retain) NSData * encryptedKey;                      //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,readonly) BOOL hasParticipantId; 
@property (nonatomic,retain) NSString * participantId;                   //@synthesize participantId=_participantId - In the implementation block
@property (nonatomic,readonly) BOOL hasBaseToken; 
@property (nonatomic,retain) NSString * baseToken;                       //@synthesize baseToken=_baseToken - In the implementation block
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSString *)participantId;
-(void)setParticipantId:(NSString *)arg1 ;
-(void)setBaseToken:(NSString *)arg1 ;
-(NSData *)encryptedKey;
-(NSString *)baseToken;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(BOOL)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(BOOL)hasParticipantId;
-(BOOL)hasEncryptedKey;
-(BOOL)hasBaseToken;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

