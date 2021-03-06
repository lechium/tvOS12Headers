/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ConnectionFailureInstance : NSObject {

	double _flowStart;
	double _flowDuration;

}

@property (assign,nonatomic) double flowStart;                 //@synthesize flowStart=_flowStart - In the implementation block
@property (assign,nonatomic) double flowDuration;              //@synthesize flowDuration=_flowDuration - In the implementation block
-(double)flowDuration;
-(double)flowStart;
-(void)setFlowStart:(double)arg1 ;
-(void)setFlowDuration:(double)arg1 ;
-(id)description;
@end

