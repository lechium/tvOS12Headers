/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKBPanGestureVelocitySample : NSObject {

	CGPoint start;
	CGPoint end;
	double dt;
	double force;
	double majorRadius;

}

@property (assign) CGPoint start; 
@property (assign) CGPoint end; 
@property (assign) double dt; 
@property (assign) double force; 
@property (assign) double majorRadius; 
-(CGPoint)start;
-(double)force;
-(void)setForce:(double)arg1 ;
-(void)setStart:(CGPoint)arg1 ;
-(CGPoint)end;
-(void)setEnd:(CGPoint)arg1 ;
-(double)dt;
-(void)setDt:(double)arg1 ;
-(double)majorRadius;
-(void)setMajorRadius:(double)arg1 ;
-(void)pullValuesFrom:(id)arg1 ;
-(void)resetValues;
@end
