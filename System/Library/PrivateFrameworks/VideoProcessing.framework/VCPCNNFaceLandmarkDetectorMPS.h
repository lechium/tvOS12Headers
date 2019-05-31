/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VCPCNNFaceLandmarkDetector.h>

@class VCPCNNModel, VCPCNNData;

@interface VCPCNNFaceLandmarkDetectorMPS : VCPCNNFaceLandmarkDetector {

	VCPCNNModel* _modelLandmarks;
	VCPCNNData* _faceInput;

}
-(float*)getInputBuffer;
-(int)computeLandmarks:(float*)arg1 ;
-(id)init;
@end

