/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSDictionary;

@interface NSAddressCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSDictionary* _components;
	id _underlyingResult;

}

@property (readonly) void* underlyingResult; 
+(BOOL)supportsSecureCoding;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(void*)underlyingResult;
-(id)initWithRange:(NSRange)arg1 components:(id)arg2 ;
-(id)initWithRange:(NSRange)arg1 components:(id)arg2 underlyingResult:(void*)arg3 ;
-(unsigned long long)resultType;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)range;
-(id)components;
@end

