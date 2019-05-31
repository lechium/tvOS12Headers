/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class NSString;

@interface MLNormalizer : MLModel <MLModelSpecificationLoader> {

	int _norm;

}

@property (nonatomic,readonly) int norm;                            //@synthesize norm=_norm - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)inputDescriptionFrom:(id)arg1 outputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3 orderedOutputFeatureNames:(id)arg4 ;
+(id)normFrom:(int)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 ;
+(id)normFrom:(int)arg1 dataTransformerName:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 ;
-(id)initWith:(int)arg1 dataTransformerName:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 configuration:(id)arg7 ;
-(void)computeSingleNorm:(double)arg1 lastValue:(double*)arg2 ;
-(int)norm;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

