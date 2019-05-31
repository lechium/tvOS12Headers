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

@interface AWDWPA2Counters : PBCodable <NSCopying> {

	unsigned long long _ccmpfmterr;
	unsigned long long _ccmpreplay;
	unsigned long long _ccmpundec;
	unsigned long long _decsuccess;
	unsigned long long _fourwayfail;
	unsigned long long _tkipcntrmsr;
	unsigned long long _tkipicverr;
	unsigned long long _tkipmicfaill;
	unsigned long long _tkipreplay;
	unsigned long long _wepexcluded;
	unsigned long long _wepicverr;
	unsigned long long _wepundec;
	SCD_Struct_AW18 _has;

}

@property (assign,nonatomic) BOOL hasTkipmicfaill; 
@property (assign,nonatomic) unsigned long long tkipmicfaill;              //@synthesize tkipmicfaill=_tkipmicfaill - In the implementation block
@property (assign,nonatomic) BOOL hasTkipcntrmsr; 
@property (assign,nonatomic) unsigned long long tkipcntrmsr;               //@synthesize tkipcntrmsr=_tkipcntrmsr - In the implementation block
@property (assign,nonatomic) BOOL hasTkipreplay; 
@property (assign,nonatomic) unsigned long long tkipreplay;                //@synthesize tkipreplay=_tkipreplay - In the implementation block
@property (assign,nonatomic) BOOL hasCcmpfmterr; 
@property (assign,nonatomic) unsigned long long ccmpfmterr;                //@synthesize ccmpfmterr=_ccmpfmterr - In the implementation block
@property (assign,nonatomic) BOOL hasCcmpreplay; 
@property (assign,nonatomic) unsigned long long ccmpreplay;                //@synthesize ccmpreplay=_ccmpreplay - In the implementation block
@property (assign,nonatomic) BOOL hasCcmpundec; 
@property (assign,nonatomic) unsigned long long ccmpundec;                 //@synthesize ccmpundec=_ccmpundec - In the implementation block
@property (assign,nonatomic) BOOL hasFourwayfail; 
@property (assign,nonatomic) unsigned long long fourwayfail;               //@synthesize fourwayfail=_fourwayfail - In the implementation block
@property (assign,nonatomic) BOOL hasWepundec; 
@property (assign,nonatomic) unsigned long long wepundec;                  //@synthesize wepundec=_wepundec - In the implementation block
@property (assign,nonatomic) BOOL hasWepicverr; 
@property (assign,nonatomic) unsigned long long wepicverr;                 //@synthesize wepicverr=_wepicverr - In the implementation block
@property (assign,nonatomic) BOOL hasDecsuccess; 
@property (assign,nonatomic) unsigned long long decsuccess;                //@synthesize decsuccess=_decsuccess - In the implementation block
@property (assign,nonatomic) BOOL hasTkipicverr; 
@property (assign,nonatomic) unsigned long long tkipicverr;                //@synthesize tkipicverr=_tkipicverr - In the implementation block
@property (assign,nonatomic) BOOL hasWepexcluded; 
@property (assign,nonatomic) unsigned long long wepexcluded;               //@synthesize wepexcluded=_wepexcluded - In the implementation block
-(void)setTkipmicfaill:(unsigned long long)arg1 ;
-(void)setHasTkipmicfaill:(BOOL)arg1 ;
-(BOOL)hasTkipmicfaill;
-(void)setTkipcntrmsr:(unsigned long long)arg1 ;
-(void)setHasTkipcntrmsr:(BOOL)arg1 ;
-(BOOL)hasTkipcntrmsr;
-(void)setTkipreplay:(unsigned long long)arg1 ;
-(void)setHasTkipreplay:(BOOL)arg1 ;
-(BOOL)hasTkipreplay;
-(void)setCcmpfmterr:(unsigned long long)arg1 ;
-(void)setHasCcmpfmterr:(BOOL)arg1 ;
-(BOOL)hasCcmpfmterr;
-(void)setCcmpreplay:(unsigned long long)arg1 ;
-(void)setHasCcmpreplay:(BOOL)arg1 ;
-(BOOL)hasCcmpreplay;
-(void)setCcmpundec:(unsigned long long)arg1 ;
-(void)setHasCcmpundec:(BOOL)arg1 ;
-(BOOL)hasCcmpundec;
-(void)setFourwayfail:(unsigned long long)arg1 ;
-(void)setHasFourwayfail:(BOOL)arg1 ;
-(BOOL)hasFourwayfail;
-(void)setWepundec:(unsigned long long)arg1 ;
-(void)setHasWepundec:(BOOL)arg1 ;
-(BOOL)hasWepundec;
-(void)setWepicverr:(unsigned long long)arg1 ;
-(void)setHasWepicverr:(BOOL)arg1 ;
-(BOOL)hasWepicverr;
-(void)setDecsuccess:(unsigned long long)arg1 ;
-(void)setHasDecsuccess:(BOOL)arg1 ;
-(BOOL)hasDecsuccess;
-(void)setTkipicverr:(unsigned long long)arg1 ;
-(void)setHasTkipicverr:(BOOL)arg1 ;
-(BOOL)hasTkipicverr;
-(void)setWepexcluded:(unsigned long long)arg1 ;
-(void)setHasWepexcluded:(BOOL)arg1 ;
-(BOOL)hasWepexcluded;
-(unsigned long long)tkipmicfaill;
-(unsigned long long)tkipcntrmsr;
-(unsigned long long)tkipreplay;
-(unsigned long long)ccmpfmterr;
-(unsigned long long)ccmpreplay;
-(unsigned long long)ccmpundec;
-(unsigned long long)fourwayfail;
-(unsigned long long)wepundec;
-(unsigned long long)wepicverr;
-(unsigned long long)decsuccess;
-(unsigned long long)tkipicverr;
-(unsigned long long)wepexcluded;
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

