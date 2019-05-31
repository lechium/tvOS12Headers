/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKViewElement, NSString, NSArray, NSDictionary, TVViewElementStyle;

@interface TVViewElement : NSObject <NSCopying> {

	BOOL _disabled;
	BOOL _parsedOnce;
	IKViewElement* _element;

}

@property (nonatomic,__weak,readonly) IKViewElement * element;                        //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) long long semanticContentAttribute; 
@property (assign,getter=isParsedOnce,nonatomic) BOOL parsedOnce;                     //@synthesize parsedOnce=_parsedOnce - In the implementation block
@property (nonatomic,readonly) NSString * elementIdentifier; 
@property (nonatomic,readonly) NSString * elementName; 
@property (nonatomic,__weak,readonly) TVViewElement * parentViewElement; 
@property (nonatomic,readonly) NSArray * childViewElements; 
@property (nonatomic,readonly) NSDictionary * attributes; 
@property (nonatomic,readonly) TVViewElementStyle * style; 
@property (nonatomic,readonly) NSString * autoHighlightIdentifier; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                         //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) long long updateType; 
-(BOOL)isDisabled;
-(long long)updateType;
-(IKViewElement *)element;
-(NSString *)autoHighlightIdentifier;
-(void)resetProperty:(long long)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(NSString *)elementName;
-(NSString *)elementIdentifier;
-(TVViewElement *)parentViewElement;
-(NSArray *)childViewElements;
-(void)dispatchEventOfType:(long long)arg1 canBubble:(BOOL)arg2 cancellable:(BOOL)arg3 extraInfo:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)dispatchEventWithName:(id)arg1 canBubble:(BOOL)arg2 cancellable:(BOOL)arg3 extraInfo:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isParsedOnce;
-(void)setParsedOnce:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TVViewElementStyle *)style;
-(long long)semanticContentAttribute;
-(NSDictionary *)attributes;
-(void)setDisabled:(BOOL)arg1 ;
@end

