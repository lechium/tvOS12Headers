/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DAStoreSyncStatusUpdater : NSObject
+(id)_eventStore;
+(void)_updateStatusForStoreWithExternalID:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(unsigned long long*)arg4 ;
+(unsigned long long)_accountErrorForNSError:(id)arg1 ;
+(void)_updateStatusForSource:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(unsigned long long*)arg4 ;
+(id)_eventStorePurger;
+(unsigned long long)_ekAccountErrorFromCoreDAVErrorCode:(int)arg1 ;
+(unsigned long long)_ekAccountErrorFromDAErrorCode:(long long)arg1 ;
+(unsigned long long)_ekAccountErrorFromDAValidationErrorCode:(unsigned long long)arg1 ;
+(unsigned long long)_ekAccountErrorFromSubCalErrorCode:(long long)arg1 ;
+(void)syncStartedForStoreWithExternalID:(id)arg1 ;
+(void)syncEndedForStoreWithExternalID:(id)arg1 withError:(id)arg2 ;
+(void)resetSyncStatusForAllStoresIfNecessary;
@end

