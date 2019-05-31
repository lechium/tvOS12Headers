/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UITouchForceObservationMessageReader;

@interface _UITouchForceMessage : NSObject {

	BOOL _isReset;
	_UITouchForceObservationMessageReader* _observeReader;
	BOOL _shouldFilterDueToSystemGestures;
	double _unclampedTouchForce;
	double _maximumPossibleForce;
	double _timestamp;
	CGPoint _centroid;

}

@property (assign,nonatomic) double unclampedTouchForce;                        //@synthesize unclampedTouchForce=_unclampedTouchForce - In the implementation block
@property (assign,nonatomic) double maximumPossibleForce;                       //@synthesize maximumPossibleForce=_maximumPossibleForce - In the implementation block
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) CGPoint centroid;                                  //@synthesize centroid=_centroid - In the implementation block
@property (assign,nonatomic) BOOL shouldFilterDueToSystemGestures;              //@synthesize shouldFilterDueToSystemGestures=_shouldFilterDueToSystemGestures - In the implementation block
+(id)reset;
+(id)observe:(/*^block*/id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)ifObservation:(/*^block*/id)arg1 ifReset:(/*^block*/id)arg2 ;
-(CGPoint)centroid;
-(BOOL)shouldFilterDueToSystemGestures;
-(void)ifObservationUnclamped:(/*^block*/id)arg1 ifReset:(/*^block*/id)arg2 ;
-(void)setCentroid:(CGPoint)arg1 ;
-(void)setShouldFilterDueToSystemGestures:(BOOL)arg1 ;
-(double)unclampedTouchForce;
-(void)setUnclampedTouchForce:(double)arg1 ;
-(double)maximumPossibleForce;
-(void)setMaximumPossibleForce:(double)arg1 ;
@end

