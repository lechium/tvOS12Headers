/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface WFAggregateForecastResponse : WFResponse <NSCopying, NSSecureCoding> {

	BOOL _responseWasFromCache;
	NSArray* _forecasts;

}

@property (nonatomic,copy) NSArray * forecasts;                      //@synthesize forecasts=_forecasts - In the implementation block
@property (assign,nonatomic) BOOL responseWasFromCache;              //@synthesize responseWasFromCache=_responseWasFromCache - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setForecasts:(NSArray *)arg1 ;
-(void)setResponseWasFromCache:(BOOL)arg1 ;
-(NSArray *)forecasts;
-(BOOL)responseWasFromCache;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
