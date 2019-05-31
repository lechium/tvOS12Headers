/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MUMathExpressionBase.h>

@interface MUMathExpressionFloatBased : MUMathExpressionBase {

	FunctionInterpreter<float>* mInterpreter;

}
+(float)invalidResult;
+(float)evaluateString:(id)arg1 error:(id*)arg2 ;
-(void)finalize;
-(id)initWithString:(id)arg1 error:(id*)arg2 ;
-(void)setVariableValues:(id)arg1 ;
-(float)evaluate;
-(void)setValue:(float)arg1 forVariable:(id)arg2 ;
-(void)resetAllVariables;
-(void)_resetVariableIndicies;
-(void)replaceVariable:(id)arg1 withValue:(float)arg2 ;
-(BOOL)isValueIllegal:(float)arg1 ;
-(id)init;
-(void)dealloc;
-(id)stringValue;
-(void)cleanup;
-(float)valueForVariable:(id)arg1 ;
-(BOOL)isConstant;
@end

