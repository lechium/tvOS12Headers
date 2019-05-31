/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSKeyboard.h>
@class NSString;


@protocol IKJSKeyboard <JSExport>
@property (nonatomic,copy) NSString * text; 
@required
-(void)setText:(id)arg1;
-(NSString *)text;

@end


@protocol IKAppKeyboardBridge;
@class NSString;

@interface IKJSKeyboard : IKJSObject <IKJSKeyboard> {

	id<IKAppKeyboardBridge> _appBridge;

}

@property (nonatomic,retain) id<IKAppKeyboardBridge> appBridge;              //@synthesize appBridge=_appBridge - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(void)setAppBridge:(id<IKAppKeyboardBridge>)arg1 ;
-(id<IKAppKeyboardBridge>)appBridge;
-(void)jsTextDidChange;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
@end

