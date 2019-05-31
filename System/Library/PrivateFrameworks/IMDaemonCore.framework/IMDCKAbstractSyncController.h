/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMDCKSyncState;

@interface IMDCKAbstractSyncController : NSObject {

	BOOL _isSyncing;

}

@property (assign,nonatomic) BOOL isSyncing;                            //@synthesize isSyncing=_isSyncing - In the implementation block
@property (nonatomic,readonly) BOOL isUsingStingRay; 
@property (nonatomic,readonly) IMDCKSyncState * syncState; 
-(IMDCKSyncState *)syncState;
-(void)setIsSyncing:(BOOL)arg1 ;
-(BOOL)isSyncing;
-(long long)syncControllerRecordType;
-(id)ckUtilities;
-(void)setBroadcastedSyncStateToUploading;
-(BOOL)isUsingStingRay;
-(void)setBroadcastedSyncStateToDownloading;
-(void)setBroadcastedSyncStateToDeleting;
-(void)setBroadcastedSyncStateStateToStarting;
-(void)setBroadcastedSyncStateStateToFinished;
-(void)addSyncDebuggingInfoToDictionary:(id)arg1 ;
-(void)setBroadcastedSyncStateToStartingPeriodicSync;
-(void)setBroadcastedSyncStateToStartingInitialSync;
-(id)syncStateDebuggingInfo:(id)arg1 ;
@end
