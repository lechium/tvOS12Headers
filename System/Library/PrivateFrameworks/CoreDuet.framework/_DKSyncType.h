/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CDPeriodicSchedulerJob;

@interface _DKSyncType : NSObject {

	BOOL _isSingleDevice;
	BOOL _forceSync;
	BOOL _isInitialSync;
	BOOL _isPeriodicSync;
	BOOL _isTriggeredSync;
	BOOL _didActivatePeer;
	BOOL _didReceivePush;
	BOOL _didAddSyncedEvents;
	BOOL _didDeleteSyncedEvents;
	BOOL _didSetMediumUrgency;
	unsigned long long _urgency;
	_CDPeriodicSchedulerJob* _periodicJob;

}

@property (nonatomic,readonly) BOOL isSingleDevice;                              //@synthesize isSingleDevice=_isSingleDevice - In the implementation block
@property (assign,nonatomic) BOOL forceSync;                                     //@synthesize forceSync=_forceSync - In the implementation block
@property (assign,nonatomic) BOOL isInitialSync;                                 //@synthesize isInitialSync=_isInitialSync - In the implementation block
@property (assign,nonatomic) BOOL isPeriodicSync;                                //@synthesize isPeriodicSync=_isPeriodicSync - In the implementation block
@property (assign,nonatomic) BOOL isTriggeredSync;                               //@synthesize isTriggeredSync=_isTriggeredSync - In the implementation block
@property (assign,nonatomic) unsigned long long urgency;                         //@synthesize urgency=_urgency - In the implementation block
@property (assign,nonatomic) BOOL didActivatePeer;                               //@synthesize didActivatePeer=_didActivatePeer - In the implementation block
@property (assign,nonatomic) BOOL didReceivePush;                                //@synthesize didReceivePush=_didReceivePush - In the implementation block
@property (assign,nonatomic) BOOL didAddSyncedEvents;                            //@synthesize didAddSyncedEvents=_didAddSyncedEvents - In the implementation block
@property (assign,nonatomic) BOOL didDeleteSyncedEvents;                         //@synthesize didDeleteSyncedEvents=_didDeleteSyncedEvents - In the implementation block
@property (assign,nonatomic) BOOL didSetMediumUrgency;                           //@synthesize didSetMediumUrgency=_didSetMediumUrgency - In the implementation block
@property (nonatomic,retain) _CDPeriodicSchedulerJob * periodicJob;              //@synthesize periodicJob=_periodicJob - In the implementation block
-(unsigned long long)urgency;
-(void)setUrgency:(unsigned long long)arg1 ;
-(BOOL)isSingleDevice;
-(BOOL)isPeriodicSync;
-(BOOL)isTriggeredSync;
-(BOOL)didReceivePush;
-(_CDPeriodicSchedulerJob *)periodicJob;
-(id)initWithIsSingleDevice:(BOOL)arg1 ;
-(void)setForceSync:(BOOL)arg1 ;
-(void)mergeType:(id)arg1 ;
-(BOOL)isInitialSync;
-(BOOL)didActivatePeer;
-(void)setIsInitialSync:(BOOL)arg1 ;
-(void)setIsPeriodicSync:(BOOL)arg1 ;
-(void)setPeriodicJob:(_CDPeriodicSchedulerJob *)arg1 ;
-(void)setIsTriggeredSync:(BOOL)arg1 ;
-(void)setDidDeleteSyncedEvents:(BOOL)arg1 ;
-(void)setDidReceivePush:(BOOL)arg1 ;
-(BOOL)didAddSyncedEvents;
-(BOOL)didDeleteSyncedEvents;
-(BOOL)didSetMediumUrgency;
-(void)setDidActivatePeer:(BOOL)arg1 ;
-(void)setDidAddSyncedEvents:(BOOL)arg1 ;
-(void)setDidSetMediumUrgency:(BOOL)arg1 ;
-(BOOL)forceSync;
-(id)description;
@end

