/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class NSMutableDictionary, NSArray;

@interface UIPushBehavior : UIDynamicBehavior {

	double _angle;
	double _magnitude;
	BOOL _active;
	long long _mode;
	CGVector _forceVector;
	double _timeInterval;
	NSMutableDictionary* _targetPoints;
	int _i;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,readonly) long long mode; 
@property (assign,nonatomic) BOOL active; 
@property (assign,nonatomic) double angle; 
@property (assign,nonatomic) double magnitude; 
@property (assign,nonatomic) CGVector pushDirection; 
+(BOOL)_isPrimitiveBehavior;
-(id)init;
-(id)description;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(NSArray *)items;
-(BOOL)active;
-(void)addItem:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)removeItem:(id)arg1 ;
-(void)_step;
-(void)setXComponent:(double)arg1 yComponent:(double)arg2 ;
-(double)magnitude;
-(void)setAngle:(double)arg1 magnitude:(double)arg2 ;
-(double)angle;
-(double)yComponent;
-(double)xComponent;
-(void)setAngle:(double)arg1 ;
-(void)setMagnitude:(double)arg1 ;
-(void)setXComponent:(double)arg1 ;
-(void)setYComponent:(double)arg1 ;
-(id)initWithItems:(id)arg1 mode:(long long)arg2 ;
-(CGPoint)targetPointForItem:(id)arg1 ;
-(void)setTargetPoint:(CGPoint)arg1 forItem:(id)arg2 ;
-(long long)mode;
-(UIOffset)targetOffsetFromCenterForItem:(id)arg1 ;
-(void)setTargetOffsetFromCenter:(UIOffset)arg1 forItem:(id)arg2 ;
-(CGVector)pushDirection;
-(void)setPushDirection:(CGVector)arg1 ;
@end

