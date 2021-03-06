/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AssistantServices/AssistantServices-Structs.h>
@class NSObject, NSHashTable;

@interface AFNetworkAvailability : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _notifyToken;
	AvailabilityState _state;
	NSHashTable* _observers;

}
+(id)sharedAvailability;
-(void)_clearState;
-(void)_availabilityChanged;
-(void)_notifyObservers;
-(void)_startObservingAvailability;
-(void)_stopObservingAvailability;
-(BOOL)isAvailable;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_updateState;
@end

