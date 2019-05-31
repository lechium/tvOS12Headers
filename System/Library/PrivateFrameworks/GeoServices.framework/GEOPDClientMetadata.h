/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOABSecondPartyPlaceRequestClientMetaData, GEOAdditionalEnabledMarkets, NSMutableArray, NSString, GEOLocation;

@interface GEOPDClientMetadata : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE2* _knownClientResolvedTypeDeprecateds;
	SCD_Struct_GE2* _knownClientResolvedTypes;
	GEOABSecondPartyPlaceRequestClientMetaData* _abClientMetadata;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	NSMutableArray* _businessChatPreflightIdentifiers;
	unsigned _dayOfWeek;
	NSString* _debugApiKey;
	NSString* _deviceCountryCode;
	NSString* _deviceDisplayLanguage;
	GEOLocation* _deviceExtendedLocation;
	NSMutableArray* _deviceHistoricalLocations;
	NSString* _deviceKeyboardLanguage;
	NSString* _deviceSpokenLanguage;
	unsigned _hourOfDay;
	int _requiredVersion;
	int _resultListAttributionSupport;
	unsigned _timeSinceMapEnteredForeground;
	BOOL _enablePreflightVenues;
	SCD_Struct_GE40 _has;

}

@property (nonatomic,readonly) BOOL hasAbClientMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * abClientMetadata; 
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode;                                               //@synthesize deviceCountryCode=_deviceCountryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceDisplayLanguage; 
@property (nonatomic,retain) NSString * deviceDisplayLanguage;                                           //@synthesize deviceDisplayLanguage=_deviceDisplayLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceKeyboardLanguage; 
@property (nonatomic,retain) NSString * deviceKeyboardLanguage;                                          //@synthesize deviceKeyboardLanguage=_deviceKeyboardLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceSpokenLanguage; 
@property (nonatomic,retain) NSString * deviceSpokenLanguage;                                            //@synthesize deviceSpokenLanguage=_deviceSpokenLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceMapEnteredForeground; 
@property (assign,nonatomic) unsigned timeSinceMapEnteredForeground;                                     //@synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets;                     //@synthesize additionalEnabledMarkets=_additionalEnabledMarkets - In the implementation block
@property (assign,nonatomic) BOOL hasResultListAttributionSupport; 
@property (assign,nonatomic) int resultListAttributionSupport;                                           //@synthesize resultListAttributionSupport=_resultListAttributionSupport - In the implementation block
@property (assign,nonatomic) BOOL hasHourOfDay; 
@property (assign,nonatomic) unsigned hourOfDay;                                                         //@synthesize hourOfDay=_hourOfDay - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) unsigned dayOfWeek;                                                         //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceExtendedLocation; 
@property (nonatomic,retain) GEOLocation * deviceExtendedLocation;                                       //@synthesize deviceExtendedLocation=_deviceExtendedLocation - In the implementation block
@property (nonatomic,retain) NSMutableArray * deviceHistoricalLocations;                                 //@synthesize deviceHistoricalLocations=_deviceHistoricalLocations - In the implementation block
@property (assign,nonatomic) BOOL hasRequiredVersion; 
@property (assign,nonatomic) int requiredVersion;                                                        //@synthesize requiredVersion=_requiredVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDebugApiKey; 
@property (nonatomic,retain) NSString * debugApiKey;                                                     //@synthesize debugApiKey=_debugApiKey - In the implementation block
@property (nonatomic,readonly) unsigned long long knownClientResolvedTypeDeprecatedsCount; 
@property (nonatomic,readonly) int* knownClientResolvedTypeDeprecateds; 
@property (assign,nonatomic) BOOL hasEnablePreflightVenues; 
@property (assign,nonatomic) BOOL enablePreflightVenues;                                                 //@synthesize enablePreflightVenues=_enablePreflightVenues - In the implementation block
@property (nonatomic,readonly) unsigned long long knownClientResolvedTypesCount; 
@property (nonatomic,readonly) int* knownClientResolvedTypes; 
@property (nonatomic,retain) NSMutableArray * businessChatPreflightIdentifiers;                          //@synthesize businessChatPreflightIdentifiers=_businessChatPreflightIdentifiers - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)deviceHistoricalLocationType;
+(Class)businessChatPreflightIdentifierType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasDeviceExtendedLocation;
-(GEOLocation *)deviceExtendedLocation;
-(unsigned long long)deviceHistoricalLocationsCount;
-(NSMutableArray *)deviceHistoricalLocations;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(void)addDeviceHistoricalLocation:(id)arg1 ;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(void)setAbClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(void)clearDeviceHistoricalLocations;
-(id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAdditionalEnabledMarkets;
-(BOOL)hasAbClientMetadata;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(GEOABSecondPartyPlaceRequestClientMetaData *)abClientMetadata;
-(void)setDeviceHistoricalLocations:(NSMutableArray *)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(void)setTimeSinceMapEnteredForeground:(unsigned)arg1 ;
-(void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1 ;
-(BOOL)hasTimeSinceMapEnteredForeground;
-(NSString *)deviceCountryCode;
-(unsigned)timeSinceMapEnteredForeground;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasDayOfWeek;
-(unsigned)dayOfWeek;
-(void)addBusinessChatPreflightIdentifier:(id)arg1 ;
-(void)setDeviceDisplayLanguage:(NSString *)arg1 ;
-(void)setDeviceKeyboardLanguage:(NSString *)arg1 ;
-(void)setDeviceSpokenLanguage:(NSString *)arg1 ;
-(void)setDeviceExtendedLocation:(GEOLocation *)arg1 ;
-(void)setDebugApiKey:(NSString *)arg1 ;
-(unsigned long long)knownClientResolvedTypeDeprecatedsCount;
-(void)clearKnownClientResolvedTypeDeprecateds;
-(int)knownClientResolvedTypeDeprecatedAtIndex:(unsigned long long)arg1 ;
-(void)addKnownClientResolvedTypeDeprecated:(int)arg1 ;
-(unsigned long long)knownClientResolvedTypesCount;
-(void)clearKnownClientResolvedTypes;
-(int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1 ;
-(void)addKnownClientResolvedType:(int)arg1 ;
-(unsigned long long)businessChatPreflightIdentifiersCount;
-(void)clearBusinessChatPreflightIdentifiers;
-(id)businessChatPreflightIdentifierAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDeviceDisplayLanguage;
-(BOOL)hasDeviceKeyboardLanguage;
-(BOOL)hasDeviceSpokenLanguage;
-(int)resultListAttributionSupport;
-(void)setResultListAttributionSupport:(int)arg1 ;
-(void)setHasResultListAttributionSupport:(BOOL)arg1 ;
-(BOOL)hasResultListAttributionSupport;
-(id)resultListAttributionSupportAsString:(int)arg1 ;
-(int)StringAsResultListAttributionSupport:(id)arg1 ;
-(void)setHourOfDay:(unsigned)arg1 ;
-(void)setHasHourOfDay:(BOOL)arg1 ;
-(BOOL)hasHourOfDay;
-(int)requiredVersion;
-(void)setRequiredVersion:(int)arg1 ;
-(void)setHasRequiredVersion:(BOOL)arg1 ;
-(BOOL)hasRequiredVersion;
-(id)requiredVersionAsString:(int)arg1 ;
-(int)StringAsRequiredVersion:(id)arg1 ;
-(BOOL)hasDebugApiKey;
-(int*)knownClientResolvedTypeDeprecateds;
-(void)setKnownClientResolvedTypeDeprecateds:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)knownClientResolvedTypeDeprecatedsAsString:(int)arg1 ;
-(int)StringAsKnownClientResolvedTypeDeprecateds:(id)arg1 ;
-(BOOL)enablePreflightVenues;
-(void)setEnablePreflightVenues:(BOOL)arg1 ;
-(void)setHasEnablePreflightVenues:(BOOL)arg1 ;
-(BOOL)hasEnablePreflightVenues;
-(int*)knownClientResolvedTypes;
-(void)setKnownClientResolvedTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)knownClientResolvedTypesAsString:(int)arg1 ;
-(int)StringAsKnownClientResolvedTypes:(id)arg1 ;
-(NSString *)deviceDisplayLanguage;
-(NSString *)deviceKeyboardLanguage;
-(NSString *)deviceSpokenLanguage;
-(unsigned)hourOfDay;
-(NSString *)debugApiKey;
-(NSMutableArray *)businessChatPreflightIdentifiers;
-(void)setBusinessChatPreflightIdentifiers:(NSMutableArray *)arg1 ;
-(void)clearLocations;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
