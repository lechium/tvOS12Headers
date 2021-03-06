/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MRCAMLBezierData : NSObject {

	double ax;
	double bx;
	double cx;
	double ay;
	double by;
	double cy;

}
-(id)initWithControlPoints:(const double*)arg1 ;
-(double)evaluatAtTime:(double)arg1 ;
-(id)initWithTimingFunction:(id)arg1 ;
-(double)evaluate_inverseAtTime:(double)arg1 ;
-(double)sample_x:(double)arg1 ;
-(double)sample_x_derivative:(double)arg1 ;
-(double)sample_y:(double)arg1 ;
-(double)sample_y_derivative:(double)arg1 ;
-(double)solve_x:(double)arg1 epsilon:(double)arg2 ;
-(double)solve_y:(double)arg1 epsilon:(double)arg2 ;
@end

