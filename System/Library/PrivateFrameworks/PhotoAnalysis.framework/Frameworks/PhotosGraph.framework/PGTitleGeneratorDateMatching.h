/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGGraph, NSDateInterval, NSSet, PGTitle;

@interface PGTitleGeneratorDateMatching : NSObject {

	PGGraph* _graph;
	long long _type;
	NSDateInterval* _referenceDateInterval;
	NSSet* _dateNodes;
	NSSet* _momentNodes;

}

@property (nonatomic,retain) PGGraph * graph;                                           //@synthesize graph=_graph - In the implementation block
@property (nonatomic,retain) NSDateInterval * referenceDateInterval;                    //@synthesize referenceDateInterval=_referenceDateInterval - In the implementation block
@property (nonatomic,retain) NSSet * dateNodes;                                         //@synthesize dateNodes=_dateNodes - In the implementation block
@property (nonatomic,retain) NSSet * momentNodes;                                       //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,readonly) long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) PGTitle * title; 
@property (nonatomic,readonly) unsigned long long allowedTimeTitleFormats; 
+(id)_dateNodesFromMomentNodes:(id)arg1 ;
+(BOOL)type:(long long)arg1 isBetterThanType:(long long)arg2 ;
+(id)_typeMatchings;
-(PGGraph *)graph;
-(void)setGraph:(PGGraph *)arg1 ;
-(NSSet *)momentNodes;
-(void)setMomentNodes:(NSSet *)arg1 ;
-(long long)_findBestType;
-(BOOL)_dateNodeIntersectsWithReferenceDateIntervalByIgnoringYear;
-(long long)_matchingTypeForDateNode:(id)arg1 ;
-(id)initWithType:(long long)arg1 referenceDateInterval:(id)arg2 momentNodes:(id)arg3 ;
-(unsigned long long)allowedTimeTitleFormats;
-(NSDateInterval *)referenceDateInterval;
-(void)setReferenceDateInterval:(NSDateInterval *)arg1 ;
-(NSSet *)dateNodes;
-(void)setDateNodes:(NSSet *)arg1 ;
-(PGTitle *)title;
-(long long)type;
@end

