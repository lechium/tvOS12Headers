/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SAAceComparable.h>

@class NSNumber, NSString, NSArray, NSData, SADistance;

@interface SALocation : SADomainObject <SAAceComparable>

@property (nonatomic,copy) NSNumber * accuracy; 
@property (nonatomic,copy) NSString * city; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSArray * entryPoints; 
@property (nonatomic,copy) NSData * forwardGeoData; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
@property (nonatomic,copy) NSString * postalCode; 
@property (nonatomic,copy) NSString * regionType; 
@property (nonatomic,retain) SADistance * relativeDistance; 
@property (nonatomic,copy) NSString * stateCode; 
@property (nonatomic,copy) NSString * street; 
@property (nonatomic,copy) NSString * subAdministrativeArea; 
@property (nonatomic,copy) NSString * subLocality; 
@property (nonatomic,copy) NSString * subThoroughfare; 
@property (nonatomic,copy) NSString * thoroughfare; 
@property (nonatomic,copy) NSString * timezoneId; 
@property (nonatomic,copy) NSNumber * travelDistance; 
@property (nonatomic,copy) NSNumber * travelTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)locationWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)location;
-(NSString *)countryCode;
-(void)setTravelTime:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)entryPoints;
-(void)setEntryPoints:(NSArray *)arg1 ;
-(void)setTravelDistance:(NSNumber *)arg1 ;
-(NSNumber *)travelTime;
-(NSNumber *)travelDistance;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)city;
-(void)setCity:(NSString *)arg1 ;
-(NSNumber *)accuracy;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(NSString *)subAdministrativeArea;
-(NSString *)subLocality;
-(NSString *)thoroughfare;
-(NSString *)subThoroughfare;
-(NSString *)street;
-(void)setStreet:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)postalCode;
-(NSString *)regionType;
-(id)encodedClassName;
-(NSString *)timezoneId;
-(void)setTimezoneId:(NSString *)arg1 ;
-(SADistance *)relativeDistance;
-(void)setRelativeDistance:(SADistance *)arg1 ;
-(NSData *)forwardGeoData;
-(void)setForwardGeoData:(NSData *)arg1 ;
-(void)setRegionType:(NSString *)arg1 ;
-(NSString *)stateCode;
-(void)setStateCode:(NSString *)arg1 ;
-(void)setAccuracy:(NSNumber *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end

