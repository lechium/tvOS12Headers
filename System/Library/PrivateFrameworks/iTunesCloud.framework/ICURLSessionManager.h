/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ICURLSessionManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _cachedSessions;

}
+(id)sharedSessionManager;
-(id)sessionWithConfiguration:(id)arg1 ;
-(id)sessionWithIdentifier:(id)arg1 ;
-(void)addSession:(id)arg1 withIdentifier:(id)arg2 ;
-(void)removeSessionWithIdentifier:(id)arg1 ;
-(id)init;
@end
