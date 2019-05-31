/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDictationView.h>

@class UIButton, UILabel, NSString;

@interface UIDictationLayoutView : UIDictationView {

	BOOL _hideSwitcher;
	UIButton* _globeButton;
	UIButton* _keyboardButton;
	UILabel* _languageLabel;
	NSString* _currentDictationLanguage;
	UIButton* _waveTapEndpointButton;
	BOOL _blackTextColor;

}
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setState:(int)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(id)darkGrayColor;
-(void)returnToKeyboard;
-(void)finishReturnToKeyboard;
-(void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(CGPoint)arg3 ;
-(BOOL)isShowing;
-(void)keyboardButtonPressed;
-(void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 ;
-(void)updateLanguageLabel;
@end
