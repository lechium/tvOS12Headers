/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCameraCalibrationData, NSData;

@interface AVDepthDataInternal : NSObject {

	CVBufferRef pixelBuffer;
	int version;
	long long quality;
	BOOL filtered;
	long long accuracy;
	AVCameraCalibrationData* calibrationData;
	float depthBlurEffectSimulatedAperture;
	NSData* depthBlurEffectRenderingParameters;
	BOOL portraitScoreIsHigh;
	float portraitScore;

}
@end

