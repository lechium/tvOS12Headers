/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSMutableSet;

@interface _NSXPCConnectionClassCache : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableSet* _cache;

}
-(BOOL)containsClass:(Class)arg1 ;
-(void)addClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(void)clear;
@end
