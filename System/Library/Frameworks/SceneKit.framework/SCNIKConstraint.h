/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@class SCNNode, NSMutableDictionary;

@interface SCNIKConstraint : SCNConstraint {

	SCNNode* _chainRootNode;
	SCNVector3 _ikTarget;
	NSMutableDictionary* _jointsPerNode;

}

@property (nonatomic,readonly) SCNNode * chainRootNode; 
@property (assign,nonatomic) SCNVector3 targetPosition; 
+(id)inverseKinematicsConstraintWithChainRootNode:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithChainRootNode:(id)arg1 ;
-(void)setMaxAllowedRotationAngle:(double)arg1 forJoint:(id)arg2 ;
-(double)maxAllowedRotationAngleForJoint:(id)arg1 ;
-(SCNNode *)chainRootNode;
-(SCNVector3)targetPosition;
-(void)setTargetPosition:(SCNVector3)arg1 ;
-(void)setChainRootNode:(SCNNode *)arg1 ;
-(id)jointForNode:(id)arg1 ;
-(void)_customEncodingOfSCNIKConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNIKConstraint:(id)arg1 ;
-(void)_didDecodeSCNIKConstraint:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

