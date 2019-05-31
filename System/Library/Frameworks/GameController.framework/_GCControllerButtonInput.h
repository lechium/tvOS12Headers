/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GCControllerButtonInput.h>

@class NSString;

@interface _GCControllerButtonInput : GCControllerButtonInput {

	/*^block*/id _valueChangedHandler;
	/*^block*/id _pressedChangedHandler;
	float _value;
	NSString* _descriptionName;
	BOOL _nonAnalog;

}

@property (assign) BOOL nonAnalog;              //@synthesize nonAnalog=_nonAnalog - In the implementation block
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)valueChangedHandler;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)isAnalog;
-(/*^block*/id)pressedChangedHandler;
-(void)setPressedChangedHandler:(/*^block*/id)arg1 ;
-(id)initWithDescriptionName:(id)arg1 ;
-(BOOL)nonAnalog;
-(void)setNonAnalog:(BOOL)arg1 ;
-(id)description;
-(float)value;
-(BOOL)_setValue:(float)arg1 ;
@end

