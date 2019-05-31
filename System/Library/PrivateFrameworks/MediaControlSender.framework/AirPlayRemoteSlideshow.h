/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AirPlayRemoteSlideshowDelegate;
@class NSObject, MediaControlClient;

@interface AirPlayRemoteSlideshow : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	MediaControlClient* _client;
	id<AirPlayRemoteSlideshowDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _userQueue;
	BOOL _started;
	double _startTime;

}

@property (assign,nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setHost:(id)arg1 ;
-(void)_configureEventHandler;
-(void)getFeaturesWithOptions:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)getFeaturesWithCompletion:(/*^block*/id)arg1 ;
-(void)startWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPassword:(id)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<AirPlayRemoteSlideshowDelegate>)arg1 ;
-(id<AirPlayRemoteSlideshowDelegate>)delegate;
@end

