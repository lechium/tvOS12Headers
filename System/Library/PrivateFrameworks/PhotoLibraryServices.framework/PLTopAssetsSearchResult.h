/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSITopAssetsResult, NSArray;

@interface PLTopAssetsSearchResult : NSObject {

	PSITopAssetsResult* _topAssetsResults;

}

@property (nonatomic,readonly) PSITopAssetsResult * topAssetsResults;              //@synthesize topAssetsResults=_topAssetsResults - In the implementation block
@property (nonatomic,readonly) unsigned long long assetCount; 
@property (nonatomic,readonly) NSArray * assetUUIDs; 
-(NSArray *)assetUUIDs;
-(id)initWithTopAssetsResult:(id)arg1 ;
-(PSITopAssetsResult *)topAssetsResults;
-(unsigned long long)assetCount;
@end

