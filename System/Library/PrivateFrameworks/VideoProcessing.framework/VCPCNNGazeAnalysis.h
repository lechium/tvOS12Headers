/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPRTLandmarkDetector;

@interface VCPCNNGazeAnalysis : NSObject {

	VCPRTLandmarkDetector* _rtLandmarkDetector;

}
+(id)analyzer;
-(int)planCreate;
-(int)cropAndRotateEyeImage:(CVBufferRef)arg1 leftCornerX:(int)arg2 leftCornerY:(int)arg3 rightCornerX:(int)arg4 rightCornerY:(int)arg5 ;
-(int)computeBlinkScore:(float*)arg1 ;
-(int)planDestroy;
-(float*)getInputBuffer;
-(int)detectEyeOpennessForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 eyeOpenness:(BOOL*)arg3 ;
-(id)init;
@end

