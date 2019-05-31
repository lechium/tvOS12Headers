/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMPBEncodeOption : PBCodable <NSCopying> {

	BOOL _isSPI;
	BOOL _isXPC;
	SCD_Struct_HM3 _has;

}

@property (assign,nonatomic) BOOL hasIsXPC; 
@property (assign,nonatomic) BOOL isXPC;                 //@synthesize isXPC=_isXPC - In the implementation block
@property (assign,nonatomic) BOOL hasIsSPI; 
@property (assign,nonatomic) BOOL isSPI;                 //@synthesize isSPI=_isSPI - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIsXPC:(BOOL)arg1 ;
-(void)setIsSPI:(BOOL)arg1 ;
-(BOOL)isXPC;
-(BOOL)isSPI;
-(void)setHasIsXPC:(BOOL)arg1 ;
-(BOOL)hasIsXPC;
-(void)setHasIsSPI:(BOOL)arg1 ;
-(BOOL)hasIsSPI;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

