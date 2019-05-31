/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSState.h>

@class MPSMatrix;

@interface MPSRNNMatrixTrainingState : MPSState {

	MPSMatrix* singleGateZ;
	BOOL _isTemporary;

}
-(id)initForSingleGateWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2 isTemporary:(BOOL)arg3 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(BOOL)isTemporary;
-(void)dealloc;
@end
