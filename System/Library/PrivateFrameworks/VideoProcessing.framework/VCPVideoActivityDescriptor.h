/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPVideoActivityDescriptor : NSObject {

	float descriptors[10];
	int _widthInMb;
	int _heightInMb;
	long long* _motionMagnitudeHistogram;
	float* _motionMagnitude;

}

@property (readonly) float* descriptors; 
-(id)initWithFrameWidthInMb:(int)arg1 heightInMb:(int)arg2 ;
-(void)ExtractActivityDescriptorFromStats:(EncodeStats*)arg1 ;
-(void)spatialDescriptorWithMvMagnitudeMean:(float)arg1 ;
-(float*)descriptors;
-(void)dealloc;
-(void)reset;
@end
