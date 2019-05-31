/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/TVTextEntryControllerDelegate.h>

@protocol AKTVSignInViewControllerDelegate;
@class NSString, UIViewController, UITapGestureRecognizer;

@interface AKTVSignInViewController : UIViewController <UIGestureRecognizerDelegate, TVTextEntryControllerDelegate> {

	NSString* _currentTitle;
	NSString* _currentSubtitle;
	BOOL _isUsernameEditable;
	BOOL _didPerformAction;
	/*^block*/id _ak_cancelAction;
	/*^block*/id _ak_authenticateAction;
	NSString* _username;
	NSString* _password;
	NSString* _reason;
	NSString* _signInButtonString;
	id<AKTVSignInViewControllerDelegate> _signInDelegate;
	UIViewController* _childViewController;
	UITapGestureRecognizer* _menuRecognizer;
	long long _state;

}

@property (nonatomic,retain) UIViewController * childViewController;                                  //@synthesize childViewController=_childViewController - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * menuRecognizer;                                 //@synthesize menuRecognizer=_menuRecognizer - In the implementation block
@property (assign,nonatomic) long long state;                                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL didPerformAction;                                                   //@synthesize didPerformAction=_didPerformAction - In the implementation block
@property (nonatomic,copy) NSString * username;                                                       //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                                       //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                         //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * signInButtonString;                                             //@synthesize signInButtonString=_signInButtonString - In the implementation block
@property (assign,nonatomic,__weak) id<AKTVSignInViewControllerDelegate> signInDelegate;              //@synthesize signInDelegate=_signInDelegate - In the implementation block
@property (assign,nonatomic) BOOL isUsernameEditable;                                                 //@synthesize isUsernameEditable=_isUsernameEditable - In the implementation block
@property (nonatomic,copy) id ak_cancelAction;                                                        //@synthesize ak_cancelAction=_ak_cancelAction - In the implementation block
@property (nonatomic,copy) id ak_authenticateAction;                                                  //@synthesize ak_authenticateAction=_ak_authenticateAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isUsernameEditable;
-(void)_handleMenuRecognizer:(id)arg1 ;
-(id<AKTVSignInViewControllerDelegate>)signInDelegate;
-(id)ak_cancelAction;
-(BOOL)didPerformAction;
-(void)performCancelAction;
-(void)setDidPerformAction:(BOOL)arg1 ;
-(void)_showUsernameEntryViewController;
-(void)_showPasswordEntryViewController;
-(id)ak_authenticateAction;
-(void)_showActivityIndicatorViewController;
-(void)performAuthenticateAction;
-(void)_showCredentialEntryViewControllerForState:(long long)arg1 ;
-(NSString *)signInButtonString;
-(void)_submitButtonPressed:(id)arg1 ;
-(void)_showChildViewController:(id)arg1 ;
-(UIViewController *)childViewController;
-(void)resetAuthenticatingState;
-(void)setAk_cancelAction:(id)arg1 ;
-(void)setAk_authenticateAction:(id)arg1 ;
-(void)setSignInButtonString:(NSString *)arg1 ;
-(void)setSignInDelegate:(id<AKTVSignInViewControllerDelegate>)arg1 ;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(void)_textFieldTextDidChange:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)setIsUsernameEditable:(BOOL)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)textEntryControllerDidFinish:(id)arg1 ;
-(UITapGestureRecognizer *)menuRecognizer;
-(void)setMenuRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)_titleStringAttributes;
-(id)_messageStringAttributes;
-(void)textEntryController:(id)arg1 didReceiveAutofillSuggestion:(id)arg2 ;
-(long long)state;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)setState:(long long)arg1 ;
-(NSString *)reason;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(NSString *)username;
-(NSString *)password;
@end

