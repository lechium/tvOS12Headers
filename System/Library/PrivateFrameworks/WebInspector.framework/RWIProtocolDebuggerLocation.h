/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDebuggerLocation : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * scriptId; 
@property (assign,nonatomic) int lineNumber; 
@property (assign,nonatomic) int columnNumber; 
-(int)columnNumber;
-(void)setLineNumber:(int)arg1 ;
-(int)lineNumber;
-(void)setScriptId:(NSString *)arg1 ;
-(void)setColumnNumber:(int)arg1 ;
-(NSString *)scriptId;
-(id)initWithScriptId:(id)arg1 lineNumber:(int)arg2 ;
@end

