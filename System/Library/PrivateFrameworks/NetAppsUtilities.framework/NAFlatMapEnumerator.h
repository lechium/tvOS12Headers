/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator;

@interface NAFlatMapEnumerator : NSEnumerator {

	NSEnumerator* _enumerator;
	/*^block*/id _map;

}

@property (nonatomic,readonly) NSEnumerator * enumerator;              //@synthesize enumerator=_enumerator - In the implementation block
@property (nonatomic,copy,readonly) id map;                            //@synthesize map=_map - In the implementation block
-(NSEnumerator *)enumerator;
-(id)map;
-(id)initWithEnumerator:(id)arg1 map:(/*^block*/id)arg2 ;
-(id)allObjects;
-(id)nextObject;
@end

