/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSSet;


@protocol GEOTransitDepartureSequence <NSObject>
@property (nonatomic,readonly) id<GEOTransitLine> line; 
@property (nonatomic,readonly) BOOL isLowFrequency; 
@property (nonatomic,readonly) long long displayStyle; 
@property (nonatomic,readonly) NSString * direction; 
@property (nonatomic,readonly) NSString * headsign; 
@property (nonatomic,readonly) NSArray * operatingHours; 
@property (nonatomic,readonly) NSSet * nextStopIDs; 
@required
-(NSArray *)operatingHours;
-(NSString *)headsign;
-(long long)displayStyle;
-(NSSet *)nextStopIDs;
-(id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2;
-(id)firstDepartureValidForDate:(id)arg1;
-(BOOL)hasFrequencyAtDate:(id)arg1;
-(BOOL)isLowFrequency;
-(id)firstDepartureOnOrAfterDate:(id)arg1;
-(id)firstDepartureAfterDate:(id)arg1;
-(unsigned long long)numberOfDeparturesAfterDate:(id)arg1;
-(id)firstDepartureFrequencyOnOrAfterDate:(id)arg1;
-(id)firstOpenOperatingDateOnOrAfterDate:(id)arg1;
-(BOOL)isValidForDate:(id)arg1 inTimeZone:(id)arg2;
-(id)departuresValidForDate:(id)arg1;
-(double)frequencyForSortingAtDate:(id)arg1;
-(id)frequencyToDescribeAtDate:(id)arg1;
-(BOOL)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2;
-(NSString *)direction;
-(id<GEOTransitLine>)line;

@end

