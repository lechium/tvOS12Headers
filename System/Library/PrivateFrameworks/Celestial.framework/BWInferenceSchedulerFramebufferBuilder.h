/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BWInferenceSchedulerGraph, BWInferenceSchedulerJobList, NSMapTable;

@interface BWInferenceSchedulerFramebufferBuilder : NSObject {

	BWInferenceSchedulerGraph* _graph;
	BWInferenceSchedulerJobList* _prototypeJobList;
	unsigned long long _jobCount;
	NSMapTable* _directedEdgesByNode;
	BOOL _didVendFramebuffer;

}
+(void)initialize;
-(void)_prepareToConnectNode:(id)arg1 ;
-(id)_connectNodesExpectingInputs:(id)arg1 toNodesProvidingOutput:(id)arg2 dependencyProvider:(id)arg3 nodeForExternalRequirement:(id)arg4 ;
-(id)_addScalingNodesForNodesExpectingInputs:(id)arg1 nodesProvidingOutput:(id)arg2 dependencyProvider:(id)arg3 nodesForExternalRequirements:(id)arg4 ;
-(void)_populateJobList:(id)arg1 fromGraphEdges:(id)arg2 withHeadNode:(id)arg3 jobTypes:(id)arg4 ;
-(BOOL)_validToDeriveFormat:(id)arg1 fromFormat:(id)arg2 vendingProvider:(id)arg3 ;
-(id)_newScalingNodesForScalingRequirement:(id)arg1 ;
-(id)newFramebuffer;
-(id)initWithInferenceRequirements:(id)arg1 dependencyProvider:(id)arg2 formatProvider:(id)arg3 ;
-(void)dealloc;
@end

