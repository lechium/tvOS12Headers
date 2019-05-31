/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIDocumentPasswordViewDelegate.h>

@class NSString;

@interface WKPasswordView : UIView <UIDocumentPasswordViewDelegate> {

	RetainPtr<NSString>* _documentName;
	RetainPtr<UIScrollView>* _scrollView;
	RetainPtr<UIDocumentPasswordView>* _passwordView;
	double _savedMinimumZoomScale;
	double _savedMaximumZoomScale;
	double _savedZoomScale;
	CGSize _savedContentSize;
	RetainPtr<UIColor>* _savedBackgroundColor;
	/*^block*/id _userDidEnterPassword;

}

@property (nonatomic,readonly) NSString * documentName; 
@property (nonatomic,copy) id userDidEnterPassword;                  //@synthesize userDidEnterPassword=_userDidEnterPassword - In the implementation block
-(id)initWithFrame:(CGRect)arg1 documentName:(id)arg2 ;
-(NSString *)documentName;
-(void)showInScrollView:(id)arg1 ;
-(void)showPasswordFailureAlert;
-(id)userDidEnterPassword;
-(void)setUserDidEnterPassword:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)hide;
-(void)didBeginEditingPassword:(id)arg1 inView:(id)arg2 ;
-(void)didEndEditingPassword:(id)arg1 inView:(id)arg2 ;
-(void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2 ;
@end

