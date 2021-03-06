/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REFeatureTransformer.h>

@class REFeatureValue;

@interface _REBinaryFeatureTransformer : REFeatureTransformer {

	REFeatureValue* _threshold;

}
-(long long)_bitCount;
-(unsigned long long)_featureCount;
-(unsigned long long)_outputType;
-(id)_transform:(id)arg1 ;
-(BOOL)_validateWithFeatures:(id)arg1 ;
-(id)initWithThreshold:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

