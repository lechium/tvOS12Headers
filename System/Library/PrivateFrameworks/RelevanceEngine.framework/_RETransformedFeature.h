/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeature.h>
#import <libobjc.A.dylib/REIndentedDescription.h>

@class NSString, REFeatureSet, REFeatureTransformer;

@interface _RETransformedFeature : REFeature <REIndentedDescription> {

	NSString* _name;
	REFeatureSet* _rootFeatures;
	REFeatureSet* _features;
	REFeatureTransformer* _transformer;

}

@property (nonatomic,readonly) REFeatureSet * features;                         //@synthesize features=_features - In the implementation block
@property (nonatomic,readonly) REFeatureTransformer * transformer;              //@synthesize transformer=_transformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)featureType;
-(REFeatureSet *)features;
-(id)descriptionWithIndent:(unsigned long long)arg1 ;
-(long long)_bitCount;
-(id)_rootFeatures;
-(id)_dependentFeatures;
-(void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2 ;
-(id)initWithTransformer:(id)arg1 features:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)name;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(REFeatureTransformer *)transformer;
@end

