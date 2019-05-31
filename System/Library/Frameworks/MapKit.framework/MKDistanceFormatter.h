/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface MKDistanceFormatter : NSFormatter {

	NSLocale* _locale;
	unsigned long long _units;
	unsigned long long _unitStyle;

}

@property (nonatomic,copy) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) unsigned long long units;                  //@synthesize units=_units - In the implementation block
@property (assign,nonatomic) unsigned long long unitStyle;              //@synthesize unitStyle=_unitStyle - In the implementation block
-(BOOL)_useMetric;
-(id)stringFromDistance:(double)arg1 ;
-(double)distanceFromString:(id)arg1 ;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(unsigned long long)unitStyle;
-(void)setUnitStyle:(unsigned long long)arg1 ;
-(unsigned long long)units;
-(void)setUnits:(unsigned long long)arg1 ;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
@end

