/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ADSegmentUpdateRequest : PBRequest <NSCopying> {

	SCD_Struct_AD7* _accountStates;
	SCD_Struct_AD7* _accountTypes;
	SCD_Struct_AD7* _deviceModes;
	double _iTunesRefreshTime;
	double _updateSentTime;
	NSString* _advertisingIdentifier;
	int _advertisingIdentifierMonthResetCount;
	NSData* _dPID;
	NSData* _iAdID;
	NSString* _localeIdentifier;
	NSString* _osVersionAndBuild;
	NSString* _segmentInfo;
	float _timezone;
	BOOL _isFirstPartyIdentifier;
	SCD_Struct_AD8 _has;

}

@property (nonatomic,readonly) BOOL hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                                            //@synthesize iAdID=_iAdID - In the implementation block
@property (nonatomic,readonly) BOOL hasSegmentInfo; 
@property (nonatomic,retain) NSString * segmentInfo;                                    //@synthesize segmentInfo=_segmentInfo - In the implementation block
@property (assign,nonatomic) BOOL hasIsFirstPartyIdentifier; 
@property (assign,nonatomic) BOOL isFirstPartyIdentifier;                               //@synthesize isFirstPartyIdentifier=_isFirstPartyIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAdvertisingIdentifier; 
@property (nonatomic,retain) NSString * advertisingIdentifier;                          //@synthesize advertisingIdentifier=_advertisingIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasITunesRefreshTime; 
@property (assign,nonatomic) double iTunesRefreshTime;                                  //@synthesize iTunesRefreshTime=_iTunesRefreshTime - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateSentTime; 
@property (assign,nonatomic) double updateSentTime;                                     //@synthesize updateSentTime=_updateSentTime - In the implementation block
@property (assign,nonatomic) BOOL hasTimezone; 
@property (assign,nonatomic) float timezone;                                            //@synthesize timezone=_timezone - In the implementation block
@property (assign,nonatomic) BOOL hasAdvertisingIdentifierMonthResetCount; 
@property (assign,nonatomic) int advertisingIdentifierMonthResetCount;                  //@synthesize advertisingIdentifierMonthResetCount=_advertisingIdentifierMonthResetCount - In the implementation block
@property (nonatomic,readonly) BOOL hasOsVersionAndBuild; 
@property (nonatomic,retain) NSString * osVersionAndBuild;                              //@synthesize osVersionAndBuild=_osVersionAndBuild - In the implementation block
@property (nonatomic,readonly) BOOL hasLocaleIdentifier; 
@property (nonatomic,retain) NSString * localeIdentifier;                               //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDPID; 
@property (nonatomic,retain) NSData * dPID;                                             //@synthesize dPID=_dPID - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceModesCount; 
@property (nonatomic,readonly) int* deviceModes; 
@property (nonatomic,readonly) unsigned long long accountTypesCount; 
@property (nonatomic,readonly) int* accountTypes; 
@property (nonatomic,readonly) unsigned long long accountStatesCount; 
@property (nonatomic,readonly) int* accountStates; 
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTimezone:(float)arg1 ;
-(BOOL)hasTimezone;
-(float)timezone;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(NSString *)advertisingIdentifier;
-(void)setIAdID:(NSData *)arg1 ;
-(void)setDPID:(NSData *)arg1 ;
-(BOOL)hasIAdID;
-(BOOL)hasDPID;
-(NSData *)iAdID;
-(NSData *)dPID;
-(void)setHasTimezone:(BOOL)arg1 ;
-(void)setSegmentInfo:(NSString *)arg1 ;
-(void)setAdvertisingIdentifier:(NSString *)arg1 ;
-(void)setOsVersionAndBuild:(NSString *)arg1 ;
-(unsigned long long)deviceModesCount;
-(void)clearDeviceModes;
-(int)deviceModeAtIndex:(unsigned long long)arg1 ;
-(void)addDeviceMode:(int)arg1 ;
-(unsigned long long)accountTypesCount;
-(void)clearAccountTypes;
-(int)accountTypeAtIndex:(unsigned long long)arg1 ;
-(void)addAccountType:(int)arg1 ;
-(unsigned long long)accountStatesCount;
-(void)clearAccountStates;
-(int)accountStateAtIndex:(unsigned long long)arg1 ;
-(void)addAccountState:(int)arg1 ;
-(BOOL)hasSegmentInfo;
-(void)setIsFirstPartyIdentifier:(BOOL)arg1 ;
-(void)setHasIsFirstPartyIdentifier:(BOOL)arg1 ;
-(BOOL)hasIsFirstPartyIdentifier;
-(BOOL)hasAdvertisingIdentifier;
-(void)setITunesRefreshTime:(double)arg1 ;
-(void)setHasITunesRefreshTime:(BOOL)arg1 ;
-(BOOL)hasITunesRefreshTime;
-(void)setUpdateSentTime:(double)arg1 ;
-(void)setHasUpdateSentTime:(BOOL)arg1 ;
-(BOOL)hasUpdateSentTime;
-(void)setAdvertisingIdentifierMonthResetCount:(int)arg1 ;
-(void)setHasAdvertisingIdentifierMonthResetCount:(BOOL)arg1 ;
-(BOOL)hasAdvertisingIdentifierMonthResetCount;
-(BOOL)hasOsVersionAndBuild;
-(BOOL)hasLocaleIdentifier;
-(int*)deviceModes;
-(void)setDeviceModes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)deviceModesAsString:(int)arg1 ;
-(int)StringAsDeviceModes:(id)arg1 ;
-(int*)accountTypes;
-(void)setAccountTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)accountTypesAsString:(int)arg1 ;
-(int)StringAsAccountTypes:(id)arg1 ;
-(int*)accountStates;
-(void)setAccountStates:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)accountStatesAsString:(int)arg1 ;
-(int)StringAsAccountStates:(id)arg1 ;
-(NSString *)segmentInfo;
-(BOOL)isFirstPartyIdentifier;
-(double)iTunesRefreshTime;
-(double)updateSentTime;
-(int)advertisingIdentifierMonthResetCount;
-(NSString *)osVersionAndBuild;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localeIdentifier;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

