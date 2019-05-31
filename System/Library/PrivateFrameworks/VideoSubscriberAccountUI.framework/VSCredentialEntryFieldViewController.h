/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol VSCredentialEntryFieldViewControllerDelegate;
@class VSCredentialEntryField, UIImage, NSString, UITextField, UILabel, VSFontCenter;

@interface VSCredentialEntryFieldViewController : UIViewController <UITextFieldDelegate> {

	id<VSCredentialEntryFieldViewControllerDelegate> _delegate;
	VSCredentialEntryField* _credentialEntryField;
	UIImage* _logo;
	NSString* _headerTitle;
	NSString* _headerMessageText;
	NSString* _footerMessageText;
	UITextField* _textField;
	UILabel* _footerLabel;
	id _textFieldTextDidChangeObserver;
	VSFontCenter* _fontCenter;

}

@property (nonatomic,retain) UITextField * textField;                                                       //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                                                         //@synthesize footerLabel=_footerLabel - In the implementation block
@property (assign,nonatomic,__weak) id textFieldTextDidChangeObserver;                                      //@synthesize textFieldTextDidChangeObserver=_textFieldTextDidChangeObserver - In the implementation block
@property (nonatomic,retain) VSFontCenter * fontCenter;                                                     //@synthesize fontCenter=_fontCenter - In the implementation block
@property (assign,nonatomic,__weak) id<VSCredentialEntryFieldViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VSCredentialEntryField * credentialEntryField;                                 //@synthesize credentialEntryField=_credentialEntryField - In the implementation block
@property (nonatomic,retain) UIImage * logo;                                                                //@synthesize logo=_logo - In the implementation block
@property (nonatomic,copy) NSString * headerTitle;                                                          //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy) NSString * headerMessageText;                                                    //@synthesize headerMessageText=_headerMessageText - In the implementation block
@property (nonatomic,copy) NSString * footerMessageText;                                                    //@synthesize footerMessageText=_footerMessageText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLogo:(UIImage *)arg1 ;
-(UIImage *)logo;
-(void)setTextField:(UITextField *)arg1 ;
-(VSCredentialEntryField *)credentialEntryField;
-(void)_configureTextField;
-(VSFontCenter *)fontCenter;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(UILabel *)footerLabel;
-(void)_workaroundForRadar30931022;
-(void)setCredentialEntryField:(VSCredentialEntryField *)arg1 ;
-(NSString *)headerMessageText;
-(void)setHeaderMessageText:(NSString *)arg1 ;
-(NSString *)footerMessageText;
-(void)setFooterMessageText:(NSString *)arg1 ;
-(id)textFieldTextDidChangeObserver;
-(void)setTextFieldTextDidChangeObserver:(id)arg1 ;
-(void)setFontCenter:(VSFontCenter *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<VSCredentialEntryFieldViewControllerDelegate>)arg1 ;
-(id<VSCredentialEntryFieldViewControllerDelegate>)delegate;
-(UITextField *)textField;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
@end

