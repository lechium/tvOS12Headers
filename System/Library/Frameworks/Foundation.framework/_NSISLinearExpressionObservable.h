/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSObservationSource.h>

@class NSNumber, NSISLinearExpression, NSISEngine, NSMutableArray;

@interface _NSISLinearExpressionObservable : NSObservationSource {

	NSNumber* _lastValue;
	NSISLinearExpression* _expression;
	NSISEngine* _associatedEngine;
	NSMutableArray* _variableObservations;
	id _changeTransactionObservation;
	BOOL _valueIsDirtied;

}
+(id)observableForExpression:(id)arg1 inEngine:(id)arg2 ;
-(id)initWithExpression:(id)arg1 inEngine:(id)arg2 ;
-(void)receiveObservedValue:(id)arg1 fromVariable:(id)arg2 ;
-(void)emitValueIfNeeded;
-(void)_lazilyObserveVariablesIfNeeded;
-(BOOL)_overrideUseFastBlockObservers;
-(void)dealloc;
-(id)addObserver:(id)arg1 ;
-(id)addObserverBlock:(/*^block*/id)arg1 ;
@end

