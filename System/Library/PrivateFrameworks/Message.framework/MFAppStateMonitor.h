/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MFObserver;
@class BKSApplicationStateMonitor, NSObject, MFObservable;

@interface MFAppStateMonitor : NSObject {

	unsigned _appState;
	BKSApplicationStateMonitor* _appStateMonitor;
	NSObject*<OS_dispatch_queue> _queue;
	MFObservable*<MFObserver> _observable;

}

@property (nonatomic,readonly) MFObservable * appStateObservable; 
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
+(id)sharedInstance;
-(BOOL)isForeground;
-(void)_updateApplicationState:(id)arg1 observer:(id)arg2 ;
-(MFObservable *)appStateObservable;
-(id)init;
-(void)dealloc;
@end

