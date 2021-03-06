/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableSet;

@interface UISnapshottingAssertionManager : NSObject {

	opaque_pthread_mutex_t lock;
	NSMutableSet* _heldAssertions;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)relinquishAssertion:(id)arg1 ;
-(void)withLock:(/*^block*/id)arg1 ;
-(id)acquireNewAssertion;
-(void)executeIfNoActiveAssertions:(/*^block*/id)arg1 ;
@end

