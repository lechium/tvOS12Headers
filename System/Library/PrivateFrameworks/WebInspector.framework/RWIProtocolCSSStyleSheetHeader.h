/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSStyleSheetHeader : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * styleSheetId; 
@property (nonatomic,copy) NSString * frameId; 
@property (nonatomic,copy) NSString * sourceURL; 
@property (assign,nonatomic) long long origin; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL isInline; 
@property (assign,nonatomic) double startLine; 
@property (assign,nonatomic) double startColumn; 
-(void)setSourceURL:(NSString *)arg1 ;
-(NSString *)sourceURL;
-(void)setStyleSheetId:(NSString *)arg1 ;
-(void)setFrameId:(NSString *)arg1 ;
-(void)setStartLine:(double)arg1 ;
-(void)setStartColumn:(double)arg1 ;
-(id)initWithStyleSheetId:(id)arg1 frameId:(id)arg2 sourceURL:(id)arg3 origin:(long long)arg4 title:(id)arg5 disabled:(BOOL)arg6 isInline:(BOOL)arg7 startLine:(double)arg8 startColumn:(double)arg9 ;
-(NSString *)frameId;
-(NSString *)styleSheetId;
-(double)startLine;
-(double)startColumn;
-(void)setIsInline:(BOOL)arg1 ;
-(BOOL)isInline;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(long long)origin;
-(void)setOrigin:(long long)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
@end
