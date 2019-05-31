/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface PGSearchKeywordComputerKeywordAggregator : NSObject {

	NSMutableDictionary* _keywordsByCategoryMaskByDateIntervalByMomentUUID;

}

@property (readonly) NSDictionary * aggregatedKeywords; 
-(void)aggregateKeywordArraysByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 fromUniversalStartDate:(id)arg3 toEndDate:(id)arg4 ;
-(void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentNode:(id)arg2 ;
-(void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 fromUniversalStartDate:(id)arg3 toEndDate:(id)arg4 ;
-(NSDictionary *)aggregatedKeywords;
-(void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 duringDateInterval:(id)arg3 ;
-(id)init;
@end
