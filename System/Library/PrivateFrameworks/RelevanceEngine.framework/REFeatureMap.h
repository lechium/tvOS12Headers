/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>
#import <libobjc.A.dylib/REIndentedDescription.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSDictionary, NSString;

@interface REFeatureMap : NSObject <MLFeatureProvider, REIndentedDescription, NSCopying> {

	unsigned long long _hash;
	unsigned long long* _values;
	NSDictionary* _indices;

}

@property (nonatomic,readonly) unsigned long long featureCount; 
@property (nonatomic,readonly) NSSet * featureNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFeatureName;
-(NSSet *)featureNames;
-(unsigned long long)featureCount;
-(unsigned long long)_count;
-(id)valueForFeature:(id)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(id)descriptionWithIndent:(unsigned long long)arg1 ;
-(BOOL)hasValueForFeature:(id)arg1 ;
-(void)setValue:(id)arg1 forFeature:(id)arg2 ;
-(void)enumerateFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithFeatureMap:(id)arg1 ;
-(void)removeValueForFeature:(id)arg1 ;
-(void)enumerateBoolFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateInt64FeaturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDoubleFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateStringFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEmptyFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateInt64FeaturesUsingIndexedBlock:(/*^block*/id)arg1 emptyFeatureBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

