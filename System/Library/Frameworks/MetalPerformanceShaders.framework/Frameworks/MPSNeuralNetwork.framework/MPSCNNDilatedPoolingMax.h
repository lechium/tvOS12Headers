/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNPooling.h>

@interface MPSCNNDilatedPoolingMax : MPSCNNPooling

@property (nonatomic,readonly) unsigned long long dilationRateX; 
@property (nonatomic,readonly) unsigned long long dilationRateY; 
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 dilationRateX:(unsigned long long)arg4 dilationRateY:(unsigned long long)arg5 strideInPixelsX:(unsigned long long)arg6 strideInPixelsY:(unsigned long long)arg7 ;
-(id)newPlugin;
-(unsigned long long)dilationRateX;
-(unsigned long long)dilationRateY;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
@end
