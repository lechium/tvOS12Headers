/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSProperty : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * priority; 
@property (assign,nonatomic) BOOL implicit; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) BOOL parsedOk; 
@property (assign,nonatomic) long long status; 
@property (nonatomic,retain) RWIProtocolCSSSourceRange * range; 
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(void)setImplicit:(BOOL)arg1 ;
-(BOOL)implicit;
-(BOOL)parsedOk;
-(void)setParsedOk:(BOOL)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setPriority:(NSString *)arg1 ;
-(NSString *)priority;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(long long)status;
-(RWIProtocolCSSSourceRange *)range;
-(void)setStatus:(long long)arg1 ;
-(void)setRange:(RWIProtocolCSSSourceRange *)arg1 ;
@end

