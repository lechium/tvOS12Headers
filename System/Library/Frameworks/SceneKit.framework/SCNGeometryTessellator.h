/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface SCNGeometryTessellator : NSObject <NSCopying, NSSecureCoding> {

	NSMutableSet* _clients;
	BOOL _adaptive;
	BOOL _screenSpace;
	float _maximumEdgeLength;
	float _edgeTessellationFactor;
	float _insideTessellationFactor;
	float _tessellationFactorScale;
	long long _smoothingMode;
	unsigned long long _partitionMode;

}

@property (assign,nonatomic) double tessellationFactorScale; 
@property (assign,nonatomic) unsigned long long tessellationPartitionMode; 
@property (assign,getter=isAdaptive,nonatomic) BOOL adaptive; 
@property (assign,getter=isScreenSpace,nonatomic) BOOL screenSpace; 
@property (assign,nonatomic) double edgeTessellationFactor; 
@property (assign,nonatomic) double insideTessellationFactor; 
@property (assign,nonatomic) double maximumEdgeLength; 
@property (assign,nonatomic) long long smoothingMode; 
+(BOOL)supportsSecureCoding;
-(BOOL)isAdaptive;
-(void)setAdaptive:(BOOL)arg1 ;
-(void)setTessellationFactorScale:(double)arg1 ;
-(void)setTessellationPartitionMode:(unsigned long long)arg1 ;
-(void)clientWillDie:(id)arg1 ;
-(void)tessellatorValueDidChangeForClient:(id)arg1 ;
-(BOOL)isScreenSpace;
-(double)tessellationFactorScale;
-(unsigned long long)tessellationPartitionMode;
-(long long)smoothingMode;
-(double)edgeTessellationFactor;
-(double)insideTessellationFactor;
-(double)maximumEdgeLength;
-(SCD_Struct_SC27)_tessellatorValueForGeometry:(id)arg1 ;
-(void)tessellatorValueDidChange;
-(void)setSmoothingMode:(long long)arg1 ;
-(BOOL)adaptive;
-(BOOL)screenSpace;
-(void)setScreenSpace:(BOOL)arg1 ;
-(void)setEdgeTessellationFactor:(double)arg1 ;
-(void)setInsideTessellationFactor:(double)arg1 ;
-(void)setMaximumEdgeLength:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
@end

