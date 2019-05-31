/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKCoherentNoiseSource.h>

@interface GKBillowNoiseSource : GKCoherentNoiseSource {

	double _persistence;

}

@property (assign,nonatomic) double persistence;              //@synthesize persistence=_persistence - In the implementation block
+(id)billowNoiseSourceWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5 ;
-(double)persistence;
-(void)setPersistence:(double)arg1 ;
-(double)valueAt:;
-(id)cloneModule;
-(id)initWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5 ;
-(id)init;
@end

