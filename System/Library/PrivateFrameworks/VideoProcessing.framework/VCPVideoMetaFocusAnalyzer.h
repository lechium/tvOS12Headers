/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVideoMetaFocusSegment, NSMutableArray, NSArray;

@interface VCPVideoMetaFocusAnalyzer : NSObject {

	VCPVideoMetaFocusSegment* _activeSegment;
	NSMutableArray* _mutableResults;
	SCD_Struct_VC9 _frameTimeRange;

}

@property (nonatomic,retain,readonly) NSArray * results; 
-(int)finalizeAnalysis;
-(void)addSegmentToResults;
-(int)processFrameMetadata:(id)arg1 ;
-(id)init;
-(NSArray *)results;
@end

