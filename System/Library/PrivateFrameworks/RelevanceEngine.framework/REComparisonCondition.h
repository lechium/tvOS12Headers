/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>

@interface REComparisonCondition : RECondition
+(id)falseCondition;
+(id)trueCondition;
+(id)conditionForLeftFeature:(id)arg1 relation:(long long)arg2 rightFeature:(id)arg3 ;
-(id)_inflectionFeatureValuePairs;
-(BOOL)_validForRanking;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
