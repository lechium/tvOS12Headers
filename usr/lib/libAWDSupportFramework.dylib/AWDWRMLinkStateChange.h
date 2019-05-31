/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWRMLinkStateChange : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _btRssi;
	NSString* _bundleID;
	unsigned _ccAssertion;
	unsigned _enableCMAS;
	unsigned _enableTelephony;
	unsigned _isTriggeredByProximityChange;
	unsigned _newLinkState;
	unsigned _oldLinkState;
	unsigned _siriApp;
	unsigned _wifiProximity;
	int _wifiRssi;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                                //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL hasSiriApp; 
@property (assign,nonatomic) unsigned siriApp;                                   //@synthesize siriApp=_siriApp - In the implementation block
@property (assign,nonatomic) BOOL hasIsTriggeredByProximityChange; 
@property (assign,nonatomic) unsigned isTriggeredByProximityChange;              //@synthesize isTriggeredByProximityChange=_isTriggeredByProximityChange - In the implementation block
@property (assign,nonatomic) BOOL hasOldLinkState; 
@property (assign,nonatomic) unsigned oldLinkState;                              //@synthesize oldLinkState=_oldLinkState - In the implementation block
@property (assign,nonatomic) BOOL hasNewLinkState; 
@property (assign,nonatomic) unsigned newLinkState;                              //@synthesize newLinkState=_newLinkState - In the implementation block
@property (assign,nonatomic) BOOL hasWifiProximity; 
@property (assign,nonatomic) unsigned wifiProximity;                             //@synthesize wifiProximity=_wifiProximity - In the implementation block
@property (assign,nonatomic) BOOL hasCcAssertion; 
@property (assign,nonatomic) unsigned ccAssertion;                               //@synthesize ccAssertion=_ccAssertion - In the implementation block
@property (assign,nonatomic) BOOL hasEnableCMAS; 
@property (assign,nonatomic) unsigned enableCMAS;                                //@synthesize enableCMAS=_enableCMAS - In the implementation block
@property (assign,nonatomic) BOOL hasEnableTelephony; 
@property (assign,nonatomic) unsigned enableTelephony;                           //@synthesize enableTelephony=_enableTelephony - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRssi; 
@property (assign,nonatomic) int wifiRssi;                                       //@synthesize wifiRssi=_wifiRssi - In the implementation block
@property (assign,nonatomic) BOOL hasBtRssi; 
@property (assign,nonatomic) int btRssi;                                         //@synthesize btRssi=_btRssi - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)hasBundleID;
-(void)setBtRssi:(int)arg1 ;
-(void)setHasBtRssi:(BOOL)arg1 ;
-(BOOL)hasBtRssi;
-(int)btRssi;
-(void)setWifiRssi:(int)arg1 ;
-(void)setHasWifiRssi:(BOOL)arg1 ;
-(BOOL)hasWifiRssi;
-(int)wifiRssi;
-(void)setSiriApp:(unsigned)arg1 ;
-(void)setHasSiriApp:(BOOL)arg1 ;
-(BOOL)hasSiriApp;
-(void)setIsTriggeredByProximityChange:(unsigned)arg1 ;
-(void)setHasIsTriggeredByProximityChange:(BOOL)arg1 ;
-(BOOL)hasIsTriggeredByProximityChange;
-(void)setOldLinkState:(unsigned)arg1 ;
-(void)setHasOldLinkState:(BOOL)arg1 ;
-(BOOL)hasOldLinkState;
-(void)setNewLinkState:(unsigned)arg1 ;
-(void)setHasNewLinkState:(BOOL)arg1 ;
-(BOOL)hasNewLinkState;
-(void)setWifiProximity:(unsigned)arg1 ;
-(void)setHasWifiProximity:(BOOL)arg1 ;
-(BOOL)hasWifiProximity;
-(void)setCcAssertion:(unsigned)arg1 ;
-(void)setHasCcAssertion:(BOOL)arg1 ;
-(BOOL)hasCcAssertion;
-(void)setEnableCMAS:(unsigned)arg1 ;
-(void)setHasEnableCMAS:(BOOL)arg1 ;
-(BOOL)hasEnableCMAS;
-(void)setEnableTelephony:(unsigned)arg1 ;
-(void)setHasEnableTelephony:(BOOL)arg1 ;
-(BOOL)hasEnableTelephony;
-(unsigned)siriApp;
-(unsigned)isTriggeredByProximityChange;
-(unsigned)oldLinkState;
-(unsigned)newLinkState;
-(unsigned)wifiProximity;
-(unsigned)ccAssertion;
-(unsigned)enableCMAS;
-(unsigned)enableTelephony;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)bundleID;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

