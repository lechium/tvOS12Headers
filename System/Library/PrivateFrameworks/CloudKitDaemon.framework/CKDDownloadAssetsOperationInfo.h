/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray;

@interface CKDDownloadAssetsOperationInfo : CKDatabaseOperationInfo {

	BOOL _shouldFetchAssetContentInMemory;
	NSArray* _assetsToDownload;
	NSArray* _packageIndexSets;

}

@property (assign,nonatomic) BOOL shouldFetchAssetContentInMemory;              //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (nonatomic,retain) NSArray * assetsToDownload;                        //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
@property (nonatomic,retain) NSArray * packageIndexSets;                        //@synthesize packageIndexSets=_packageIndexSets - In the implementation block
-(void)setAssetsToDownload:(NSArray *)arg1 ;
-(NSArray *)assetsToDownload;
-(NSArray *)packageIndexSets;
-(void)setPackageIndexSets:(NSArray *)arg1 ;
-(BOOL)shouldFetchAssetContentInMemory;
-(void)setShouldFetchAssetContentInMemory:(BOOL)arg1 ;
@end

