/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetTextViewProxy.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSString;

@interface OKWidgetTextView : OKWidgetTextViewProxy <UITextViewDelegate> {

	UITextView* _textView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(id)initWithWidget:(id)arg1 ;
-(id)settingFontName;
-(void)setSettingFontName:(id)arg1 ;
-(float)settingFontSize;
-(void)setSettingFontSize:(float)arg1 ;
-(id)settingTextColor;
-(void)setSettingTextColor:(id)arg1 ;
-(id)settingTextBackgroundColor;
-(void)setSettingTextBackgroundColor:(id)arg1 ;
-(long long)settingTextAlignment;
-(void)setSettingTextAlignment:(long long)arg1 ;
-(UIEdgeInsets)settingContentEdgeInsets;
-(void)setSettingContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)settingOverflowEnabled;
-(void)setSettingOverflowEnabled:(BOOL)arg1 ;
-(BOOL)settingScrollEnabled;
-(void)setSettingScrollEnabled:(BOOL)arg1 ;
-(id)settingText;
-(void)setSettingText:(id)arg1 ;
-(id)settingAttributedText;
-(void)setSettingAttributedText:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
@end

