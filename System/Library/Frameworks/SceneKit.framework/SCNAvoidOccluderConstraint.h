/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNAvoidOccluderConstraint : SCNConstraint {

	SCNNode* _target;
	unsigned long long _categoryBitMask;
	float _offset;
	id _delegate;

}

@property (assign,nonatomic) id<SCNAvoidOccluderConstraintDelegate> delegate; 
@property (nonatomic,retain) SCNNode * target; 
@property (assign,nonatomic) unsigned long long occluderCategoryBitMask; 
@property (assign,nonatomic) double bias; 
+(id)avoidOccluderConstraint;
+(id)avoidOccluderConstraintWithTarget:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(unsigned long long)occluderCategoryBitMask;
-(void)setOccluderCategoryBitMask:(unsigned long long)arg1 ;
-(void)setBias:(double)arg1 ;
-(void)_customEncodingOfSCNAvoidOccluderConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNAvoidOccluderConstraint:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(SCNNode *)arg1 ;
-(SCNNode *)target;
-(void)setDelegate:(id<SCNAvoidOccluderConstraintDelegate>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SCNAvoidOccluderConstraintDelegate>)delegate;
-(double)bias;
@end
