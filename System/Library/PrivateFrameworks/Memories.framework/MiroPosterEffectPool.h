/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock;

@interface MiroPosterEffectPool : NSObject {

	NSMutableDictionary* _pool;
	NSLock* _poolLock;

}
-(void)preloadAndPoolEffectIfNeeded:(id)arg1 ;
-(id)pooledEffectForID:(id)arg1 ;
-(void)returnEffectToPool:(id)arg1 ;
-(id)init;
-(void)clear;
@end

