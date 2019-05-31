/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaEntityManualFetchOperation.h>

@class TVHKDAAPMediaItemFetchOperation, TVHKMediaEntityFetchCache;

@interface TVHKDAAPShowsBaseFetchOperation : TVHKMediaEntityManualFetchOperation {

	TVHKDAAPMediaItemFetchOperation* _episodesFetchOperation;
	TVHKMediaEntityFetchCache* _fetchCache;

}

@property (nonatomic,retain) TVHKDAAPMediaItemFetchOperation * episodesFetchOperation;              //@synthesize episodesFetchOperation=_episodesFetchOperation - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityFetchCache * fetchCache;                                //@synthesize fetchCache=_fetchCache - In the implementation block
-(id)initWithRequest:(id)arg1 mediaServerIdentifier:(id)arg2 ;
-(id)_episodesFetchRequest;
-(id)_mediaEntityCacheWithFetchCache:(id)arg1 ;
-(id)_mediaEntitiesWithFetchedEpisodes:(id)arg1 andMediaEntityCache:(id)arg2 ;
-(id)initWithRequest:(id)arg1 fetchCache:(id)arg2 mediaServerIdentifier:(id)arg3 ;
-(void)_mediaEntitiesWithMediaEntityServer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(TVHKDAAPMediaItemFetchOperation *)episodesFetchOperation;
-(TVHKMediaEntityFetchCache *)fetchCache;
-(void)setEpisodesFetchOperation:(TVHKDAAPMediaItemFetchOperation *)arg1 ;
-(void)setFetchCache:(TVHKMediaEntityFetchCache *)arg1 ;
-(void)cancel;
@end

