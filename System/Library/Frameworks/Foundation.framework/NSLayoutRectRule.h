/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSLayoutRect, NSString;

@interface NSLayoutRectRule : NSObject <NSLayoutRule> {

	NSLayoutRect* _firstLayoutRect;
	NSLayoutRect* _secondLayoutRect;
	long long _relation;

}

@property (copy,readonly) NSLayoutRect * firstLayoutRect;               //@synthesize firstLayoutRect=_firstLayoutRect - In the implementation block
@property (copy,readonly) NSLayoutRect * secondLayoutRect;              //@synthesize secondLayoutRect=_secondLayoutRect - In the implementation block
@property (assign) long long relation;                                  //@synthesize relation=_relation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
-(id)makeChildRules;
-(NSString *)ruleDescription;
-(id)initWithFirstLayoutRect:(id)arg1 secondLayoutRect:(id)arg2 relation:(long long)arg3 ;
-(id)initWithFirstLayoutRect:(id)arg1 secondLayoutRect:(id)arg2 ;
-(NSLayoutRect *)firstLayoutRect;
-(NSLayoutRect *)secondLayoutRect;
-(void)setRelation:(long long)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)relation;
@end

