/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface VMUNodeToStringMap : NSObject <NSSecureCoding> {

	NSMutableArray* _strings;
	void* _stringToIndexMapVoidPtr;
	void* _nodeToStringIndexMapVoidPtr;

}
+(void)_claimUnarchivingOfClass:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(unsigned)uniquedStringCount;
-(unsigned)_indexForString:(id)arg1 ;
-(void)setString:(id)arg1 forNode:(unsigned)arg2 ;
-(id)stringForNode:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

