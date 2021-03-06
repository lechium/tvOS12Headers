/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSLocale, NSDictionary;

@interface WeatherWindSpeedFormatter : NSFormatter {

	NSLocale* _locale;
	NSDictionary* _directionSubstringAttributes;

}

@property (retain) NSLocale * locale;                                        //@synthesize locale=_locale - In the implementation block
@property (retain) NSDictionary * directionSubstringAttributes;              //@synthesize directionSubstringAttributes=_directionSubstringAttributes - In the implementation block
+(id)convenienceFormatter;
-(id)formattedStringForSpeed:(float)arg1 direction:(float)arg2 ;
-(double)speedByConvertingToUserUnit:(double)arg1 ;
-(id)templateStringForSpeed:(float)arg1 direction:(float)arg2 ;
-(id)stringForWindDirection:(float)arg1 ;
-(NSDictionary *)directionSubstringAttributes;
-(id)stringForWindSpeed:(float)arg1 ;
-(id)fallbackStringForWindSpeed:(float)arg1 ;
-(int)windSpeedUnit;
-(id)fallbackUnitString;
-(id)attributedFormattedStringForSpeed:(float)arg1 direction:(float)arg2 ;
-(id)speedStringByConvertingToUserUnits:(float)arg1 ;
-(void)setDirectionSubstringAttributes:(NSDictionary *)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
@end

