/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeObjectPreview;

@interface RWIProtocolRuntimePropertyPreview : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long subtype; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,retain) RWIProtocolRuntimeObjectPreview * valuePreview; 
@property (assign,nonatomic) BOOL internal; 
-(id)initWithName:(id)arg1 type:(long long)arg2 ;
-(void)setValuePreview:(RWIProtocolRuntimeObjectPreview *)arg1 ;
-(RWIProtocolRuntimeObjectPreview *)valuePreview;
-(BOOL)internal;
-(void)setInternal:(BOOL)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(long long)subtype;
-(void)setSubtype:(long long)arg1 ;
@end

