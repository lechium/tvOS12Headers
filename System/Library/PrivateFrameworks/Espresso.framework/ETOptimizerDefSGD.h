/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/ETOptimizerDef.h>

@interface ETOptimizerDefSGD : ETOptimizerDef {

	float _lr;
	float _lr_decay_epoch;
	float _momentum;
	float _weight_decay;

}

@property (assign) float lr;                          //@synthesize lr=_lr - In the implementation block
@property (assign) float lr_decay_epoch;              //@synthesize lr_decay_epoch=_lr_decay_epoch - In the implementation block
@property (assign) float momentum;                    //@synthesize momentum=_momentum - In the implementation block
@property (assign) float weight_decay;                //@synthesize weight_decay=_weight_decay - In the implementation block
-(void)setLr:(float)arg1 ;
-(void)setLr_decay_epoch:(float)arg1 ;
-(void)setMomentum:(float)arg1 ;
-(void)setWeight_decay:(float)arg1 ;
-(float)lr;
-(float)lr_decay_epoch;
-(float)momentum;
-(float)weight_decay;
-(id)init;
@end

