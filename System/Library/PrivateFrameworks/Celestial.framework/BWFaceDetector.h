/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWFaceDetector <NSObject>
@property (readonly) float secondsSinceLastFaceDetected; 
@required
-(int)getFaceRects:(CGRect*)arg1 maxCount:(int)arg2 forPTS:(SCD_Struct_BW2)arg3;
-(float)secondsSinceLastFaceDetected;

@end

