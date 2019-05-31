/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@protocol MTLBuffer;
@interface MPSMatrixNeuronGradient : MPSMatrixBinaryKernel {

	id<MTLBuffer> neuronAParamBuf;
	int _neuronType;
	float _neuronA;
	float _neuronB;
	float _neuronC;
	unsigned long long _sourceNumberOfFeatureVectors;
	unsigned long long _sourceInputFeatureChannels;
	double _alpha;

}

@property (assign,nonatomic) int neuronType;                                               //@synthesize neuronType=_neuronType - In the implementation block
@property (assign,nonatomic) float neuronA;                                                //@synthesize neuronA=_neuronA - In the implementation block
@property (assign,nonatomic) float neuronB;                                                //@synthesize neuronB=_neuronB - In the implementation block
@property (assign,nonatomic) float neuronC;                                                //@synthesize neuronC=_neuronC - In the implementation block
@property (assign,nonatomic) unsigned long long sourceNumberOfFeatureVectors;              //@synthesize sourceNumberOfFeatureVectors=_sourceNumberOfFeatureVectors - In the implementation block
@property (assign,nonatomic) unsigned long long sourceInputFeatureChannels;                //@synthesize sourceInputFeatureChannels=_sourceInputFeatureChannels - In the implementation block
@property (assign,nonatomic) double alpha;                                                 //@synthesize alpha=_alpha - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)sourceNumberOfFeatureVectors;
-(void)setSourceNumberOfFeatureVectors:(unsigned long long)arg1 ;
-(unsigned long long)sourceInputFeatureChannels;
-(void)setSourceInputFeatureChannels:(unsigned long long)arg1 ;
-(int)neuronType;
-(float)neuronParameterA;
-(float)neuronParameterB;
-(float)neuronParameterC;
-(void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 parameterC:(float)arg4 ;
-(float)neuronA;
-(void)setNeuronA:(float)arg1 ;
-(float)neuronB;
-(void)setNeuronB:(float)arg1 ;
-(float)neuronC;
-(void)setNeuronC:(float)arg1 ;
-(void)setNeuronToPReLUWithParametersA:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 inputMatrix:(id)arg3 biasVector:(id)arg4 resultGradientForDataMatrix:(id)arg5 resultGradientForBiasVector:(id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setNeuronType:(int)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(double)alpha;
@end

