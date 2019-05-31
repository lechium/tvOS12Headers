/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableArray, MPSImage, VCPCNNMetalContext;

@interface VCPCNNData : NSObject {

	BOOL _isInputOutput;
	NSMutableArray* _size;
	float* _data;
	MPSImage* _mpsImg;
	VCPCNNMetalContext* _context;

}

@property (retain) NSMutableArray * size;                     //@synthesize size=_size - In the implementation block
@property (assign) float* data;                               //@synthesize data=_data - In the implementation block
@property (assign) BOOL isInputOutput;                        //@synthesize isInputOutput=_isInputOutput - In the implementation block
@property (retain) MPSImage * mpsImg;                         //@synthesize mpsImg=_mpsImg - In the implementation block
@property (__weak) VCPCNNMetalContext * context;              //@synthesize context=_context - In the implementation block
+(id)cnnDataWithGPUContext:(id)arg1 ;
+(id)cnnData;
+(Class)cnnDataClass;
+(id)cnnDataWithPlane:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4 ;
-(int)allocBuffers:(BOOL)arg1 ;
-(id)initWithGPUContext:(id)arg1 ;
-(id)initWithParameters:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4 ;
-(int)bufferAllocCPU;
-(int)randInit;
-(int)convertCPUData2GPU;
-(int)convertGPUData2CPU;
-(int)reallocGPUTemporalBuffers;
-(int)initWithImage:(CVBufferRef)arg1 forChunk:(int)arg2 ;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(int)softmax;
-(BOOL)isInputOutput;
-(void)setIsInputOutput:(BOOL)arg1 ;
-(MPSImage *)mpsImg;
-(void)setMpsImg:(MPSImage *)arg1 ;
-(NSMutableArray *)size;
-(id)init;
-(void)dealloc;
-(void)setContext:(VCPCNNMetalContext *)arg1 ;
-(VCPCNNMetalContext *)context;
-(void)setSize:(NSMutableArray *)arg1 ;
-(float*)data;
-(void)setData:(float*)arg1 ;
-(int)normalization;
@end

