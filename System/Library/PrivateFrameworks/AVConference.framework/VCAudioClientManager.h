/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VCAudioClientManager : NSObject {

	NSMutableDictionary* _clientList;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;

}
+(id)sharedInstance;
-(void)registerBlocksForService;
-(void)unregisterBlocksForService;
-(id)getAudioClientWithProcessId:(id)arg1 create:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
@end
