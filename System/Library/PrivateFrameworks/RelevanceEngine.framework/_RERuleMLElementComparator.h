/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REMLElementComparator.h>

@class NSArray;

@interface _RERuleMLElementComparator : REMLElementComparator {

	NSArray* _filteringRules;
	NSArray* _rankingRules;
	NSArray* _filteringEvaluators;
	NSArray* _leftRankingEvaluators;
	NSArray* _rightRankingEvaluators;
	NSArray* _comparisonRankingEvaluators;

}
+(id)comparatorWithFilteringRules:(id)arg1 rankingRules:(id)arg2 model:(id)arg3 ;
-(unsigned long long)comparisonLevels;
-(long long)compareElement:(id)arg1 toElement:(id)arg2 level:(unsigned long long)arg3 ;
-(BOOL)shouldHideElement:(id)arg1 ;
-(id)initWithFilteringRules:(id)arg1 rankingRules:(id)arg2 model:(id)arg3 ;
-(float)_relevanceForElement:(id)arg1 actionProbability:(float*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

