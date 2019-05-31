/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NSString;

@interface ICPBDGSStartDelegationResponse : PBCodable <NSCopying> {

	NSData* _playerAnisetteMID;
	NSData* _playerDeviceGUID;
	NSMutableArray* _playerInfoContextTokens;
	NSString* _playerUserAgent;

}

@property (nonatomic,readonly) BOOL hasPlayerAnisetteMID; 
@property (nonatomic,retain) NSData * playerAnisetteMID;                            //@synthesize playerAnisetteMID=_playerAnisetteMID - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerDeviceGUID; 
@property (nonatomic,retain) NSData * playerDeviceGUID;                             //@synthesize playerDeviceGUID=_playerDeviceGUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * playerInfoContextTokens;              //@synthesize playerInfoContextTokens=_playerInfoContextTokens - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerUserAgent; 
@property (nonatomic,retain) NSString * playerUserAgent;                            //@synthesize playerUserAgent=_playerUserAgent - In the implementation block
+(Class)playerInfoContextTokenType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPlayerDeviceGUID:(NSData *)arg1 ;
-(void)setPlayerUserAgent:(NSString *)arg1 ;
-(void)setPlayerAnisetteMID:(NSData *)arg1 ;
-(void)setPlayerInfoContextTokens:(NSMutableArray *)arg1 ;
-(void)addPlayerInfoContextToken:(id)arg1 ;
-(BOOL)hasPlayerAnisetteMID;
-(BOOL)hasPlayerDeviceGUID;
-(void)clearPlayerInfoContextTokens;
-(unsigned long long)playerInfoContextTokensCount;
-(id)playerInfoContextTokenAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPlayerUserAgent;
-(NSData *)playerAnisetteMID;
-(NSData *)playerDeviceGUID;
-(NSMutableArray *)playerInfoContextTokens;
-(NSString *)playerUserAgent;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

