/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNConvBlock.h>

@interface VCPCNNConvBlockVector : VCPCNNConvBlock {

	/*function pointer*/void* CalculateDotProductOfChunk;

}
-(int)initializeRest;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(int)forward;
-(BOOL)isFilterSizeSupported:(int)arg1 ;
-(int)straightForwardForChunkFour;
-(int)chunkFourForward;
@end

