/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray, NSMapTable;

@interface VNRequestForensics : NSObject {

	NSArray* _originalRequests;
	NSArray* _orderedRequests;
	NSMutableArray* _implicitRequests;
	NSMutableArray* _performedRequests;
	NSMutableArray* _cachedRequestResults;
	NSMutableArray* _checkedCachedResultsOnBehalfOfRequest;
	NSMutableArray* _locatedCachedResultsOnBehalfOfRequest;
	NSMutableArray* _ledger;
	NSMapTable* _requestToHumanReadableLabelMap;

}

@property (nonatomic,copy) NSArray * orderedRequests; 
@property (nonatomic,copy,readonly) NSArray * originalRequests; 
@property (nonatomic,copy,readonly) NSArray * performedRequests; 
-(id)_humanReadableLabelForRequest:(id)arg1 ;
-(id)initWithOriginalRequests:(id)arg1 ;
-(void)setOrderedRequests:(NSArray *)arg1 ;
-(void)performingOrderedDependentRequests:(id)arg1 onBehalfOfRequest:(id)arg2 ;
-(void)performingRequest:(id)arg1 ;
-(void)performedRequest:(id)arg1 withError:(id)arg2 ;
-(void)request:(id)arg1 cachedResultsWithObservationsCacheKey:(id)arg2 ;
-(void)cachedObservationsWithKey:(id)arg1 wereCheckedOnBehalfOfRequest:(id)arg2 ;
-(void)cachedObservationsWithKey:(id)arg1 wereLocatedOnBehalfOfRequest:(id)arg2 ;
-(NSArray *)originalRequests;
-(NSArray *)orderedRequests;
-(NSArray *)performedRequests;
-(id)keyUsedToCacheResultsOfRequest:(id)arg1 ;
-(id)requestsThatLookedUpCachedResultsKey:(id)arg1 ;
-(id)_childRequestsImplicitlyPerformedOnBehalfOfParentRequest:(id)arg1 ;
-(id)requestsImplicitlyPerformedOnBehalfOfRequest:(id)arg1 ;
-(id)requestThatProvidedObservationsForRequest:(id)arg1 ;
-(BOOL)resultsObtainedFromObservationsCacheForRequest:(id)arg1 ;
-(id)description;
@end

