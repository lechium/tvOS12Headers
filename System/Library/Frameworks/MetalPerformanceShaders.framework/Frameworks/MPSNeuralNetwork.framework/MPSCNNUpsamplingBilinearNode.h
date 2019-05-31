/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNUpsamplingBilinearNode : MPSNNFilterNode {

	double _scaleFactorX;
	double _scaleFactorY;
	BOOL _alignCorners;

}

@property (nonatomic,readonly) double scaleFactorX;              //@synthesize scaleFactorX=_scaleFactorX - In the implementation block
@property (nonatomic,readonly) double scaleFactorY;              //@synthesize scaleFactorY=_scaleFactorY - In the implementation block
@property (nonatomic,readonly) BOOL alignCorners;                //@synthesize alignCorners=_alignCorners - In the implementation block
+(id)nodeWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 ;
+(id)nodeWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 alignCorners:(BOOL)arg4 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(double)scaleFactorX;
-(double)scaleFactorY;
-(BOOL)alignCorners;
-(id)initWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 ;
-(id)initWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 alignCorners:(BOOL)arg4 ;
@end

