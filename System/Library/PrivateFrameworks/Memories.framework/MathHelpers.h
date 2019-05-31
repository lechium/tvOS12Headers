/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@interface MathHelpers : NSObject
+(double)mapValue:(double)arg1 fromRangeStart:(double)arg2 fromRangeEnd:(double)arg3 toRangeStart:(double)arg4 toRangeEnd:(double)arg5 clamp:(BOOL)arg6 ;
+(CGRect)rectWithAspectRatio:(double)arg1 thatFillsRectBiasedVertically:(CGRect)arg2 ;
+(CGRect)rectWithAspectRatio:(double)arg1 thatFillsRect:(CGRect)arg2 ;
+(CGRect)rectWithShortestWidthByComparingRect1:(CGRect)arg1 rect2:(CGRect)arg2 ;
+(CGRect)scaleRect:(CGRect)arg1 horizontalScale:(double)arg2 verticalScale:(double)arg3 maintainCenterPoint:(BOOL)arg4 ;
+(CGRect)rectWithLongestWidthByComparingRect1:(CGRect)arg1 rect2:(CGRect)arg2 ;
+(CGRect)horizontallyCenterRect:(CGRect)arg1 overRect:(CGRect)arg2 ;
+(CGRect)verticallyCenterRect:(CGRect)arg1 overRect:(CGRect)arg2 ;
+(CGRect)horizontallyCenterRect:(CGRect)arg1 overPoint:(CGPoint)arg2 ;
+(CGRect)verticallyCenterRect:(CGRect)arg1 overPoint:(CGPoint)arg2 ;
+(CGRect)moveRectHorizontally:(CGRect)arg1 toKeepWithinRect:(CGRect)arg2 ;
+(CGRect)moveRectVertically:(CGRect)arg1 toKeepWithinRect:(CGRect)arg2 ;
+(CGRect)centerRect:(CGRect)arg1 overRect:(CGRect)arg2 ;
+(CGPoint)negatePoint:(CGPoint)arg1 ;
+(CGPoint)endPointOfLineWithStartPoint:(CGPoint)arg1 slope:(CGPoint)arg2 distance:(double)arg3 ;
+(CGRect)centerRect:(CGRect)arg1 overPoint:(CGPoint)arg2 ;
+(CGRect)moveRect:(CGRect)arg1 toKeepWithinRect:(CGRect)arg2 ;
+(CGPoint)slopeOfLineWithStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 ;
+(void)lineWithMidPoint:(CGPoint)arg1 slope:(CGPoint)arg2 length:(double)arg3 outStartPoint:(CGPoint*)arg4 outEndPoint:(CGPoint*)arg5 ;
+(CGPoint)midPointBetweenPoint1:(CGPoint)arg1 point2:(CGPoint)arg2 ;
@end

