/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConstantClasses.framework/ConstantClasses
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@interface _NSConstantDictionaryEnumerator : NSEnumerator {

	id* currentKey;
	unsigned long long capacity;
	unsigned long long keyIndex;

}
-(id)initWithFirstKeyPointer:(id*)arg1 capacity:(unsigned long long)arg2 ;
-(id)allObjects;
-(id)nextObject;
@end
