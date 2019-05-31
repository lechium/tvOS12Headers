/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/IKAppKeyboardDelegate.h>
#import <TVMLKit/_TVSearchBarDelegate.h>

@class IKTextFieldElement, UITextField, NSString;

@interface _TVTextFieldViewController : UIViewController <IKAppKeyboardDelegate, _TVSearchBarDelegate> {

	IKTextFieldElement* _viewElement;

}

@property (nonatomic,retain,readonly) IKTextFieldElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain,readonly) UITextField * textField; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateWithViewElement:(id)arg1 ;
-(IKTextFieldElement *)viewElement;
-(void)textDidChangeForKeyboard:(id)arg1 ;
-(void)_updateViewLayout;
-(void)searchBarDidChangeText:(id)arg1 ;
-(void)_updateKeyboardWithUserText;
-(void)_updateUserText;
-(void)dealloc;
-(UITextField *)textField;
-(void)loadView;
@end

