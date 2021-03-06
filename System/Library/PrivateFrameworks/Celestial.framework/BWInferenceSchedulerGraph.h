/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWInferenceJobProvider;
@class NSMapTable;

@interface BWInferenceSchedulerGraph : NSObject {

	id<BWInferenceJobProvider> _head;
	NSMapTable* _directedEdgesByNode;

}
-(id)initWithHeadNode:(id)arg1 directedEdges:(id)arg2 ;
-(void)enumerateVideoDestinationsFromJob:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_visitJob:(id)arg1 withEnRouteAccumulation:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)visitProvidersWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

