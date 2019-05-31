/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, PLCloudPhotoLibraryBatchContainer, NSMutableSet;

@interface PLCloudPhotoLibraryBatchManager : NSObject {

	NSMutableArray* _batches;
	PLCloudPhotoLibraryBatchContainer* _currentBatch;
	BOOL _wasDrained;
	NSMutableSet* _masterHistory;
	unsigned long long _resourceBudget;

}
-(id)drainBatches;
-(long long)currentBatchCount;
-(BOOL)isAboveMaximumResourceBudget;
-(void)addRecord:(id)arg1 ignoreBatchSize:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)reset;
-(void)addRecord:(id)arg1 ;
@end

