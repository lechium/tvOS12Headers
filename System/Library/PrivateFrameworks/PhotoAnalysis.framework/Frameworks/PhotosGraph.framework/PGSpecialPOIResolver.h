/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosGraph/PhotosGraph-Structs.h>
@class NSArray, NSMutableDictionary;

@interface PGSpecialPOIResolver : NSObject {

	NSArray* _momentNodes;
	NSMutableDictionary* _countBySpecialPOI;

}

@property (nonatomic,readonly) NSArray * momentNodes;                              //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * countBySpecialPOI;              //@synthesize countBySpecialPOI=_countBySpecialPOI - In the implementation block
+(BOOL)specialPOIContainsCoordinate:(CLLocationCoordinate2D)arg1 ;
+(BOOL)specialPOINameIsInString:(id)arg1 ;
+(id)_regionsBySpecialPOI;
+(id)_nameBySpecialPOI;
+(unsigned long long)specialPOIsContainingCoordinate:(CLLocationCoordinate2D)arg1 ;
+(unsigned long long)specialPOIsWithNameInString:(id)arg1 ;
-(NSArray *)momentNodes;
-(id)initWithMomentNodes:(id)arg1 ;
-(BOOL)anyMomentHasPOIAmusementPark;
-(BOOL)momentsContainSpecialPOI:(unsigned long long)arg1 withMomentRatio:(double)arg2 ;
-(unsigned long long)_numberOfMomentsMatchingSpecialPOI:(unsigned long long)arg1 ;
-(BOOL)anyMomentContainsSpecialPOI:(unsigned long long)arg1 ;
-(unsigned long long)_numberOfMomentsInRegions:(id)arg1 containingAOIName:(id)arg2 ;
-(unsigned long long)specialPOIsInAnyMoment;
-(unsigned long long)specialPOIsWithMomentRatio:(double)arg1 ;
-(NSMutableDictionary *)countBySpecialPOI;
-(void)setCountBySpecialPOI:(NSMutableDictionary *)arg1 ;
@end

