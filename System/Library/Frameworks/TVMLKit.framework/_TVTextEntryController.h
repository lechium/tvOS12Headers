/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UISystemInputViewControllerDelegate.h>

@protocol TVTextEntryControllerDelegate;
@class __TVTextEntryTextField, UIView, UILabel, UISystemInputViewController, UITextField, NSString;

@interface _TVTextEntryController : UIViewController <UISystemInputViewControllerDelegate> {

	__TVTextEntryTextField* _textField;
	UIView* _topAccessoryView;
	UIView* _bottomAccessoryView;
	BOOL _isTouchEnabled;
	UIView* _preferredFocusedView;
	BOOL _hideAccessoryViews;
	id<TVTextEntryControllerDelegate> _delegate;
	UILabel* _textFieldHeaderLabel;
	UISystemInputViewController* _systemInputViewController;

}

@property (nonatomic,readonly) UISystemInputViewController * systemInputViewController;              //@synthesize systemInputViewController=_systemInputViewController - In the implementation block
@property (assign,nonatomic,__weak) id<TVTextEntryControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                                              //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UILabel * textFieldHeaderLabel;                                       //@synthesize textFieldHeaderLabel=_textFieldHeaderLabel - In the implementation block
@property (nonatomic,retain) UIView * topAccessoryView;                                              //@synthesize topAccessoryView=_topAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * bottomAccessoryView;                                           //@synthesize bottomAccessoryView=_bottomAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL textFieldAllowsFocus; 
@property (assign,nonatomic) unsigned long long maxLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textFieldDidChange:(id)arg1 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(void)setTopAccessoryView:(UIView *)arg1 ;
-(void)setBottomAccessoryView:(UIView *)arg1 ;
-(BOOL)textFieldAllowsFocus;
-(void)setTextFieldAllowsFocus:(BOOL)arg1 ;
-(UILabel *)textFieldHeaderLabel;
-(UIView *)topAccessoryView;
-(UIView *)bottomAccessoryView;
-(UISystemInputViewController *)systemInputViewController;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<TVTextEntryControllerDelegate>)arg1 ;
-(id<TVTextEntryControllerDelegate>)delegate;
-(UITextField *)textField;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_enableAutomaticKeyboardPressDone;
-(unsigned long long)maxLength;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(void)systemInputViewControllerDidAcceptRecentInput:(id)arg1 ;
-(void)systemInputViewController:(id)arg1 didChangeAccessoryVisibility:(BOOL)arg2 ;
@end
