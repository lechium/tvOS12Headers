/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@interface SCRCPhotoEvaluatorResultLuminance : SCRCPhotoEvaluatorResult {

	double _darknessLevel;
	double _brightnessLevel;
	double _averageLevel;

}

@property (nonatomic,readonly) double darknessLevel;                //@synthesize darknessLevel=_darknessLevel - In the implementation block
@property (nonatomic,readonly) double brightnessLevel;              //@synthesize brightnessLevel=_brightnessLevel - In the implementation block
@property (nonatomic,readonly) double averageLevel;                 //@synthesize averageLevel=_averageLevel - In the implementation block
-(id)initWithDarknessLevel:(double)arg1 brightnessLevel:(double)arg2 averageLevel:(double)arg3 ;
-(double)darknessLevel;
-(double)averageLevel;
-(id)humanReadableResult;
-(double)brightnessLevel;
@end

