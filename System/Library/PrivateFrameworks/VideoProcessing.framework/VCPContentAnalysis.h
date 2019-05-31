/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNModel, VCPCNNData;

@interface VCPContentAnalysis : NSObject {

	VCPCNNModel* _model;
	VCPCNNData* _input;
	unsigned long long _previousContentType;
	CVBufferRef _argbPixelBuffer;
	OpaqueVTPixelTransferSessionRef _argbTransferSession;

}
+(id)contentAnalysis;
-(void)copyBlock:(char*)arg1 withStride:(unsigned long long)arg2 toBlock:(float*)arg3 ;
-(int)blockContentDetection:(unsigned long long*)arg1 ;
-(int)detectPixelBuffer:(CVBufferRef)arg1 contentType:(unsigned long long*)arg2 ;
-(id)init;
-(void)dealloc;
@end

