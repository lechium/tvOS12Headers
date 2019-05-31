/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSRootController.h>

@protocol PSController;
@class NSDictionary, UIViewController, PSRootController;

@interface PSSetupController : PSRootController {

	NSDictionary* _rootInfo;
	UIViewController*<PSController> _parentController;
	PSRootController* _parentRootController;

}
-(void)setParentController:(id)arg1 ;
-(void)setupController;
-(BOOL)usePopupStyle;
-(BOOL)popupStyleIsModal;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)handleURL:(id)arg1 ;
-(id)parentController;
-(void)statusBarWillChangeHeight:(id)arg1 ;
-(void)pushControllerOnParentWithSpecifier:(id)arg1 ;
-(void)popControllerOnParent;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)dismiss;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)controller;
@end

