/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CAStateTransition : NSObject <NSCopying, NSSecureCoding> {

	NSString* _fromState;
	NSString* _toState;
	NSArray* _elements;

}

@property (nonatomic,copy) NSString * fromState;              //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,copy) NSString * toState;                //@synthesize toState=_toState - In the implementation block
@property (nonatomic,copy) NSArray * elements;                //@synthesize elements=_elements - In the implementation block
+(void)CAMLParserStartElement:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(void)setToState:(NSString *)arg1 ;
-(void)setFromState:(NSString *)arg1 ;
-(NSString *)fromState;
-(NSString *)toState;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(NSArray *)elements;
-(void)setElements:(NSArray *)arg1 ;
@end

