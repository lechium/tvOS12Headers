/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGMeaningfulEventRequiredCriteria;

@interface PGMeaningfulEventMatchingResult : NSObject {

	BOOL _isMatching;
	BOOL _isReliable;
	double _score;
	PGMeaningfulEventRequiredCriteria* _requiredCriteria;

}

@property (nonatomic,readonly) BOOL isMatching;                                                   //@synthesize isMatching=_isMatching - In the implementation block
@property (nonatomic,readonly) double score;                                                      //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) BOOL isReliable;                                                   //@synthesize isReliable=_isReliable - In the implementation block
@property (nonatomic,readonly) PGMeaningfulEventRequiredCriteria * requiredCriteria;              //@synthesize requiredCriteria=_requiredCriteria - In the implementation block
-(double)score;
-(BOOL)isMatching;
-(BOOL)isReliable;
-(PGMeaningfulEventRequiredCriteria *)requiredCriteria;
-(id)initWithIsMatching:(BOOL)arg1 score:(double)arg2 isReliable:(BOOL)arg3 requiredCriteria:(id)arg4 ;
-(id)description;
@end

