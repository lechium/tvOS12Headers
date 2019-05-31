/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSMapTable, NSLock, NSString;

@interface PHSafeNSCacheDelegateReflector : NSObject <NSCacheDelegate> {

	NSMapTable* _delegegatesByCache;
	NSLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setDelegate:(id)arg1 forCache:(id)arg2 ;
+(void)removeDelegateForCache:(id)arg1 ;
+(id)sharedInstance;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(void)setDelegate:(id)arg1 forCache:(id)arg2 ;
-(void)removeDelegateForCache:(id)arg1 ;
-(id)init;
@end
