/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphNode, NSArray, NSDate, NSString;

@interface PGPotentialLocationMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphNode* _cityNode;
	long long _year;
	NSArray* _assetsInCity;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) PGGraphNode * cityNode;              //@synthesize cityNode=_cityNode - In the implementation block
@property (readonly) long long year;                      //@synthesize year=_year - In the implementation block
@property (readonly) NSString * city; 
@property (retain) NSArray * assetsInCity;                //@synthesize assetsInCity=_assetsInCity - In the implementation block
@property (retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)city;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)addMomentNode:(id)arg1 ;
-(PGGraphNode *)cityNode;
-(id)initWithCityNode:(id)arg1 year:(long long)arg2 ;
-(void)setAssetsInCity:(NSArray *)arg1 ;
-(NSArray *)assetsInCity;
-(long long)year;
@end

