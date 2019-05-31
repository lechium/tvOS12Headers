/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIKeyboardInputManagerToImplProtocol.h>

@protocol TIKeyboardInputManagerToImplProtocol;
@class NSString;

@interface _UIKeyboardImplProxy : NSObject <TIKeyboardInputManagerToImplProtocol> {

	id<TIKeyboardInputManagerToImplProtocol> _delegate;

}

@property (assign,nonatomic) id<TIKeyboardInputManagerToImplProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<TIKeyboardInputManagerToImplProtocol>)arg1 ;
-(id<TIKeyboardInputManagerToImplProtocol>)delegate;
-(void)processPayloadInfo:(id)arg1 ;
-(void)pushAutocorrections:(id)arg1 requestToken:(id)arg2 ;
@end

