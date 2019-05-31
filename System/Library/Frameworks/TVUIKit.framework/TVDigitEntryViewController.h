/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UISystemInputResponder.h>
#import <UIKit/UISystemInputViewControllerDelegate.h>

@class NSString, UIStackView, UILabel, _TVDigitGroupView, UISystemInputViewController, UITextField, NSIndexSet;

@interface TVDigitEntryViewController : UIViewController <UISystemInputResponder, UISystemInputViewControllerDelegate> {

	BOOL _secureDigitEntry;
	UIStackView* _stackView;
	UILabel* _titleLabel;
	UILabel* _promptLabel;
	_TVDigitGroupView* _digitGroupView;
	UISystemInputViewController* _systemInputViewController;
	UITextField* _textField;
	/*^block*/id _entryCompletionHandler;
	unsigned long long _numberOfDigits;

}

@property (nonatomic,retain) UIStackView * _stackView;                                                  //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UILabel * _titleLabel;                                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * _promptLabel;                                                    //@synthesize promptLabel=_promptLabel - In the implementation block
@property (nonatomic,retain) _TVDigitGroupView * _digitGroupView;                                       //@synthesize digitGroupView=_digitGroupView - In the implementation block
@property (nonatomic,retain) UISystemInputViewController * _systemInputViewController;                  //@synthesize systemInputViewController=_systemInputViewController - In the implementation block
@property (nonatomic,retain) UITextField * _textField;                                                  //@synthesize textField=_textField - In the implementation block
@property (setter=_setSeparatorIndexes:,nonatomic,retain) NSIndexSet * _separatorIndexes; 
@property (nonatomic,copy) id entryCompletionHandler;                                                   //@synthesize entryCompletionHandler=_entryCompletionHandler - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * promptText; 
@property (assign,getter=isSecureDigitEntry,nonatomic) BOOL secureDigitEntry;                           //@synthesize secureDigitEntry=_secureDigitEntry - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfDigits;                                         //@synthesize numberOfDigits=_numberOfDigits - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_defaultPromptString,nonatomic,readonly) NSString * defaultPromptString; 
-(NSString *)titleText;
-(void)setNumberOfDigits:(unsigned long long)arg1 ;
-(void)_setSeparatorIndexes:(id)arg1 ;
-(void)setEntryCompletionHandler:(id)arg1 ;
-(void)clearEntryAnimated:(BOOL)arg1 ;
-(void)setPromptText:(NSString *)arg1 ;
-(void)setSecureDigitEntry:(BOOL)arg1 ;
-(NSString *)promptText;
-(BOOL)isSecureDigitEntry;
-(void)_addSystemInputViewControllerIfNeeded;
-(id)entryCompletionHandler;
-(NSIndexSet *)_separatorIndexes;
-(UIStackView *)_stackView;
-(void)set_stackView:(UIStackView *)arg1 ;
-(void)set_titleLabel:(UILabel *)arg1 ;
-(_TVDigitGroupView *)_digitGroupView;
-(void)set_digitGroupView:(_TVDigitGroupView *)arg1 ;
-(void)set_systemInputViewController:(UISystemInputViewController *)arg1 ;
-(void)set_textField:(UITextField *)arg1 ;
-(void)_setupTextField:(id)arg1 ;
-(unsigned long long)numberOfDigits;
-(UITextField *)_textField;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)_titleLabel;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)_reset;
-(UILabel *)_promptLabel;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_enableAutomaticKeyboardPressDone;
-(void)set_promptLabel:(UILabel *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)_textDidChange;
-(UISystemInputViewController *)_systemInputViewController;
@end

