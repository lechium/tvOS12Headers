/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NRDeviceCollectionHistoryObserverWrapper : NSObject {

	/*^block*/id _observer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) id observer;                                       //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(NSObject*<OS_dispatch_queue>)queue;
@end

