/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_WKFormInputSession.h>

@class NSString, UIView, NSArray;

@interface WKFormInputSession : NSObject <_WKFormInputSession> {

	WeakObjCPtr<WKContentView> _contentView;
	RetainPtr<WKFocusedElementInfo>* _focusedElementInfo;
	RetainPtr<UIView>* _customInputView;
	RetainPtr<NSArray<UITextSuggestion *> >* _suggestions;
	BOOL _accessoryViewShouldNotShow;
	BOOL _forceSecureTextEntry;
	BOOL _requiresStrongPasswordAssistance;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> userObject; 
@property (nonatomic,readonly) id<_WKFocusedElementInfo> focusedElementInfo; 
@property (nonatomic,copy) NSString * accessoryViewCustomButtonTitle; 
@property (nonatomic,retain) UIView * customInputView; 
@property (nonatomic,copy) NSArray * suggestions; 
@property (assign,nonatomic) BOOL accessoryViewShouldNotShow; 
@property (assign,nonatomic) BOOL forceSecureTextEntry; 
@property (nonatomic,readonly) BOOL requiresStrongPasswordAssistance; 
-(NSArray *)suggestions;
-(NSObject*<NSSecureCoding>)userObject;
-(void)reloadFocusedElementContextView;
-(id<_WKFocusedElementInfo>)focusedElementInfo;
-(NSString *)accessoryViewCustomButtonTitle;
-(void)setAccessoryViewCustomButtonTitle:(NSString *)arg1 ;
-(UIView *)customInputView;
-(void)setCustomInputView:(UIView *)arg1 ;
-(BOOL)accessoryViewShouldNotShow;
-(void)setAccessoryViewShouldNotShow:(BOOL)arg1 ;
-(BOOL)forceSecureTextEntry;
-(void)setForceSecureTextEntry:(BOOL)arg1 ;
-(BOOL)requiresStrongPasswordAssistance;
-(id)initWithContentView:(id)arg1 focusedElementInfo:(id)arg2 requiresStrongPasswordAssistance:(BOOL)arg3 ;
-(void)invalidate;
-(BOOL)isValid;
-(void)setSuggestions:(NSArray *)arg1 ;
@end

