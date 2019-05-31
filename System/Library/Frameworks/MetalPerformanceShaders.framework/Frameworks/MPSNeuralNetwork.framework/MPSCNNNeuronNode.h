/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNNeuronNode : MPSNNFilterNode {

	int _type;
	float _a;
	float _b;
	float _c;

}

@property (a,nonatomic,readonly) float a;              //@synthesize a=_a - In the implementation block
@property (b,nonatomic,readonly) float b;              //@synthesize b=_b - In the implementation block
@property (c,nonatomic,readonly) float c;              //@synthesize c=_c - In the implementation block
+(id)nodeWithSource:(id)arg1 descriptor:(id)arg2 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg1 type:(int)arg2 a:(float)arg3 b:(float)arg4 c:(float)arg5 ;
-(float)c;
-(float)b;
-(float)a;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)descriptor;
@end

