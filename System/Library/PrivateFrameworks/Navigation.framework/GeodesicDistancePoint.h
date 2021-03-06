/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface GeodesicDistancePoint : NSObject {

	NSDate* _date;
	double _geodesicDistance;

}

@property (nonatomic,retain) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) double geodesicDistance;                    //@synthesize geodesicDistance=_geodesicDistance - In the implementation block
@property (readonly) double timeIntervalSinceReferenceDate; 
-(double)geodesicDistance;
-(id)initWithDate:(id)arg1 geodesicDistance:(double)arg2 ;
-(void)setGeodesicDistance:(double)arg1 ;
-(id)description;
-(NSDate *)date;
-(double)timeIntervalSinceReferenceDate;
-(void)setDate:(NSDate *)arg1 ;
@end

