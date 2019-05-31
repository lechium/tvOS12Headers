/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray, NSDateInterval;

@interface GEOSpatialEventLookupParameters : NSObject {

	SCD_Struct_GE30 _coordinate;
	double _radius;
	NSArray* _categories;
	NSDateInterval* _dateInterval;
	int _maxResultCount;

}

@property (nonatomic,readonly) SCD_Struct_GE30 coordinate;                 //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                              //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) NSArray * categories;                       //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) int maxResultCount;                         //@synthesize maxResultCount=_maxResultCount - In the implementation block
-(SCD_Struct_GE30)coordinate;
-(int)maxResultCount;
-(id)initWithCoordinate:(SCD_Struct_GE30)arg1 radius:(double)arg2 categories:(id)arg3 dateInterval:(id)arg4 maxResultCount:(int)arg5 ;
-(id)initWithCoordinate:(SCD_Struct_GE30)arg1 radius:(double)arg2 categories:(id)arg3 dateInterval:(id)arg4 ;
-(NSDateInterval *)dateInterval;
-(id)init;
-(double)radius;
-(NSArray *)categories;
@end

