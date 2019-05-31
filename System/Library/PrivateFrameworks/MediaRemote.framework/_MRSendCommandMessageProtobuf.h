/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRCommandOptionsProtobuf, _MRNowPlayingPlayerPathProtobuf;

@interface _MRSendCommandMessageProtobuf : PBCodable <NSCopying> {

	int _command;
	_MRCommandOptionsProtobuf* _options;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) int command;                                               //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BOOL hasOptions; 
@property (nonatomic,retain) _MRCommandOptionsProtobuf * options;                       //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerPath; 
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasOptions;
-(BOOL)hasPlayerPath;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(int)command;
-(void)setCommand:(int)arg1 ;
-(void)setHasCommand:(BOOL)arg1 ;
-(BOOL)hasCommand;
-(id)commandAsString:(int)arg1 ;
-(int)StringAsCommand:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_MRCommandOptionsProtobuf *)options;
-(void)setOptions:(_MRCommandOptionsProtobuf *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

