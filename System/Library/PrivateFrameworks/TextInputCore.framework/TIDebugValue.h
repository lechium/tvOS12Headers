/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TIDebugValue : NSObject {

	float defaultValue;
	float sweepValue;
	float sweepMin;
	float sweepMax;
	float stepSize;

}

@property (assign,nonatomic) float defaultValue; 
@property (assign,nonatomic) float sweepValue; 
@property (assign,nonatomic) float sweepMin; 
@property (assign,nonatomic) float sweepMax; 
@property (assign,nonatomic) float stepSize; 
-(float)sweepValue;
-(void)setDefaultValue:(float)arg1 ;
-(float)sweepMin;
-(float)sweepMax;
-(void)setSweepValue:(float)arg1 ;
-(void)setSweepMin:(float)arg1 ;
-(void)setSweepMax:(float)arg1 ;
-(void)setStepSize:(float)arg1 ;
-(float)stepSize;
-(float)defaultValue;
@end

