/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MDLTransformComponent.h>

@class CAAnimation, NSString, NSArray;

@interface MDLTransform : NSObject <NSCopying, MDLTransformComponent> {

	MDLAffineTransform* _transform;

}

@property (nonatomic,readonly) CAAnimation * transformAnimation; 
@property (assign,nonatomic)  translation; 
@property (assign,nonatomic)  rotation; 
@property (assign,nonatomic)  shear; 
@property (assign,nonatomic)  scale; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SCD_Struct_MD1 matrix; 
@property (assign,nonatomic) BOOL resetsTransform; 
@property (nonatomic,readonly) double minimumTime; 
@property (nonatomic,readonly) double maximumTime; 
@property (nonatomic,copy,readonly) NSArray * keyTimes; 
+(SCD_Struct_MD1)globalTransformWithObject:(id)arg1 atTime:(double)arg2 ;
+(SCD_Struct_MD1)localTransformWithObject:(id)arg1 atTime:(double)arg2 ;
-(void)setIdentity;
-(id)initWithIdentity;
-(SCD_Struct_MD1)rotationMatrixAtTime:(double)arg1 ;
-(SCD_Struct_MD1)localTransformAtTime:(double)arg1 ;
-(void)setLocalTransform:(SCD_Struct_MD1)arg1 ;
-(BOOL)resetsTransform;
-(void)setResetsTransform:(BOOL)arg1 ;
-(void)setLocalTransform:(SCD_Struct_MD1)arg1 forTime:(double)arg2 ;
-(id)initWithTransformComponent:(id)arg1 ;
-()shear;
-(void)setShear:;
-(2)scaleAtTime:(double)arg1 ;
-(2)shearAtTime:(double)arg1 ;
-(2)translationAtTime:(double)arg1 ;
-(2)rotationAtTime:(double)arg1 ;
-(void)setMatrix:(SCD_Struct_MD1)arg1 forTime:(double)arg2 ;
-(void)setRotation:()arg1 ;
-(void)setShear:()arg1 ;
-(void)setScale:()arg1 ;
-(void)setTranslation:()arg1 ;
-(id)initWithTransformComponent:(id)arg1 resetsTransform:(BOOL)arg2 ;
-(id)initWithMatrix:(SCD_Struct_MD1)arg1 resetsTransform:(BOOL)arg2 ;
-(CAAnimation *)transformAnimation;
-(SCD_Struct_MD1)matrix;
-(id)initWithMatrix:(SCD_Struct_MD1)arg1 ;
-(void)setMatrix:(SCD_Struct_MD1)arg1 ;
-(double)maximumTime;
-(double)minimumTime;
-(id)init;
-()scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScale:;
-()rotation;
-(void)setRotation:;
-()translation;
-(NSArray *)keyTimes;
-(void)setTranslation:;
@end

