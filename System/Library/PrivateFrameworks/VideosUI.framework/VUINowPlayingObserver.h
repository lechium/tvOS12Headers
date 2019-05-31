/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUINowPlayingObserverDelegate, OS_dispatch_queue;
@class VUINowPlayingObservation, NSObject;

@interface VUINowPlayingObserver : NSObject {

	BOOL _observing;
	VUINowPlayingObservation* _latestObservation;
	id<VUINowPlayingObserverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;
	unsigned long long _updateObservationContext;

}

@property (nonatomic,retain) VUINowPlayingObservation * latestObservation;                            //@synthesize latestObservation=_latestObservation - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;              //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (assign,getter=isObserving,nonatomic) BOOL observing;                                       //@synthesize observing=_observing - In the implementation block
@property (assign,nonatomic) unsigned long long updateObservationContext;                             //@synthesize updateObservationContext=_updateObservationContext - In the implementation block
@property (assign,nonatomic,__weak) id<VUINowPlayingObserverDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
-(void)stopObserving;
-(void)startObserving;
-(BOOL)isObserving;
-(void)setObserving:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<VUINowPlayingObserverDelegate>)arg1 ;
-(id<VUINowPlayingObserverDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_startObserving;
-(void)_stopObserving;
-(void)_updateLatestObservation;
-(void)_notifyDelegateLatestObservationDidChange:(id)arg1 ;
-(void)_handleNowPlayingAppDidChangeNotification:(id)arg1 ;
-(void)_handleNowPlayingAppIsPlayingDidChangeNotification:(id)arg1 ;
-(void)setLatestObservation:(VUINowPlayingObservation *)arg1 ;
-(unsigned long long)updateObservationContext;
-(void)setUpdateObservationContext:(unsigned long long)arg1 ;
-(void)_updateLatestObservationWithBundleIdentifier:(id)arg1 playbackState:(unsigned)arg2 ;
-(VUINowPlayingObservation *)latestObservation;
@end

