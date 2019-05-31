/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MRPlaybackQueueClient : NSObject {

	NSMutableDictionary* _controllers;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_handlePlayerPathRemovedNotification:(id)arg1 ;
-(void)_handleApplicationRemovedNotification:(id)arg1 ;
-(void)_handleOriginRemovedNotification:(id)arg1 ;
-(id)subscriptionControllerForPlayerPath:(id)arg1 ;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
@end

