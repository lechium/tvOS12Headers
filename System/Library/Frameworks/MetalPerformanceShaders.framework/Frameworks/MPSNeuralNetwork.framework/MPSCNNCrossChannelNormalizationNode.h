/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNNormalizationNode.h>

@interface MPSCNNCrossChannelNormalizationNode : MPSCNNNormalizationNode {

	unsigned long long _kernelSizeInFeatureChannels;

}

@property (assign,nonatomic) unsigned long long kernelSizeInFeatureChannels;              //@synthesize kernelSizeInFeatureChannels=_kernelSizeInFeatureChannels - In the implementation block
+(id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
-(unsigned long long)kernelSizeInFeatureChannels;
-(void)setKernelSizeInFeatureChannels:(unsigned long long)arg1 ;
-(id)initWithSource:(id)arg1 ;
@end

