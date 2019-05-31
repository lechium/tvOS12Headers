/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSCNNArithmetic : MPSCNNBinaryKernel {

	float _primaryScale;
	float _secondaryScale;
	float _bias;
	float _minimumValue;
	float _maximumValue;
	unsigned long long _primaryStrideInFeatureChannels;
	unsigned long long _secondaryStrideInFeatureChannels;
	int _arithmeticType;

}

@property (assign,nonatomic) float primaryScale;                                               //@synthesize primaryScale=_primaryScale - In the implementation block
@property (assign,nonatomic) float secondaryScale;                                             //@synthesize secondaryScale=_secondaryScale - In the implementation block
@property (assign,nonatomic) float bias;                                                       //@synthesize bias=_bias - In the implementation block
@property (assign,nonatomic) unsigned long long primaryStrideInFeatureChannels;                //@synthesize primaryStrideInFeatureChannels=_primaryStrideInFeatureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryStrideInFeatureChannels;              //@synthesize secondaryStrideInFeatureChannels=_secondaryStrideInFeatureChannels - In the implementation block
@property (assign,nonatomic) float minimumValue;                                               //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) float maximumValue;                                               //@synthesize maximumValue=_maximumValue - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(SCD_Struct_MP1*)arg4 secondaryOffset:(SCD_Struct_MP1*)arg5 kernelOffset:(SCD_Struct_MP1*)arg6 ;
-(id)privateResultStateForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 commandBuffer:(id)arg5 isTemporary:(BOOL)arg6 ;
-(void)setPrimaryStrideInPixelsX:(unsigned long long)arg1 ;
-(void)setPrimaryStrideInPixelsY:(unsigned long long)arg1 ;
-(void)setPrimaryStrideInFeatureChannels:(unsigned long long)arg1 ;
-(void)setSecondaryStrideInPixelsX:(unsigned long long)arg1 ;
-(void)setSecondaryStrideInPixelsY:(unsigned long long)arg1 ;
-(void)setSecondaryStrideInFeatureChannels:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 arithmeticType:(int)arg2 ;
-(id)resultStateForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 destinationImage:(id)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationState:(id)arg4 destinationImage:(id)arg5 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(NSArray*)arg2 secondaryImages:(NSArray*)arg3 destinationStates:(NSArray*)arg4 destinationImages:(NSArray*)arg5 ;
-(float)primaryScale;
-(void)setPrimaryScale:(float)arg1 ;
-(float)secondaryScale;
-(void)setSecondaryScale:(float)arg1 ;
-(unsigned long long)primaryStrideInFeatureChannels;
-(unsigned long long)secondaryStrideInFeatureChannels;
-(void)setBias:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)maxBatchSize;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(float)bias;
-(void)setMinimumValue:(float)arg1 ;
-(void)setMaximumValue:(float)arg1 ;
-(float)minimumValue;
-(float)maximumValue;
@end

