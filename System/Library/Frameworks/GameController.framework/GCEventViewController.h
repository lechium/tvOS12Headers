/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@interface GCEventViewController : UIViewController {

	BOOL _internalControllerUserInteractionEnabled;
	BOOL _controllerUserInteractionEnabledSetExternally;
	BOOL _controllerUserInteractionEnabled;

}

@property (assign,nonatomic) BOOL controllerUserInteractionEnabled;              //@synthesize controllerUserInteractionEnabled=_controllerUserInteractionEnabled - In the implementation block
-(BOOL)_shouldForwardControllerEvents;
-(void)setControllerUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)controllerUserInteractionEnabled;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_handleGameControllerEvent:(id)arg1 ;
@end
