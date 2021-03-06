/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@protocol NSCopyingNSSecureCodingNSObject;
@class NSString, NSFormatter;

@interface _NSStringProxyForContext : NSString {

	NSString* _string;
	NSFormatter* _formatter;
	id<NSCopying><NSSecureCoding><NSObject> _item;

}

@property (copy) NSString * string;                    //@synthesize string=_string - In the implementation block
@property (copy) NSFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (copy) id item;                              //@synthesize item=_item - In the implementation block
-(void)_retainFormatter:(id)arg1 ;
-(id)_dynamicContextEvaluation:(id)arg1 patternString:(id)arg2 ;
-(NSFormatter *)formatter;
-(void)setFormatter:(NSFormatter *)arg1 ;
-(unsigned long long)length;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItem:(id)arg1 ;
-(id)item;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
@end

