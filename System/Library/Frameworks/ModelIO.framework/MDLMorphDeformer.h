/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MDLMorphDeformerComponent.h>

@class NSArray, MDLAnimatedScalarArray, NSData, NSString;

@interface MDLMorphDeformer : NSObject <NSCopying, MDLMorphDeformerComponent> {

	NSArray* _targetShapes;
	MDLAnimatedScalarArray* _weights;
	NSData* _targetWeights;
	NSData* _targetCounts;

}

@property (nonatomic,retain) MDLAnimatedScalarArray * weights;               //@synthesize weights=_weights - In the implementation block
@property (nonatomic,retain) NSData * targetWeights;                         //@synthesize targetWeights=_targetWeights - In the implementation block
@property (nonatomic,retain) NSData * targetCounts;                          //@synthesize targetCounts=_targetCounts - In the implementation block
@property (nonatomic,readonly) NSArray * targetShapes;                       //@synthesize targetShapes=_targetShapes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * shapeSetTargetWeights; 
@property (nonatomic,readonly) NSArray * shapeSetTargetCounts; 
-(void)setWeights:(MDLAnimatedScalarArray *)arg1 ;
-(MDLAnimatedScalarArray *)weights;
-(id)initWithOther:(id)arg1 ;
-(id)initWithTargetShapes:(id)arg1 shapeSetTargetWeights:(id)arg2 shapeSetTargetCounts:(id)arg3 ;
-(id)initWithTargetShapes:(id)arg1 shapeSetTargetWeights:(const float*)arg2 count:(unsigned long long)arg3 shapeSetTargetCounts:(const unsigned*)arg4 count:(unsigned long long)arg5 ;
-(unsigned long long)copyShapeSetTargetWeightsInto:(float*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)copyShapeSetTargetCountsInto:(unsigned*)arg1 maxCount:(unsigned long long)arg2 ;
-(NSData *)targetWeights;
-(void)setTargetWeights:(NSData *)arg1 ;
-(NSData *)targetCounts;
-(void)setTargetCounts:(NSData *)arg1 ;
-(NSArray *)shapeSetTargetCounts;
-(NSArray *)targetShapes;
-(NSArray *)shapeSetTargetWeights;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

