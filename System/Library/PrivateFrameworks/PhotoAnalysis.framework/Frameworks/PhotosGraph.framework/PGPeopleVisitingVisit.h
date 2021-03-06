/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, PGGraphNode, NSArray;

@interface PGPeopleVisitingVisit : NSObject {

	NSMutableArray* _momentNodes;
	BOOL _hasVeryCloseMoments;
	PGGraphNode* _addressNode;

}

@property (readonly) PGGraphNode * addressNode;                   //@synthesize addressNode=_addressNode - In the implementation block
@property (readonly) NSArray * momentNodes;                       //@synthesize momentNodes=_momentNodes - In the implementation block
@property (readonly) BOOL isValid; 
@property (readonly) BOOL matchesFarVisitCriteria; 
@property (readonly) BOOL matchesCloseVisitCriteria; 
-(NSArray *)momentNodes;
-(PGGraphNode *)addressNode;
-(BOOL)matchesCloseVisitCriteria;
-(BOOL)matchesFarVisitCriteria;
-(id)initWithAddressNode:(id)arg1 ;
-(void)addMomentNode:(id)arg1 isVeryClose:(BOOL)arg2 ;
-(id)description;
-(BOOL)isValid;
@end

