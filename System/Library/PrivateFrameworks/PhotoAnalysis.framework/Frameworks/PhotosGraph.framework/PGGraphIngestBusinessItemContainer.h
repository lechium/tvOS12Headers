/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGGraphIngestBusiness.h>

@class NSString, NSArray, NSDateInterval, CLSBusinessItem, CLSLocationOfInterestVisit;

@interface PGGraphIngestBusinessItemContainer : NSObject <PGGraphIngestBusiness> {

	CLSBusinessItem* _businessItem;
	CLSLocationOfInterestVisit* _visit;
	NSDateInterval* _dateInterval;

}

@property (nonatomic,readonly) CLSBusinessItem * businessItem;                  //@synthesize businessItem=_businessItem - In the implementation block
@property (nonatomic,readonly) CLSLocationOfInterestVisit * visit;              //@synthesize visit=_visit - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval;                   //@synthesize dateInterval=_dateInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * businessCategories; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) long long venueCapacity; 
@property (nonatomic,readonly) double routineVisitConfidence; 
@property (nonatomic,readonly) BOOL hasRoutineVisit; 
-(unsigned long long)muid;
-(long long)venueCapacity;
-(NSDateInterval *)dateInterval;
-(id)initWithBusinessItem:(id)arg1 visit:(id)arg2 dateInterval:(id)arg3 ;
-(NSArray *)businessCategories;
-(double)routineVisitConfidence;
-(BOOL)hasRoutineVisit;
-(id)initWithBusinessItem:(id)arg1 visit:(id)arg2 ;
-(id)initWithBusinessItem:(id)arg1 dateInterval:(id)arg2 ;
-(void)updateBusinessItem:(id)arg1 ;
-(CLSBusinessItem *)businessItem;
-(CLSLocationOfInterestVisit *)visit;
-(NSString *)name;
@end

