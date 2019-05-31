/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/HFColorPrimitive.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HFTemperatureColor : NSObject <HFColorPrimitive, NSCopying> {

	float _temperatureInMired;

}

@property (nonatomic,readonly) float temperatureInMired;               //@synthesize temperatureInMired=_temperatureInMired - In the implementation block
@property (nonatomic,readonly) float temperatureInKelvin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)hf_RGBColorRepresentation;
-(id)hf_temperatureColorRepresentation;
-(id)initWithTemperatureInKelvin:(float)arg1 ;
-(float)temperatureInKelvin;
-(float)temperatureInMired;
-(id)initWithTemperatureInMired:(float)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

