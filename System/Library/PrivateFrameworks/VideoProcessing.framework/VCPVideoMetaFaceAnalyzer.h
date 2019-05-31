/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableDictionary, NSMutableArray;

@interface VCPVideoMetaFaceAnalyzer : VCPVideoMetaAnalyzer {

	NSMutableDictionary* _activeFaces;
	CGAffineTransform _transform;
	NSMutableArray* _faceResults;

}
-(id)initWithTransform:(CGAffineTransform)arg1 ;
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
-(int)finalizeAnalysis;
-(id)publicResults;
-(CGAffineTransform)flipTransform:(CGAffineTransform)arg1 ;
@end

