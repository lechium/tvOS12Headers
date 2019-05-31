/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIView, NSArray;


@protocol _WKFormInputSession <NSObject>
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> userObject; 
@property (nonatomic,readonly) id<_WKFocusedElementInfo> focusedElementInfo; 
@property (nonatomic,copy) NSString * accessoryViewCustomButtonTitle; 
@property (nonatomic,retain) UIView * customInputView; 
@property (nonatomic,copy) NSArray * suggestions; 
@property (assign,nonatomic) BOOL accessoryViewShouldNotShow; 
@property (assign,nonatomic) BOOL forceSecureTextEntry; 
@property (nonatomic,readonly) BOOL requiresStrongPasswordAssistance; 
@required
-(NSArray *)suggestions;
-(NSObject*<NSSecureCoding>)userObject;
-(void)reloadFocusedElementContextView;
-(id<_WKFocusedElementInfo>)focusedElementInfo;
-(NSString *)accessoryViewCustomButtonTitle;
-(void)setAccessoryViewCustomButtonTitle:(id)arg1;
-(UIView *)customInputView;
-(void)setCustomInputView:(id)arg1;
-(BOOL)accessoryViewShouldNotShow;
-(void)setAccessoryViewShouldNotShow:(BOOL)arg1;
-(BOOL)forceSecureTextEntry;
-(void)setForceSecureTextEntry:(BOOL)arg1;
-(BOOL)requiresStrongPasswordAssistance;
-(BOOL)isValid;
-(void)setSuggestions:(id)arg1;

@end

