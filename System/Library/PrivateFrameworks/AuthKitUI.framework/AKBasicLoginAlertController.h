/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol NSObject, AKBasicLoginAlertControllerDelegate;
@class NSString;

@interface AKBasicLoginAlertController : UIAlertController <UITextFieldDelegate> {

	long long _alertStyle;
	id<NSObject> _didEnterCodeObserver;
	/*^block*/id _ak_cancelAction;
	/*^block*/id _ak_authenticateAction;
	/*^block*/id _ak_createIDAction;
	/*^block*/id _ak_useIDAction;
	/*^block*/id _ak_forgotIDAction;
	/*^block*/id _ak_forgotPasswordAction;
	NSString* _ak_username;
	NSString* _ak_password;
	NSString* _ak_title;
	NSString* _ak_reason;
	NSString* _ak_authenticateButtonTitle;
	/*^block*/id _ak_regenerateCodeAction;
	/*^block*/id _ak_codeEnteredAction;
	NSString* _generatedCode;
	id<AKBasicLoginAlertControllerDelegate> _delegate;

}

@property (nonatomic,copy) NSString * username;                                                    //@synthesize ak_username=_ak_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                                    //@synthesize ak_password=_ak_password - In the implementation block
@property (nonatomic,copy) NSString * authenticateTitle;                                           //@synthesize ak_title=_ak_title - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                      //@synthesize ak_reason=_ak_reason - In the implementation block
@property (nonatomic,copy) NSString * authenticateButtonTitle;                                     //@synthesize ak_authenticateButtonTitle=_ak_authenticateButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * generatedCode;                                               //@synthesize generatedCode=_generatedCode - In the implementation block
@property (assign,nonatomic) long long alertStyle; 
@property (nonatomic,copy) id authenticateAction;                                                  //@synthesize ak_authenticateAction=_ak_authenticateAction - In the implementation block
@property (nonatomic,copy) id ak_cancelAction;                                                     //@synthesize ak_cancelAction=_ak_cancelAction - In the implementation block
@property (nonatomic,copy) id createIDAction;                                                      //@synthesize ak_createIDAction=_ak_createIDAction - In the implementation block
@property (nonatomic,copy) id useIDAction;                                                         //@synthesize ak_useIDAction=_ak_useIDAction - In the implementation block
@property (nonatomic,copy) id forgotIDAction;                                                      //@synthesize ak_forgotIDAction=_ak_forgotIDAction - In the implementation block
@property (nonatomic,copy) id forgotPasswordAction;                                                //@synthesize ak_forgotPasswordAction=_ak_forgotPasswordAction - In the implementation block
@property (nonatomic,copy) id regenerateCodeAction;                                                //@synthesize ak_regenerateCodeAction=_ak_regenerateCodeAction - In the implementation block
@property (nonatomic,copy) id codeEnteredAction;                                                   //@synthesize ak_codeEnteredAction=_ak_codeEnteredAction - In the implementation block
@property (assign,nonatomic,__weak) id<AKBasicLoginAlertControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGeneratedCode:(NSString *)arg1 ;
-(NSString *)generatedCode;
-(id)ak_cancelAction;
-(void)setAk_cancelAction:(id)arg1 ;
-(void)setPasscodeFieldDisabled:(BOOL)arg1 ;
-(void)clearSecondFactorEntry;
-(id)_passwordField;
-(void)setAlertStyle:(long long)arg1 ;
-(void)_setupViewControllerForAlertStyle;
-(void)_endObservingDidEnterCodeNotifications;
-(void)_setupViewControllerForDefaultStyle;
-(void)_setupViewControllerForNonEditableUsernameFieldStyle;
-(void)_setupViewControllerForUserOrCreateAppleIDStyle;
-(void)_setupViewControllerForIForgotStyle;
-(void)_setupViewControllerForSecondFactorEntryStyle;
-(NSString *)authenticateButtonTitle;
-(void)_syncUsernameAndPasswordPropertiesWithTextFieldContent;
-(id)authenticateAction;
-(id)_wrappedCancelAction;
-(NSString *)authenticateTitle;
-(id)_interpolatedReasonString;
-(void)_passwordFieldDidChange:(id)arg1 ;
-(void)_dismissAndShowiForgot:(id)arg1 ;
-(void)_setupAuthenticateAndCancelButtons;
-(id)useIDAction;
-(id)createIDAction;
-(id)forgotIDAction;
-(id)forgotPasswordAction;
-(id)regenerateCodeAction;
-(void)_didEnterCode:(id)arg1 ;
-(id)codeEnteredAction;
-(id)initWithAlertStyle:(long long)arg1 ;
-(void)setAuthenticateTitle:(NSString *)arg1 ;
-(void)setAuthenticateButtonTitle:(NSString *)arg1 ;
-(void)_jiggleTheAlert;
-(void)_clearPasswordField;
-(void)_beginObservingDidEnterCodeNotifications;
-(void)setAuthenticateAction:(id)arg1 ;
-(void)setCreateIDAction:(id)arg1 ;
-(void)setUseIDAction:(id)arg1 ;
-(void)setForgotIDAction:(id)arg1 ;
-(void)setForgotPasswordAction:(id)arg1 ;
-(void)setRegenerateCodeAction:(id)arg1 ;
-(void)setCodeEnteredAction:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<AKBasicLoginAlertControllerDelegate>)arg1 ;
-(id<AKBasicLoginAlertControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSString *)reason;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(void)startAnimating;
-(void)stopAnimating;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(NSString *)username;
-(NSString *)password;
-(long long)alertStyle;
@end

