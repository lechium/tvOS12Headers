/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphIngestProcessor.h>

@class NSDictionary;

@interface PGGraphIngestPublicEventsProcessor : PGGraphIngestProcessor {

	NSDictionary* _publicEventCriteriaByCategory;

}

@property (nonatomic,readonly) NSDictionary * publicEventCriteriaByCategory;              //@synthesize publicEventCriteriaByCategory=_publicEventCriteriaByCategory - In the implementation block
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)_insertPublicEventsFromMomentNodes:(id)arg1 graphUpdate:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)_collectConsolidatedAddressesForMomentNodes:(id)arg1 inGraph:(id)arg2 consolidatedAddresses:(id*)arg3 consolidatedAddressesByMomentIdentifier:(id*)arg4 momentNodesForConsolidatedAddresses:(id*)arg5 ;
-(id)disambiguateEvents:(id)arg1 forTimeLocationTuple:(id)arg2 momentNode:(id)arg3 ;
-(NSDictionary *)publicEventCriteriaByCategory;
-(id)_frequentLocationNodesByMomentIdentifierForMomentNodes:(id)arg1 ;
@end

