/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>

@class REFeature, NSString;

@interface _REValueRuleCondition : RECondition {

	BOOL _allowsEmptyValueForFeature;
	REFeature* _feature;
	long long _relation;
	id _value;
	unsigned long long _type;

}

@property (nonatomic,readonly) REFeature * feature;                  //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) long long relation;                   //@synthesize relation=_relation - In the implementation block
@property (nonatomic,readonly) id value;                             //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) float floatValue; 
@property (nonatomic,readonly) long long integerValue; 
@property (nonatomic,readonly) BOOL boolValue; 
-(REFeature *)feature;
-(id)descriptionWithIndent:(unsigned long long)arg1 ;
-(id)_dependentFeatures;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 ;
-(id)_inflectionFeatureValuePairs;
-(id)initWithFeature:(id)arg1 relation:(long long)arg2 value:(id)arg3 type:(unsigned long long)arg4 ;
-(id)_featureValue;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)boolValue;
-(long long)integerValue;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(float)floatValue;
-(unsigned long long)type;
-(long long)relation;
-(id)value;
@end
