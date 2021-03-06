/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerDirectionPad.h>

@class _GCControllerAxisInput, NSString;

@interface _GCControllerDirectionPad : GCControllerDirectionPad {

	/*^block*/id _valueChangedHandler;
	_GCControllerAxisInput* _xAxis;
	_GCControllerAxisInput* _yAxis;
	NSString* _descriptionName;
	BOOL _nonAnalog;

}

@property (assign) BOOL nonAnalog;              //@synthesize nonAnalog=_nonAnalog - In the implementation block
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(id)xAxis;
-(id)yAxis;
-(id)left;
-(id)right;
-(id)up;
-(/*^block*/id)valueChangedHandler;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 queue:(id)arg2 ;
-(BOOL)isAnalog;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(BOOL)nonAnalog;
-(void)setNonAnalog:(BOOL)arg1 ;
-(id)initWithFlippedY:(BOOL)arg1 digital:(BOOL)arg2 ;
-(id)initWithFlippedY:(BOOL)arg1 digital:(BOOL)arg2 descriptionName:(id)arg3 ;
-(void)_fireValueChangedWithQueue:(id)arg1 ;
-(void)_fireValueChanged;
-(id)down;
-(id)description;
@end

