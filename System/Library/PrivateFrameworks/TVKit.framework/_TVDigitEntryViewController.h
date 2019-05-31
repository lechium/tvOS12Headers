/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol _TVDigitEntryViewControllerDelegate;
@class NSIndexSet, UITextField, UIView, UISystemInputViewController, NSArray, UILabel, _TVDigitGroupView, NSString;

@interface _TVDigitEntryViewController : UIViewController <UIGestureRecognizerDelegate, UITextFieldDelegate> {

	unsigned long long _numberOfDigits;
	NSIndexSet* _separatorIndexes;
	UITextField* _textField;
	UIView* _systemInputView;
	UISystemInputViewController* _systemInputViewController;
	NSArray* _volatileConstraints;
	BOOL _editable;
	UILabel* _titleLabel;
	UILabel* _promptLabel;
	_TVDigitGroupView* _digitGroupView;
	UIView* _accessoryView;
	id<_TVDigitEntryViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) _TVDigitGroupView * digitGroupView;                                 //@synthesize digitGroupView=_digitGroupView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * promptLabel;                                              //@synthesize promptLabel=_promptLabel - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                               //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable;                                      //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic,__weak) id<_TVDigitEntryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupConstraints;
-(UILabel *)promptLabel;
-(id)initWithNumberOfDigits:(unsigned long long)arg1 separatorIndexes:(id)arg2 ;
-(id)_textField;
-(_TVDigitGroupView *)digitGroupView;
-(void)_updatedTextLabels;
-(void)_addSystemInputController;
-(void)_removeSystemInputController;
-(id)initWithNumberOfDigits:(unsigned long long)arg1 ;
-(void)_handleMenuButton:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_TVDigitEntryViewControllerDelegate>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UILabel *)titleLabel;
-(id<_TVDigitEntryViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)preferredFocusedView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_enableAutomaticKeyboardPressDone;
-(void)setEditable:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(BOOL)isEditable;
-(void)_textDidChange;
@end
