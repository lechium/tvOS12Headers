/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAnimationKeyframe.h>

@interface MCAnimationKeyframe1D : MCAnimationKeyframe {

	float mValue;

}

@property (assign,nonatomic) float value; 
+(id)keyframeWithScalar:(float)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
+(id)keyframeWithScalar:(float)arg1 atTime:(double)arg2 ;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(id)description;
-(float)value;
-(void)setValue:(float)arg1 ;
@end
