/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSObservationSource.h>

@class NSISVariable, NSISEngine;

@interface _NSISVariableObservable : NSObservationSource {

	_NSISVariableObservable* _nextDirtyObservable;
	_NSISVariableObservable* _prevDirtyObservable;
	double _lastValue;
	NSISVariable* _variable;
	NSISEngine* _associatedEngine;
	unsigned _hasLastValue : 1;
	unsigned _valueIsDirtied : 1;

}
+(id)observableForVariable:(id)arg1 inEngine:(id)arg2 ;
-(void)emitValueIfNeeded;
-(id)initWithVariable:(id)arg1 inEngine:(id)arg2 ;
-(BOOL)valueHasChanged;
-(void)dealloc;
-(void)receiveObservedValue:(id)arg1 ;
@end

