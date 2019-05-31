/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTrafficDevice/ATStoreDownloadOperation.h>

@class ICMediaRedownloadRequest, ICMediaAssetDownloadRequest;

@interface ATMusicRedownloadOperation : ATStoreDownloadOperation {

	ICMediaRedownloadRequest* _redownloadRequest;
	ICMediaAssetDownloadRequest* _assetDownloadRequest;

}
-(void)finishWithError:(id)arg1 ;
-(void)execute;
-(id)_musicAppBundleID;
-(long long)_assetProtectionTypeForEndpointType:(long long)arg1 fileAssetInfo:(id)arg2 ;
-(void)_removeDRMUsingDownloadAsset:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_getICStoreMediaResponseItemWithRequestContext:(id)arg1 playBackEndPointType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancel;
@end

