/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/TrackedFlowCounts.h>

@interface IntervalTrackedFlowCounts : TrackedFlowCounts {

	unsigned long long _timestampSeconds;
	unsigned long long _numBlemishedFlows;
	unsigned long long _numUnblemishedFlows;

}

@property (assign,nonatomic) unsigned long long timestampSeconds;                 //@synthesize timestampSeconds=_timestampSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long numBlemishedFlows;                //@synthesize numBlemishedFlows=_numBlemishedFlows - In the implementation block
@property (assign,nonatomic) unsigned long long numUnblemishedFlows;              //@synthesize numUnblemishedFlows=_numUnblemishedFlows - In the implementation block
-(void)addFlowCounts:(id)arg1 ;
-(void)subtractFlowCounts:(id)arg1 ;
-(unsigned long long)numBlemishedFlows;
-(unsigned long long)numUnblemishedFlows;
-(void)addIntervalFlowCounts:(id)arg1 ;
-(void)subtractIntervalFlowCounts:(id)arg1 ;
-(unsigned long long)timestampSeconds;
-(void)setTimestampSeconds:(unsigned long long)arg1 ;
-(void)setNumBlemishedFlows:(unsigned long long)arg1 ;
-(void)setNumUnblemishedFlows:(unsigned long long)arg1 ;
-(id)description;
@end

