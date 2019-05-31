/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PDCloudStoreContainer.h>

@protocol PDCloudStorePassManager;
@interface PDPassCloudStoreContainer : PDCloudStoreContainer {

	id<PDCloudStorePassManager> _passManager;
	BOOL _canInitializeContainer;

}
+(void)invalidateServerChangeTokens;
-(void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveCachedContainerValues;
-(void)readCachedContainerValues;
-(void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 shouldUpdateLocalDatabase:(BOOL)arg5 userInfo:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)recordTypeForRecordID:(id)arg1 ;
-(BOOL)canInitializeContainer;
-(void)cloudStoreAccountChanged:(id)arg1 ;
-(BOOL)_canInitializeContainer;
-(id)_ubiquitousCatalogOfRecord;
-(BOOL)_isPassItemFromRecordType:(id)arg1 ;
-(BOOL)_isRemoteAssetItemFromRecordType:(id)arg1 ;
-(BOOL)_isPassCatalogItemFromRecordType:(id)arg1 ;
-(id)_catalogOfRecord;
-(id)initWithDataSource:(id)arg1 passManager:(id)arg2 ;
-(BOOL)shouldFetchAndStoreCloudDataAtStartup;
@end

