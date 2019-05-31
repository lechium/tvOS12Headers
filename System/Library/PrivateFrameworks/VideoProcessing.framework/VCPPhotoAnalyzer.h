/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableDictionary, NSData, NSDictionary, VCPAsset;

@interface VCPPhotoAnalyzer : NSObject {

	unsigned long long _requestedAnalyses;
	NSMutableDictionary* _analysis;
	NSMutableDictionary* _results;
	unsigned long long _irisAnalyses;
	NSData* _featureData;
	NSDictionary* _phFaceResults;
	unsigned long long _phFaceFlags;
	VCPAsset* _asset;
	long long _status;

}

@property (readonly) long long status;              //@synthesize status=_status - In the implementation block
+(BOOL)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2 ;
+(id)analyzerWithTypes:(unsigned long long)arg1 forAsset:(id)arg2 ;
+(id)resourceForAsset:(id)arg1 withResources:(id)arg2 ;
-(id)initWithPHAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 ;
-(id)analyzeAsset:(/*^block*/id)arg1 ;
-(id)initWithTypes:(unsigned long long)arg1 forAsset:(id)arg2 ;
-(void)updateDegradedFlagForMajorDimension:(unsigned long long)arg1 ;
-(int)downscaleImage:(CVBufferRef)arg1 scaledImage:(_CVBuffer*)arg2 majorDimension:(int)arg3 ;
-(int)analyzeImage:(unsigned long long*)arg1 performedAnalyses:(unsigned long long*)arg2 movingObjectResults:(id)arg3 cancel:(/*^block*/id)arg4 ;
-(long long)status;
@end

