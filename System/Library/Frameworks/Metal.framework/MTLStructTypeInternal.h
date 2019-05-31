/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLStructType.h>

@class NSDictionary, NSArray;

@interface MTLStructTypeInternal : MTLStructType {

	unsigned long long _dataType;
	NSDictionary* _dictionary;
	NSArray* _members;
	BOOL _isIndirectArgumentBuffer;

}

@property (assign) BOOL isIndirectArgumentBuffer;              //@synthesize isIndirectArgumentBuffer=_isIndirectArgumentBuffer - In the implementation block
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)isIndirectArgumentBuffer;
-(id)initWithMembers:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)setIsIndirectArgumentBuffer:(BOOL)arg1 ;
-(id)memberByName:(id)arg1 ;
-(unsigned long long)dataType;
-(id)members;
-(void)dealloc;
-(id)description;
@end

