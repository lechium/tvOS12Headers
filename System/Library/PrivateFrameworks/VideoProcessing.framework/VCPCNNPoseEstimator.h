/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNPoseEstimator : NSObject
+(id)estimator;
-(float*)getInputBuffer;
-(int)detectPoseForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 yaw:(long long*)arg3 ;
-(int)computePoseScore:(float*)arg1 ;
@end

