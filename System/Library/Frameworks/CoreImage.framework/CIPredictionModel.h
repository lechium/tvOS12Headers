/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, MLModel;

@interface CIPredictionModel : NSObject <MLFeatureProvider> {

	CVBufferRef imageBuffer;
	MLModel* _model;
	CIPredictionModelImageFeatures _inputImageFeatures;
	CIPredictionModelImageFeatures _outputImageFeatures;

}

@property (nonatomic,retain) MLModel * model;                                                 //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) CIPredictionModelImageFeatures inputImageFeatures;               //@synthesize inputImageFeatures=_inputImageFeatures - In the implementation block
@property (assign,nonatomic) CIPredictionModelImageFeatures outputImageFeatures;              //@synthesize outputImageFeatures=_outputImageFeatures - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(BOOL)processInputModel:(id)arg1 ;
-(BOOL)processInputFeatureWithName:(id)arg1 featureDescription:(id)arg2 ;
-(BOOL)processOutputFeatureWithName:(id)arg1 featureDescription:(id)arg2 ;
-(CIPredictionModelImageFeatures)outputImageFeatures;
-(CIPredictionModelImageFeatures)inputImageFeatures;
-(NSSet *)featureNames;
-(CVBufferRef)predictUsingInputBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(void)setInputImageFeatures:(CIPredictionModelImageFeatures)arg1 ;
-(void)setOutputImageFeatures:(CIPredictionModelImageFeatures)arg1 ;
-(void)setModel:(MLModel *)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)dealloc;
-(MLModel *)model;
@end

