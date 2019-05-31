/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGPersonResult;
@class NSArray;

@interface PGSharingSuggestionResult : NSObject {

	id<PGPersonResult> _person;
	double _weight;
	double _sourceWeight;
	NSArray* _sourceDescriptions;

}

@property (nonatomic,readonly) id<PGPersonResult> person;                 //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) double weight;                             //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) double sourceWeight;                       //@synthesize sourceWeight=_sourceWeight - In the implementation block
@property (nonatomic,readonly) NSArray * sourceDescriptions;              //@synthesize sourceDescriptions=_sourceDescriptions - In the implementation block
+(id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2 sourceWeight:(double)arg3 sourceDescription:(id)arg4 ;
-(void)mergeWithSuggestionResult:(id)arg1 ;
-(double)sourceWeight;
-(id)initWithPerson:(id)arg1 weight:(double)arg2 sourceWeight:(double)arg3 sourceDescription:(id)arg4 ;
-(NSArray *)sourceDescriptions;
-(id)description;
-(double)weight;
-(id<PGPersonResult>)person;
@end

