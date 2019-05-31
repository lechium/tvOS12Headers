/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNPoolingNode : MPSNNFilterNode {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned long long _strideInPixelsX;
	unsigned long long _strideInPixelsY;

}

@property (nonatomic,readonly) unsigned long long kernelWidth;                  //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelHeight;                 //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long strideInPixelsX;              //@synthesize strideInPixelsX=_strideInPixelsX - In the implementation block
@property (nonatomic,readonly) unsigned long long strideInPixelsY;              //@synthesize strideInPixelsY=_strideInPixelsY - In the implementation block
+(id)nodeWithSource:(id)arg1 filterSize:(unsigned long long)arg2 ;
+(id)nodeWithSource:(id)arg1 filterSize:(unsigned long long)arg2 stride:(unsigned long long)arg3 ;
-(FilterGraphNode*)newFilterNode;
-(unsigned long long)kernelHeight;
-(unsigned long long)kernelWidth;
-(unsigned long long)strideInPixelsX;
-(unsigned long long)strideInPixelsY;
-(id)initWithSource:(id)arg1 filterSize:(unsigned long long)arg2 ;
-(id)initWithSource:(id)arg1 filterSize:(unsigned long long)arg2 stride:(unsigned long long)arg3 ;
-(id)initWithSource:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5 ;
@end

