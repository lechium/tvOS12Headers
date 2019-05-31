/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDRxPhyErrors : PBCodable <NSCopying> {

	unsigned long long _bphyBadplcp;
	unsigned long long _bphyRxcrsglitch;
	unsigned long long _rfdisable;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasRfdisable; 
@property (assign,nonatomic) unsigned long long rfdisable;                    //@synthesize rfdisable=_rfdisable - In the implementation block
@property (assign,nonatomic) BOOL hasBphyRxcrsglitch; 
@property (assign,nonatomic) unsigned long long bphyRxcrsglitch;              //@synthesize bphyRxcrsglitch=_bphyRxcrsglitch - In the implementation block
@property (assign,nonatomic) BOOL hasBphyBadplcp; 
@property (assign,nonatomic) unsigned long long bphyBadplcp;                  //@synthesize bphyBadplcp=_bphyBadplcp - In the implementation block
-(void)setRfdisable:(unsigned long long)arg1 ;
-(void)setHasRfdisable:(BOOL)arg1 ;
-(BOOL)hasRfdisable;
-(void)setBphyRxcrsglitch:(unsigned long long)arg1 ;
-(void)setHasBphyRxcrsglitch:(BOOL)arg1 ;
-(BOOL)hasBphyRxcrsglitch;
-(void)setBphyBadplcp:(unsigned long long)arg1 ;
-(void)setHasBphyBadplcp:(BOOL)arg1 ;
-(BOOL)hasBphyBadplcp;
-(unsigned long long)rfdisable;
-(unsigned long long)bphyRxcrsglitch;
-(unsigned long long)bphyBadplcp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

