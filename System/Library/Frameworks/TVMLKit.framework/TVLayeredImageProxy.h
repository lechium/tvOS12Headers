/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _TVURLSessionDownloadTaskWrapper, NSURL;

@interface TVLayeredImageProxy : NSObject {

	_TVURLSessionDownloadTaskWrapper* _downloadTaskWrapper;
	BOOL _cancelled;
	NSURL* _url;
	long long _groupType;

}

@property (getter=isCancelled) BOOL cancelled;                   //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) long long groupType;              //@synthesize groupType=_groupType - In the implementation block
+(id)_loadingQueue;
-(long long)groupType;
-(id)initWithURL:(id)arg1 groupType:(long long)arg2 ;
-(id)_assetKey;
-(id)_assetPathWithAssetKey:(id)arg1 ;
-(BOOL)isImageAvailable;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)cancel;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isLoading;
@end

