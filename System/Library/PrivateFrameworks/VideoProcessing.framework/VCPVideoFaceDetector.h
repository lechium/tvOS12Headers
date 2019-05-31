/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableDictionary, NSDictionary;

@interface VCPVideoFaceDetector : VCPVideoAnalyzer {

	int _angle;
	SCD_Struct_VC6 _timeLastProcess;
	NSMutableDictionary* _activeFaces;
	NSDictionary* _results;

}
+(id)faceDetectorWithTransform:(CGAffineTransform)arg1 withExistingFaceprints:(id)arg2 frameStats:(id)arg3 tracking:(BOOL)arg4 cancel:(/*^block*/id)arg5 ;
-(id)faceRanges;
-(id)results;
@end

