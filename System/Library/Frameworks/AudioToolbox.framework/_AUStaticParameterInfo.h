/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface _AUStaticParameterInfo : NSObject <NSSecureCoding> {

	float _minValue;
	float _maxValue;
	unsigned _unit;
	unsigned _flags;
	unsigned _clumpID;
	NSString* _unitName;
	NSArray* _valueStrings;

}

@property (assign,nonatomic) float minValue;                      //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) float maxValue;                      //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) unsigned unit;                       //@synthesize unit=_unit - In the implementation block
@property (nonatomic,retain) NSString * unitName;                 //@synthesize unitName=_unitName - In the implementation block
@property (assign,nonatomic) unsigned flags;                      //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSArray * valueStrings;              //@synthesize valueStrings=_valueStrings - In the implementation block
@property (assign,nonatomic) unsigned clumpID;                    //@synthesize clumpID=_clumpID - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)unit;
-(NSString *)unitName;
-(NSArray *)valueStrings;
-(void)setUnitName:(NSString *)arg1 ;
-(void)setValueStrings:(NSArray *)arg1 ;
-(unsigned)clumpID;
-(void)setClumpID:(unsigned)arg1 ;
-(unsigned)flags;
-(void)setMaxValue:(float)arg1 ;
-(float)maxValue;
-(void)setUnit:(unsigned)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(float)minValue;
-(void)setMinValue:(float)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
