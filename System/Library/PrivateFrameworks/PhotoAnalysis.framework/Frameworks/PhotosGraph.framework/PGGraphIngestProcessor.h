/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGGraph;

@interface PGGraphIngestProcessor : NSObject {

	PGGraph* _graph;

}

@property (nonatomic,__weak,readonly) PGGraph * graph;              //@synthesize graph=_graph - In the implementation block
-(id)initWithGraph:(id)arg1 ;
-(PGGraph *)graph;
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
@end
