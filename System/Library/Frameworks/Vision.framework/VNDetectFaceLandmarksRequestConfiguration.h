/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSNumber;

@interface VNDetectFaceLandmarksRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _refineMouthRegion;
	BOOL _refineLeftEyeRegion;
	BOOL _refineRightEyeRegion;
	BOOL _performBlinkDetection;
	NSNumber* _cascadeStepCount;

}

@property (assign,nonatomic) BOOL refineMouthRegion;                   //@synthesize refineMouthRegion=_refineMouthRegion - In the implementation block
@property (assign,nonatomic) BOOL refineLeftEyeRegion;                 //@synthesize refineLeftEyeRegion=_refineLeftEyeRegion - In the implementation block
@property (assign,nonatomic) BOOL refineRightEyeRegion;                //@synthesize refineRightEyeRegion=_refineRightEyeRegion - In the implementation block
@property (assign,nonatomic) BOOL performBlinkDetection;               //@synthesize performBlinkDetection=_performBlinkDetection - In the implementation block
@property (nonatomic,retain) NSNumber * cascadeStepCount;              //@synthesize cascadeStepCount=_cascadeStepCount - In the implementation block
-(NSNumber *)cascadeStepCount;
-(void)setCascadeStepCount:(NSNumber *)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setRefineMouthRegion:(BOOL)arg1 ;
-(void)setRefineLeftEyeRegion:(BOOL)arg1 ;
-(void)setRefineRightEyeRegion:(BOOL)arg1 ;
-(void)setPerformBlinkDetection:(BOOL)arg1 ;
-(BOOL)refineMouthRegion;
-(BOOL)refineLeftEyeRegion;
-(BOOL)refineRightEyeRegion;
-(BOOL)performBlinkDetection;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

