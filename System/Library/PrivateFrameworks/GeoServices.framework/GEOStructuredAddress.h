/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray;

@interface GEOStructuredAddress : PBCodable <GEOURLSerializable, NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE74* _geoIds;
	NSString* _administrativeArea;
	NSString* _administrativeAreaCode;
	NSMutableArray* _areaOfInterests;
	NSString* _country;
	NSString* _countryCode;
	NSMutableArray* _dependentLocalitys;
	NSString* _fullThoroughfare;
	NSString* _inlandWater;
	NSString* _locality;
	NSString* _ocean;
	NSString* _postCode;
	NSString* _postCodeExtension;
	NSString* _postCodeFull;
	NSString* _premise;
	NSString* _premises;
	NSString* _subAdministrativeArea;
	NSString* _subLocality;
	NSMutableArray* _subPremises;
	NSString* _subThoroughfare;
	NSString* _thoroughfare;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasCountry; 
@property (nonatomic,retain) NSString * country;                               //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                           //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasAdministrativeArea; 
@property (nonatomic,retain) NSString * administrativeArea;                    //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,readonly) BOOL hasAdministrativeAreaCode; 
@property (nonatomic,retain) NSString * administrativeAreaCode;                //@synthesize administrativeAreaCode=_administrativeAreaCode - In the implementation block
@property (nonatomic,readonly) BOOL hasSubAdministrativeArea; 
@property (nonatomic,retain) NSString * subAdministrativeArea;                 //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,readonly) BOOL hasLocality; 
@property (nonatomic,retain) NSString * locality;                              //@synthesize locality=_locality - In the implementation block
@property (nonatomic,readonly) BOOL hasPostCode; 
@property (nonatomic,retain) NSString * postCode;                              //@synthesize postCode=_postCode - In the implementation block
@property (nonatomic,readonly) BOOL hasSubLocality; 
@property (nonatomic,retain) NSString * subLocality;                           //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,readonly) BOOL hasPremises; 
@property (nonatomic,retain) NSString * premises;                              //@synthesize premises=_premises - In the implementation block
@property (nonatomic,readonly) BOOL hasThoroughfare; 
@property (nonatomic,retain) NSString * thoroughfare;                          //@synthesize thoroughfare=_thoroughfare - In the implementation block
@property (nonatomic,readonly) BOOL hasSubThoroughfare; 
@property (nonatomic,retain) NSString * subThoroughfare;                       //@synthesize subThoroughfare=_subThoroughfare - In the implementation block
@property (nonatomic,readonly) BOOL hasFullThoroughfare; 
@property (nonatomic,retain) NSString * fullThoroughfare;                      //@synthesize fullThoroughfare=_fullThoroughfare - In the implementation block
@property (nonatomic,readonly) BOOL hasPostCodeExtension; 
@property (nonatomic,retain) NSString * postCodeExtension;                     //@synthesize postCodeExtension=_postCodeExtension - In the implementation block
@property (nonatomic,retain) NSMutableArray * areaOfInterests;                 //@synthesize areaOfInterests=_areaOfInterests - In the implementation block
@property (nonatomic,readonly) BOOL hasInlandWater; 
@property (nonatomic,retain) NSString * inlandWater;                           //@synthesize inlandWater=_inlandWater - In the implementation block
@property (nonatomic,readonly) BOOL hasOcean; 
@property (nonatomic,retain) NSString * ocean;                                 //@synthesize ocean=_ocean - In the implementation block
@property (nonatomic,retain) NSMutableArray * dependentLocalitys;              //@synthesize dependentLocalitys=_dependentLocalitys - In the implementation block
@property (nonatomic,readonly) BOOL hasPremise; 
@property (nonatomic,retain) NSString * premise;                               //@synthesize premise=_premise - In the implementation block
@property (nonatomic,retain) NSMutableArray * subPremises;                     //@synthesize subPremises=_subPremises - In the implementation block
@property (nonatomic,readonly) BOOL hasPostCodeFull; 
@property (nonatomic,retain) NSString * postCodeFull;                          //@synthesize postCodeFull=_postCodeFull - In the implementation block
@property (nonatomic,readonly) unsigned long long geoIdsCount; 
@property (nonatomic,readonly) long long* geoIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)areaOfInterestType;
+(Class)dependentLocalityType;
+(Class)subPremiseType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSString *)countryCode;
-(unsigned long long)geoIdsCount;
-(void)clearGeoIds;
-(long long*)geoIds;
-(void)setGeoIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(id)urlRepresentation;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(void)setPostCode:(NSString *)arg1 ;
-(void)setFullThoroughfare:(NSString *)arg1 ;
-(BOOL)hasCountryCode;
-(BOOL)hasAdministrativeAreaCode;
-(NSString *)administrativeAreaCode;
-(BOOL)hasAdministrativeArea;
-(NSString *)administrativeArea;
-(BOOL)hasLocality;
-(NSString *)locality;
-(BOOL)hasPostCode;
-(NSString *)postCode;
-(BOOL)hasFullThoroughfare;
-(NSString *)fullThoroughfare;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(NSMutableArray *)areaOfInterests;
-(void)addAreaOfInterest:(id)arg1 ;
-(void)addDependentLocality:(id)arg1 ;
-(void)addSubPremise:(id)arg1 ;
-(void)setAdministrativeAreaCode:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setPremises:(NSString *)arg1 ;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(void)setPostCodeExtension:(NSString *)arg1 ;
-(unsigned long long)areaOfInterestsCount;
-(void)clearAreaOfInterests;
-(id)areaOfInterestAtIndex:(unsigned long long)arg1 ;
-(void)setInlandWater:(NSString *)arg1 ;
-(void)setOcean:(NSString *)arg1 ;
-(unsigned long long)dependentLocalitysCount;
-(void)clearDependentLocalitys;
-(id)dependentLocalityAtIndex:(unsigned long long)arg1 ;
-(void)setPremise:(NSString *)arg1 ;
-(unsigned long long)subPremisesCount;
-(void)clearSubPremises;
-(id)subPremiseAtIndex:(unsigned long long)arg1 ;
-(void)setPostCodeFull:(NSString *)arg1 ;
-(long long)geoIdAtIndex:(unsigned long long)arg1 ;
-(void)addGeoId:(long long)arg1 ;
-(BOOL)hasCountry;
-(BOOL)hasSubAdministrativeArea;
-(BOOL)hasSubLocality;
-(BOOL)hasPremises;
-(BOOL)hasThoroughfare;
-(BOOL)hasSubThoroughfare;
-(BOOL)hasPostCodeExtension;
-(BOOL)hasInlandWater;
-(BOOL)hasOcean;
-(BOOL)hasPremise;
-(BOOL)hasPostCodeFull;
-(NSString *)subAdministrativeArea;
-(NSString *)subLocality;
-(NSString *)premises;
-(NSString *)thoroughfare;
-(NSString *)subThoroughfare;
-(NSString *)postCodeExtension;
-(void)setAreaOfInterests:(NSMutableArray *)arg1 ;
-(NSString *)inlandWater;
-(NSString *)ocean;
-(NSMutableArray *)dependentLocalitys;
-(void)setDependentLocalitys:(NSMutableArray *)arg1 ;
-(NSString *)premise;
-(NSMutableArray *)subPremises;
-(void)setSubPremises:(NSMutableArray *)arg1 ;
-(NSString *)postCodeFull;
-(id)initWithAddressDictionary:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
