/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNPoolingGradient.h>

@interface MPSCNNPoolingAverageGradient : MPSCNNPoolingGradient {

	unsigned long long _zeroPadSizeX;
	unsigned long long _zeroPadSizeY;

}

@property (assign,nonatomic) unsigned long long zeroPadSizeX;              //@synthesize zeroPadSizeX=_zeroPadSizeX - In the implementation block
@property (assign,nonatomic) unsigned long long zeroPadSizeY;              //@synthesize zeroPadSizeY=_zeroPadSizeY - In the implementation block
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)zeroPadSizeX;
-(void)setZeroPadSizeX:(unsigned long long)arg1 ;
-(unsigned long long)zeroPadSizeY;
-(void)setZeroPadSizeY:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
@end

