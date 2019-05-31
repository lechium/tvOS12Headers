/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionNode.h>

@interface MPSCNNFullyConnectedNode : MPSCNNConvolutionNode
+(id)nodeWithSource:(id)arg1 weights:(id)arg2 ;
-(FilterGraphNode*)newFilterNode;
-(id)initWithSource:(id)arg1 weights:(id)arg2 ;
@end

