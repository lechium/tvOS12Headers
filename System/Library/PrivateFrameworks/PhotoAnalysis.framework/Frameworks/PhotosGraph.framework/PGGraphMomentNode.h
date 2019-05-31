/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PLMomentProtocol.h>
#import <libobjc.A.dylib/PGGraphPhotoEvent.h>
#import <libobjc.A.dylib/PGEventEnrichment.h>

@class NSDate, CLLocation, NSString, NSSet, CLSHolidayCalendarEventRuleTraits, PGGraph;

@interface PGGraphMomentNode : PGGraphNode <PLMomentProtocol, PGGraphPhotoEvent, PGEventEnrichment>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * pl_startDate; 
@property (nonatomic,readonly) NSDate * pl_endDate; 
@property (nonatomic,readonly) unsigned long long pl_numberOfAssets; 
@property (nonatomic,readonly) CLLocation * pl_location; 
@property (readonly) NSString * localIdentifier; 
@property (readonly) unsigned long long numberOfAssetsWithPeople; 
@property (readonly) BOOL happensPartiallyAtMyHomeOrWork; 
@property (readonly) BOOL isHighlyInteresting; 
@property (readonly) BOOL isInterestingForMemories; 
@property (nonatomic,readonly) unsigned long long locationMobilityType; 
@property (nonatomic,readonly) NSSet * collectionNodes; 
@property (nonatomic,readonly) NSSet * frequentLocationNodes; 
@property (nonatomic,readonly) CLSHolidayCalendarEventRuleTraits * holidayCalendarEventRuleTraits; 
@property (readonly) BOOL happensPartiallyAtMyHome; 
@property (readonly) BOOL happensPartiallyAtMyWork; 
@property (readonly) NSDate * localStartDate; 
@property (readonly) NSDate * localEndDate; 
@property (readonly) NSDate * universalStartDate; 
@property (readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) PGGraph * graph; 
+(id)sceneEdgesForMomentNodes:(id)arg1 ;
+(id)firstAndLastMomentNodesInMomentNodes:(id)arg1 ;
+(id)addressNodesForMomentNodes:(id)arg1 ;
+(id)contentScoreSortDescriptors;
+(id)scoreSortDescriptors;
+(id)addressEdgesForMomentNodes:(id)arg1 ;
+(id)collectionNodesForMomentNodes:(id)arg1 ;
-(CLLocation *)pl_location;
-(unsigned long long)pl_numberOfAssets;
-(NSDate *)pl_endDate;
-(NSDate *)pl_startDate;
-(id)assetCollection;
-(NSString *)localIdentifier;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(id)momentNodes;
-(void)momentEnumeratePersonNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)addressNodes;
-(void)enumerateAddressNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)collectionNodes;
-(id)meaningLabels;
-(BOOL)isInterestingForMemories;
-(NSDate *)localEndDate;
-(NSDate *)localStartDate;
-(id)personNodes;
-(void)enumerateBusinessNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateMeaningNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePublicEventNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)endsBeforeLocalDate:(id)arg1 ;
-(void)enumerateCollectionNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2 ;
-(id)associatedNodesForRemoval;
-(void)enumerateConsolidatedAddressesUsingBlock:(/*^block*/id)arg1 ;
-(void)momentEnumeratePOINodesUsingBlock:(/*^block*/id)arg1 ;
-(id)celebratedHolidayNodes;
-(id)seasonNodes;
-(void)momentEnumerateDateNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)startsAfterLocalDate:(id)arg1 ;
-(unsigned long long)locationMobilityType;
-(id)addressEdges;
-(id)remoteAddressEdges;
-(void)momentEnumerateRemoteAddressNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)dateNodes;
-(id)sceneNodes;
-(void)momentEnumerateSceneNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)roiNodes;
-(void)momentEnumerateROINodesUsingBlock:(/*^block*/id)arg1 ;
-(id)poiNodes;
-(id)meaningNodes;
-(id)businessNodes;
-(id)holidayNodes;
-(id)publicEventNodes;
-(id)naturalLanguageFeatures;
-(id)sortedMomentNodes;
-(id)birthdayPersonNode;
-(id)anniversaryPersonNode;
-(id)socialGroupNodes;
-(BOOL)happensPartiallyAtMyHome;
-(BOOL)happensPartiallyAtMyWork;
-(BOOL)happensPartiallyAtMyHomeOrWork;
-(void)enumerateBusinessesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)frequentLocationNodes;
-(void)momentEnumerateSocialGroupNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)momentEnumerateCelebratedHolidayNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)highConfidenceSceneNodes;
-(id)searchConfidenceSceneNodes;
-(unsigned long long)numberOfAssetsWithPeople;
-(long long)_compareToMomentNode:(id)arg1 withSortDescriptors:(id)arg2 ;
-(id)earlierMomentNode:(id)arg1 ;
-(id)laterMomentNode:(id)arg1 ;
-(void)enumerateFrequentLocationNodesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_eventRuleLocationTrait;
-(unsigned long long)_eventRulePeopleTrait;
-(BOOL)_isMePresent;
-(BOOL)isHighlyInteresting;
-(void)momentEnumerateMeaningNodesUsingBlock:(/*^block*/id)arg1 ;
-(CLSHolidayCalendarEventRuleTraits *)holidayCalendarEventRuleTraits;
-(NSString *)uuid;
@end

