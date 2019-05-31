/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, MPAVItem, NSOperationQueue, MPAVController, MPCReportingController, NSString;

@interface MPCReportingPlaybackObserver : NSObject {

	NSData* _currentJingleReportingTimedMetadata;
	BOOL _hasPendingContainerChange;
	BOOL _hasSetLastPlayEventTimeStamp;
	BOOL _isReloadingWithPlaybackContext;
	BOOL _isScrubbing;
	MPAVItem* _itemForCurrentTimeChange;
	NSOperationQueue* _recordEventOperationQueue;
	double _lastPlayEventEndTimeForCurrentItem;
	double _lastPlayEventTimeStamp;
	BOOL _shouldReportAsPlaying;
	double _startTimeForCurrentTimeChange;
	BOOL _offline;
	BOOL _SBEnabled;
	MPAVController* _player;
	MPCReportingController* _reportingController;
	unsigned long long _storeAccountID;
	NSString* _storeFrontID;

}

@property (nonatomic,readonly) MPAVController * player;                                      //@synthesize player=_player - In the implementation block
@property (assign,getter=isOffline,nonatomic) BOOL offline;                                  //@synthesize offline=_offline - In the implementation block
@property (nonatomic,readonly) MPCReportingController * reportingController;                 //@synthesize reportingController=_reportingController - In the implementation block
@property (assign,setter=BEnabled,getter=isSBEnabled,nonatomic) BOOL SBEnabled;              //@synthesize SBEnabled=_SBEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long storeAccountID;                              //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy) NSString * storeFrontID;                                          //@synthesize storeFrontID=_storeFrontID - In the implementation block
-(void)setStoreFrontID:(NSString *)arg1 ;
-(void)setSBEnabled:(BOOL)arg1 ;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(NSString *)storeFrontID;
-(BOOL)isSBEnabled;
-(void)_playerItemWillChangeNotification:(id)arg1 ;
-(void)_playerWillReloadWithPlaybackContextNotification:(id)arg1 ;
-(void)_playerPlaybackStateDidChangeNotification:(id)arg1 ;
-(unsigned long long)storeAccountID;
-(void)setOffline:(BOOL)arg1 ;
-(MPAVController *)player;
-(BOOL)isOffline;
-(id)initWithPlayer:(id)arg1 reportingController:(id)arg2 ;
-(id)newPlayActivityEvent;
-(void)recordPlayActivityEvents:(id)arg1 forEventSource:(id)arg2 ;
-(MPCReportingController *)reportingController;
-(void)_itemReportingJingleTimedMetadataDidChangeNotification:(id)arg1 ;
-(void)_playerItemDidChangeNotification:(id)arg1 ;
-(void)_playerDidReloadWithPlaybackContextNotification:(id)arg1 ;
-(void)_playerDidSetCurrentTimeNotification:(id)arg1 ;
-(void)_playerWillSetCurrentTimeNotification:(id)arg1 ;
-(id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 eventSource:(id)arg2 ;
-(double)_itemStartTimeForItem:(id)arg1 ;
-(double)_itemEndTimeForItem:(id)arg1 withProposedEndTime:(double)arg2 ;
-(void)_setLastPlayEventEndTimeForCurrentItem:(double)arg1 ;
-(void)_reportPlaybackEndedForTimeoutWithItem:(id)arg1 ;
-(void)_sendPlaybackEndNotification:(double)arg1 endTime:(double)arg2 ;
-(void)didHitPlaybackTimeoutEndingPlayback:(BOOL)arg1 withCurrentItem:(id)arg2 ;
-(void)didTransitionItemForBan:(id)arg1 ;
-(void)recordUserSeekFromTime:(double)arg1 toTime:(double)arg2 forItem:(id)arg3 ;
-(void)willHitPlaybackTimeoutEndingPlayback:(BOOL)arg1 withCurrentItem:(id)arg2 ;
-(void)willTransitionItemForBan:(id)arg1 ;
-(void)dealloc;
@end

