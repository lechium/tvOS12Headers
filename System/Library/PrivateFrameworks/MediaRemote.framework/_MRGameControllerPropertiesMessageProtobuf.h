/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRGameControllerPropertiesProtobuf;

@interface _MRGameControllerPropertiesMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _controllerID;
	_MRGameControllerPropertiesProtobuf* _properties;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasControllerID; 
@property (assign,nonatomic) unsigned long long controllerID;                               //@synthesize controllerID=_controllerID - In the implementation block
@property (nonatomic,readonly) BOOL hasProperties; 
@property (nonatomic,retain) _MRGameControllerPropertiesProtobuf * properties;              //@synthesize properties=_properties - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setControllerID:(unsigned long long)arg1 ;
-(void)setHasControllerID:(BOOL)arg1 ;
-(BOOL)hasControllerID;
-(BOOL)hasProperties;
-(unsigned long long)controllerID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProperties:(_MRGameControllerPropertiesProtobuf *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(_MRGameControllerPropertiesProtobuf *)properties;
-(id)dictionaryRepresentation;
@end

