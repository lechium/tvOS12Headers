/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSString;

@interface SCRCComposedCharEnumerator : NSEnumerator {

	BOOL _done;
	NSString* _string;
	unsigned long long _indexOfCurrentComposedCharacter;

}
-(id)allObjects;
-(id)initWithString:(id)arg1 ;
-(id)nextObject;
@end

