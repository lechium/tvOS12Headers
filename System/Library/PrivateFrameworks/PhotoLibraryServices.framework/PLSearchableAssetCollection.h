/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol PLSearchableAssetCollection <NSObject>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * keyAssetUUID; 
@property (nonatomic,readonly) NSDate * keyAssetCreationDate; 
@property (nonatomic,readonly) NSDate * searchableStartDate; 
@property (nonatomic,readonly) NSDate * searchableEndDate; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@required
-(id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
-(NSString *)keyAssetUUID;
-(id)searchIndexContents;
-(NSDate *)searchableStartDate;
-(NSDate *)searchableEndDate;
-(NSDate *)keyAssetCreationDate;
-(unsigned long long)searchIndexCategory;
-(unsigned long long)numberOfAssets;
-(id)uuid;
-(NSString *)title;
-(NSString *)subtitle;

@end

