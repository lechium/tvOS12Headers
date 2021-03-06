/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _MRNowPlayingPlayerPathProtobuf, NSObject;

@interface MRNowPlayingPlayerPathInvalidationHandler : NSObject {

	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _callback;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id callback;                                               //@synthesize callback=_callback - In the implementation block
-(id)callback;
-(id)initWithPlayerPath:(id)arg1 queue:(id)arg2 invalidationCallback:(/*^block*/id)arg3 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(NSObject*<OS_dispatch_queue>)queue;
@end

