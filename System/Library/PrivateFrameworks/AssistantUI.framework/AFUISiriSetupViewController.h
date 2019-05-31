/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol AFUISiriSetupViewControllerDelegate;
@class UIView, _UIBackdropView, UIStatusBar;

@interface AFUISiriSetupViewController : UIViewController {

	UIView* _contentView;
	_UIBackdropView* _backdropView;
	BOOL _backdropViewVisible;
	BOOL _visible;
	BOOL _lastTimeShown;
	id<AFUISiriSetupViewControllerDelegate> _delegate;
	UIView* _siriSetupView;
	UIStatusBar* _statusBar;

}

@property (setter=_setStatusBar:,getter=_statusBar,nonatomic,retain) UIStatusBar * statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriSetupViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                                //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL lastTimeShown;                                                           //@synthesize lastTimeShown=_lastTimeShown - In the implementation block
@property (nonatomic,retain) UIView * siriSetupView;                                                       //@synthesize siriSetupView=_siriSetupView - In the implementation block
-(void)_addStatusBar;
-(void)_removeStatusBar;
-(id)dimBackdropSettings;
-(CGRect)_statusBarFrame;
-(void)_setStatusBar:(id)arg1 ;
-(id)_statusBar;
-(void)setLastTimeShown:(BOOL)arg1 ;
-(void)_continueTapped:(id)arg1 ;
-(void)_laterTapped:(id)arg1 ;
-(BOOL)lastTimeShown;
-(UIView *)siriSetupView;
-(void)setSiriSetupView:(UIView *)arg1 ;
-(id)init;
-(void)setDelegate:(id<AFUISiriSetupViewControllerDelegate>)arg1 ;
-(id<AFUISiriSetupViewControllerDelegate>)delegate;
-(BOOL)isVisible;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(void)setBackdropVisible:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
@end

