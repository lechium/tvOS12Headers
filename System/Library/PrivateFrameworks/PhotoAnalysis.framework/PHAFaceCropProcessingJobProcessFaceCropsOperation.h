/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate;
@class PHAVisionServiceFaceProcessingWorker, NSArray;

@interface PHAFaceCropProcessingJobProcessFaceCropsOperation : NSOperation {

	id<PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> _delegate;
	PHAVisionServiceFaceProcessingWorker* _faceProcessingWorker;
	NSArray* _faceCrops;
	unsigned long long _totalSteps;
	unsigned long long _currentStep;

}
-(id)initWithFaceProcessingWorker:(id)arg1 faceCrops:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(float)percentComplete;
-(void)main;
@end

