/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolCSSSelectorList, RWIProtocolCSSStyle, RWIProtocolCSSRuleId, NSString, NSArray;

@interface RWIProtocolCSSRule : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolCSSSelectorList * selectorList; 
@property (assign,nonatomic) int sourceLine; 
@property (assign,nonatomic) long long origin; 
@property (nonatomic,retain) RWIProtocolCSSStyle * style; 
@property (nonatomic,retain) RWIProtocolCSSRuleId * ruleId; 
@property (nonatomic,copy) NSString * sourceURL; 
@property (nonatomic,copy) NSArray * media; 
-(void)setSourceURL:(NSString *)arg1 ;
-(NSString *)sourceURL;
-(NSArray *)media;
-(void)setMedia:(NSArray *)arg1 ;
-(id)initWithSelectorList:(id)arg1 sourceLine:(int)arg2 origin:(long long)arg3 style:(id)arg4 ;
-(int)sourceLine;
-(RWIProtocolCSSSelectorList *)selectorList;
-(void)setRuleId:(RWIProtocolCSSRuleId *)arg1 ;
-(void)setSourceLine:(int)arg1 ;
-(void)setSelectorList:(RWIProtocolCSSSelectorList *)arg1 ;
-(RWIProtocolCSSRuleId *)ruleId;
-(void)setStyle:(RWIProtocolCSSStyle *)arg1 ;
-(RWIProtocolCSSStyle *)style;
-(long long)origin;
-(void)setOrigin:(long long)arg1 ;
@end

