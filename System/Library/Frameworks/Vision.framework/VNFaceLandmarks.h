/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@class NSData;

@interface VNFaceLandmarks : NSObject {

	float _confidence;
	unsigned long long _pointCount;
	NSData* _pointsData;
	Geometry2D_rect2D_ _alignedBBox;
	CGRect _userFacingBBox;

}

@property (retain) NSData * pointsData;                         //@synthesize pointsData=_pointsData - In the implementation block
@property (assign) Geometry2D_rect2D_ alignedBBox;              //@synthesize alignedBBox=_alignedBBox - In the implementation block
@property (assign) CGRect userFacingBBox;                       //@synthesize userFacingBBox=_userFacingBBox - In the implementation block
@property (assign) unsigned long long pointCount;               //@synthesize pointCount=_pointCount - In the implementation block
@property (readonly) float confidence;                          //@synthesize confidence=_confidence - In the implementation block
-(unsigned long long)pointCount;
-(id)initWithPointsData:(id)arg1 pointCount:(unsigned long long)arg2 userFacingBBox:(CGRect)arg3 alignedBBox:(Geometry2D_rect2D_)arg4 landmarkScore:(float)arg5 ;
-(void)setPointCount:(unsigned long long)arg1 ;
-(CGRect)userFacingBBox;
-(Geometry2D_rect2D_)alignedBBox;
-(NSData *)pointsData;
-(void*)createPointArray:(const int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)isUserFacingBBoxEquivalentToAlignedBBox;
-(void)setPointsData:(NSData *)arg1 ;
-(void)setAlignedBBox:(Geometry2D_rect2D_)arg1 ;
-(void)setUserFacingBBox:(CGRect)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(float)confidence;
@end
