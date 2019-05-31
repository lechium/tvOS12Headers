/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Memories/Memories-Structs.h>
@class NSArray, AVAsset, NSObject;

@interface IrisSampleInfo : NSObject {

	NSArray* _timeRanges;
	NSArray* _gapTimeRanges;
	AVAsset* _asset;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SCD_Struct_TV2 _dominantSampleDuration;

}

@property (nonatomic,retain) AVAsset * asset;                                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSArray * timeRanges;                                    //@synthesize timeRanges=_timeRanges - In the implementation block
@property (nonatomic,retain) NSArray * gapTimeRanges;                                 //@synthesize gapTimeRanges=_gapTimeRanges - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV2 dominantSampleDuration;                   //@synthesize dominantSampleDuration=_dominantSampleDuration - In the implementation block
+(id)infoForAsset:(id)arg1 ;
+(void)initialize;
+(void)clearCache;
-(NSArray *)timeRanges;
-(void)setTimeRanges:(NSArray *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setGapTimeRanges:(NSArray *)arg1 ;
-(void)setDominantSampleDuration:(SCD_Struct_TV2)arg1 ;
-(void)loadInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadInfoWithTrackOutput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)gapTimeRanges;
-(SCD_Struct_TV2)dominantSampleDuration;
-(id)initWithAsset:(id)arg1 ;
-(void)setAsset:(AVAsset *)arg1 ;
-(AVAsset *)asset;
@end
