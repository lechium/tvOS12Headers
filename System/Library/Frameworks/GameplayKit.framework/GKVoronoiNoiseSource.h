/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKVoronoiNoiseSource : GKNoiseSource {

	BOOL _distanceEnabled;
	int _seed;
	double _frequency;
	double _displacement;

}

@property (assign,nonatomic) double frequency;                                           //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) double displacement;                                        //@synthesize displacement=_displacement - In the implementation block
@property (assign,getter=isDistanceEnabled,nonatomic) BOOL distanceEnabled;              //@synthesize distanceEnabled=_distanceEnabled - In the implementation block
@property (assign,nonatomic) int seed;                                                   //@synthesize seed=_seed - In the implementation block
+(id)voronoiNoiseWithFrequency:(double)arg1 displacement:(double)arg2 distanceEnabled:(BOOL)arg3 seed:(int)arg4 ;
-(void)setSeed:(int)arg1 ;
-(double)displacement;
-(double)valueAt:;
-(id)cloneModule;
-(id)initWithFrequency:(double)arg1 displacement:(double)arg2 distanceEnabled:(BOOL)arg3 seed:(int)arg4 ;
-(void)setDisplacement:(double)arg1 ;
-(void)setDistanceEnabled:(BOOL)arg1 ;
-(BOOL)isDistanceEnabled;
-(id)init;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(int)seed;
@end

