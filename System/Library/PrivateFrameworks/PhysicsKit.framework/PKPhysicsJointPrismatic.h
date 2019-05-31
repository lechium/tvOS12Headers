/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointPrismatic : PKPhysicsJoint {

	unsigned* _jointDef : 2PrismaticJointDef;
	unsigned* _joint : 2PrismaticJoint;
	CGPoint _anchor;
	CGVector _axis;

}

@property (assign,nonatomic) BOOL shouldEnableLimits; 
@property (assign,nonatomic) double lowerDistanceLimit; 
@property (assign,nonatomic) double upperDistanceLimit; 
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 axis:(CGVector)arg4 ;
-(BOOL)isEqualToPrismaticJoint:(id)arg1 ;
-(unsigned*)_joint;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 axis:(CGVector)arg4 ;
-(void)create;
-(BOOL)shouldEnableLimits;
-(double)lowerDistanceLimit;
-(double)upperDistanceLimit;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setShouldEnableLimits:(BOOL)arg1 ;
-(void)setLowerDistanceLimit:(double)arg1 ;
-(void)setUpperDistanceLimit:(double)arg1 ;
@end

