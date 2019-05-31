/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSAsynchronousOperation.h>

@class TVHKMediaEntitySearchFetchResponse, NSError, TVHSMediaServerIdentifier, NSOperation, NSDictionary, TVHKMediaEntityFetchResponse;

@interface TVHKMediaEntitySearchFetchOperation : TVHSAsynchronousOperation {

	TVHKMediaEntitySearchFetchResponse* _response;
	NSError* _error;
	TVHSMediaServerIdentifier* _mediaServerIdentifier;
	unsigned long long _fromRevision;
	unsigned long long _toRevision;
	unsigned long long _databaseID;
	unsigned long long _basePlaylistID;
	NSOperation* _currentSubOperation;
	NSDictionary* _mediaCategoryByAlbumPersistentID;
	NSDictionary* _mediaCategoryByAlbumArtistPersistentID;
	TVHKMediaEntityFetchResponse* _mediaItemsResponse;
	TVHKMediaEntityFetchResponse* _albumsResponse;
	TVHKMediaEntityFetchResponse* _albumArtistsResponse;

}

@property (nonatomic,copy) TVHSMediaServerIdentifier * mediaServerIdentifier;                    //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long fromRevision;                                    //@synthesize fromRevision=_fromRevision - In the implementation block
@property (assign,nonatomic) unsigned long long toRevision;                                      //@synthesize toRevision=_toRevision - In the implementation block
@property (assign,nonatomic) unsigned long long databaseID;                                      //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) unsigned long long basePlaylistID;                                  //@synthesize basePlaylistID=_basePlaylistID - In the implementation block
@property (nonatomic,retain) NSOperation * currentSubOperation;                                  //@synthesize currentSubOperation=_currentSubOperation - In the implementation block
@property (nonatomic,retain) NSDictionary * mediaCategoryByAlbumPersistentID;                    //@synthesize mediaCategoryByAlbumPersistentID=_mediaCategoryByAlbumPersistentID - In the implementation block
@property (nonatomic,retain) NSDictionary * mediaCategoryByAlbumArtistPersistentID;              //@synthesize mediaCategoryByAlbumArtistPersistentID=_mediaCategoryByAlbumArtistPersistentID - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityFetchResponse * mediaItemsResponse;                  //@synthesize mediaItemsResponse=_mediaItemsResponse - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityFetchResponse * albumsResponse;                      //@synthesize albumsResponse=_albumsResponse - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityFetchResponse * albumArtistsResponse;                //@synthesize albumArtistsResponse=_albumArtistsResponse - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitySearchFetchResponse * response;                      //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSError * error;                                                      //@synthesize error=_error - In the implementation block
+(id)_mediaItemProperties;
+(id)_mediaCollectionProperties;
+(void)_updateMediaCategoryDictionary:(id)arg1 withMediaItem:(id)arg2 forMediaCollectionType:(unsigned long long)arg3 ;
-(void)setResponse:(TVHKMediaEntitySearchFetchResponse *)arg1 ;
-(unsigned long long)databaseID;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(void)executionDidBegin;
-(TVHSMediaServerIdentifier *)mediaServerIdentifier;
-(void)setMediaServerIdentifier:(TVHSMediaServerIdentifier *)arg1 ;
-(unsigned long long)basePlaylistID;
-(void)setBasePlaylistID:(unsigned long long)arg1 ;
-(void)_startMediaItemsFetchOperation;
-(unsigned long long)fromRevision;
-(void)setFromRevision:(unsigned long long)arg1 ;
-(unsigned long long)toRevision;
-(void)setToRevision:(unsigned long long)arg1 ;
-(void)setMediaItemsResponse:(TVHKMediaEntityFetchResponse *)arg1 ;
-(void)_startAlbumsFetchOperation;
-(void)_finishExecution;
-(void)_startSubOperation:(id)arg1 ;
-(NSDictionary *)mediaCategoryByAlbumPersistentID;
-(void)setAlbumsResponse:(TVHKMediaEntityFetchResponse *)arg1 ;
-(void)_startAlbumArtistsFetchOperation;
-(NSDictionary *)mediaCategoryByAlbumArtistPersistentID;
-(void)setAlbumArtistsResponse:(TVHKMediaEntityFetchResponse *)arg1 ;
-(void)_populateMediaCategoryDictionaries;
-(TVHKMediaEntityFetchResponse *)mediaItemsResponse;
-(void)setMediaCategoryByAlbumPersistentID:(NSDictionary *)arg1 ;
-(void)setMediaCategoryByAlbumArtistPersistentID:(NSDictionary *)arg1 ;
-(TVHKMediaEntityFetchResponse *)albumsResponse;
-(TVHKMediaEntityFetchResponse *)albumArtistsResponse;
-(id)initWithMediaServerIdentifier:(id)arg1 fromRevision:(unsigned long long)arg2 toRevision:(unsigned long long)arg3 sessionState:(id)arg4 ;
-(id)init;
-(void)cancel;
-(TVHKMediaEntitySearchFetchResponse *)response;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSOperation *)currentSubOperation;
-(void)setCurrentSubOperation:(NSOperation *)arg1 ;
@end

