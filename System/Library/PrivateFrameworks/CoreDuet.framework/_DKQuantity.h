/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKObject.h>
#import <libobjc.A.dylib/_DKHasComparableValue.h>
#import <libobjc.A.dylib/_DKHasPrimaryValue.h>
#import <libobjc.A.dylib/_DKHasObjectType.h>

@class _DKQuantityType, NSString;

@interface _DKQuantity : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType> {

	double _doubleValue;
	_DKQuantityType* _quantityType;

}

@property (assign) double doubleValue;                              //@synthesize doubleValue=_doubleValue - In the implementation block
@property (retain) _DKQuantityType * quantityType;                  //@synthesize quantityType=_quantityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fromPBCodable:(id)arg1 ;
+(id)quantityWithDouble:(double)arg1 type:(id)arg2 ;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(id)entityName;
+(BOOL)supportsSecureCoding;
-(void)setDoubleValue:(double)arg1 ;
-(long long)compareValue:(id)arg1 ;
-(id)primaryValue;
-(id)objectType;
-(id)toPBCodable;
-(_DKQuantityType *)quantityType;
-(id)initWithDouble:(double)arg1 type:(id)arg2 ;
-(void)setQuantityType:(_DKQuantityType *)arg1 ;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(long long)typeCode;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)stringValue;
-(double)doubleValue;
@end

