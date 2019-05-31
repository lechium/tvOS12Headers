/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableSet, BKSApplicationStateMonitor;

@interface MNMapsAppStateMonitor : NSObject {

	NSLock* _observerLock;
	NSMutableSet* _observers;
	BKSApplicationStateMonitor* _appStateMonitor;
	unsigned _state;

}

@property (nonatomic,readonly) unsigned state;              //@synthesize state=_state - In the implementation block
-(void)stopObserving;
-(void)startObserving;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(unsigned)state;
-(void)addObserver:(id)arg1 ;
@end
