/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface REFeatureValue : NSObject <NSCopying>

@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,readonly) unsigned long long int64Value; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
+(id)featureValueWithInt64:(long long)arg1 ;
+(id)nullValueForFeature:(id)arg1 ;
+(id)featureValueWithBool:(BOOL)arg1 ;
+(id)featureValueWithDouble:(double)arg1 ;
+(id)featureValueWithString:(id)arg1 ;
-(unsigned long long)int64Value;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)boolValue;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(unsigned long long)type;
-(double)doubleValue;
@end

