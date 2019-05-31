/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPShareVettingInitiateResponse : PBCodable <NSCopying> {

	int _vettingError;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasVettingError; 
@property (assign,nonatomic) int vettingError;                  //@synthesize vettingError=_vettingError - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVettingError;
-(int)vettingError;
-(void)setVettingError:(int)arg1 ;
-(void)setHasVettingError:(BOOL)arg1 ;
-(id)vettingErrorAsString:(int)arg1 ;
-(int)StringAsVettingError:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

