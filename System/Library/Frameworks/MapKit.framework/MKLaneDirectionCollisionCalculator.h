/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSNumber, NSArray;

@interface MKLaneDirectionCollisionCalculator : NSObject {

	NSMutableDictionary* _collisionsForDirection;
	NSMutableArray* _directions;
	NSNumber* _directionWithMostCollisions;
	BOOL _hasCollisions;

}

@property (nonatomic,readonly) BOOL hasCollisions;                              //@synthesize hasCollisions=_hasCollisions - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionWithMaxCollisions; 
@property (nonatomic,readonly) NSArray * directions; 
-(id)initWithDirections:(id)arg1 ;
-(void)_recalculateCollisions;
-(BOOL)hasDirectionWithMaxCollisions;
-(void)removeNextDirectionWithCollisions;
-(void)removeDirectionWithCollisionsLeastSimilarToDirection:(int)arg1 ;
-(BOOL)hasCollisions;
-(NSArray *)directions;
@end

