/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libacmobileshim.dylib/ACMiTunesSignInDialog.h>
#import <libobjc.A.dylib/acmAlertViewDelegateProtocol.h>

@class UITextField, NSString;

@interface ACMiTunesSignInDialog_Legacy : ACMiTunesSignInDialog <acmAlertViewDelegateProtocol> {

	UITextField* _editingTextField;

}

@property (nonatomic,retain) UITextField * editingTextField;              //@synthesize editingTextField=_editingTextField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEditingTextField:(UITextField *)arg1 ;
-(CGRect)userNameFrame;
-(CGRect)passwordFrame;
-(UITextField *)editingTextField;
-(void)acmAlertViewWillBecomeInvisible;
-(void)acmAlertViewWillBecomeVisible;
-(void)handleRotation;
-(void)handleTextFieldShouldReturnOnNonPasswordField;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)willPresentAlertView:(id)arg1 ;
-(void)didPresentAlertView:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
@end

