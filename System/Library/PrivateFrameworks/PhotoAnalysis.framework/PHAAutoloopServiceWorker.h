/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PHAWorker.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, PHAAnalysisWorkerJob;

@interface PHAAutoloopServiceWorker : PHAWorker {

	NSObject*<OS_dispatch_queue> _workerQueue;
	NSMutableArray* _pendingAssetIdentifiers;
	PHAAnalysisWorkerJob* _currentJob;

}
+(short)workerType;
+(long long)applicationDataFolderIdentifier;
+(BOOL)persistsState;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(void)cooldown;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(void)_processNextPendingAssetIdentifier;
-(void)_cleanup;
@end

