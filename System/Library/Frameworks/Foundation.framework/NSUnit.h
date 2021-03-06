/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSUnit : NSObject <NSCopying, NSSecureCoding> {

	NSString* _symbol;

}

@property (copy,readonly) NSString * symbol;              //@synthesize symbol=_symbol - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)new;
-(id)initWithSymbol:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)symbol;
@end

