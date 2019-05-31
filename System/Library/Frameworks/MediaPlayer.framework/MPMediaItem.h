/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaEntity.h>

@class NSArray, NSDate, NSString, MPMediaItemArtwork, NSURL;

@interface MPMediaItem : MPMediaEntity

@property (nonatomic,readonly) NSArray * chapters; 
@property (nonatomic,copy) NSDate * lastPlayedDate; 
@property (nonatomic,readonly) BOOL isRental; 
@property (nonatomic,readonly) BOOL isITunesU; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double stopTime; 
@property (nonatomic,readonly) unsigned long long year; 
@property (assign,nonatomic) unsigned long long skipCountSinceSync; 
@property (assign,nonatomic) unsigned long long playCountSinceSync; 
@property (nonatomic,copy) NSDate * lastSkippedDate; 
@property (nonatomic,copy) NSDate * dateAccessed; 
@property (assign,nonatomic) BOOL hasBeenPlayed; 
@property (nonatomic,readonly) BOOL rememberBookmarkTime; 
@property (nonatomic,readonly) double effectiveStopTime; 
@property (nonatomic,readonly) NSString * effectiveAlbumArtist; 
@property (nonatomic,readonly) BOOL isUsableAsRepresentativeItem; 
@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * albumTitle; 
@property (nonatomic,readonly) unsigned long long albumPersistentID; 
@property (nonatomic,readonly) NSString * artist; 
@property (nonatomic,readonly) unsigned long long artistPersistentID; 
@property (nonatomic,readonly) NSString * albumArtist; 
@property (nonatomic,readonly) unsigned long long albumArtistPersistentID; 
@property (nonatomic,readonly) NSString * genre; 
@property (nonatomic,readonly) unsigned long long genrePersistentID; 
@property (nonatomic,readonly) NSString * composer; 
@property (nonatomic,readonly) unsigned long long composerPersistentID; 
@property (nonatomic,readonly) double playbackDuration; 
@property (nonatomic,readonly) unsigned long long albumTrackNumber; 
@property (nonatomic,readonly) unsigned long long albumTrackCount; 
@property (nonatomic,readonly) unsigned long long discNumber; 
@property (nonatomic,readonly) unsigned long long discCount; 
@property (nonatomic,readonly) MPMediaItemArtwork * artwork; 
@property (getter=isExplicitItem,nonatomic,readonly) BOOL explicitItem; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (getter=isCompilation,nonatomic,readonly) BOOL compilation; 
@property (nonatomic,readonly) NSDate * releaseDate; 
@property (nonatomic,readonly) unsigned long long beatsPerMinute; 
@property (nonatomic,readonly) NSString * comments; 
@property (nonatomic,readonly) NSURL * assetURL; 
@property (getter=isCloudItem,nonatomic,readonly) BOOL cloudItem; 
@property (getter=hasProtectedAsset,nonatomic,readonly) BOOL protectedAsset; 
@property (nonatomic,readonly) NSString * podcastTitle; 
@property (nonatomic,readonly) unsigned long long podcastPersistentID; 
@property (nonatomic,readonly) unsigned long long playCount; 
@property (nonatomic,readonly) unsigned long long skipCount; 
@property (nonatomic,readonly) unsigned long long rating; 
@property (nonatomic,readonly) NSString * userGrouping; 
@property (nonatomic,readonly) double bookmarkTime; 
@property (nonatomic,readonly) NSDate * dateAdded; 
@property (nonatomic,readonly) NSString * playbackStoreID; 
+(id)artworkCatalogCacheProperties;
+(id)screenshotArtworkCatalogCacheProperties;
+(void)_createFilterableDictionary;
+(BOOL)canFilterByProperty:(id)arg1 ;
+(id)persistentIDPropertyForGroupingType:(long long)arg1 ;
+(BOOL)_isValidItemProperty:(id)arg1 ;
+(id)titlePropertyForGroupingType:(long long)arg1 ;
+(id)fallbackTitlePropertyForGroupingType:(long long)arg1 ;
+(id)dynamicProperties;
+(id)MPSD_mediaItemPropertiesForDownloadability;
+(BOOL)supportsSecureCoding;
-(NSString *)comments;
-(MPMediaItemArtwork *)artwork;
-(unsigned long long)rating;
-(void)setRating:(unsigned long long)arg1 ;
-(NSURL *)assetURL;
-(void)setPlayCount:(unsigned long long)arg1 ;
-(NSString *)artist;
-(double)stopTime;
-(BOOL)rememberBookmarkTime;
-(double)bookmarkTime;
-(NSString *)lyrics;
-(NSString *)albumArtist;
-(NSString *)genre;
-(unsigned long long)discNumber;
-(unsigned long long)discCount;
-(unsigned long long)albumTrackNumber;
-(unsigned long long)albumTrackCount;
-(unsigned long long)albumPersistentID;
-(unsigned long long)albumArtistPersistentID;
-(unsigned long long)artistPersistentID;
-(unsigned long long)genrePersistentID;
-(unsigned long long)composerPersistentID;
-(BOOL)isCloudItem;
-(BOOL)isCompilation;
-(NSDate *)releaseDate;
-(id)artworkCatalog;
-(NSArray *)chapters;
-(id)chapterOfType:(long long)arg1 atTime:(double)arg2 ;
-(id)screenshotArtworkCatalog;
-(id)initWithMultiverseIdentifier:(id)arg1 ;
-(id)_artworkCatalogWithArtworkType:(long long)arg1 ;
-(BOOL)isRental;
-(void)populateLocationPropertiesWithPath:(id)arg1 assetProtectionType:(long long)arg2 ;
-(void)clearLocationProperties;
-(id)valuesForProperties:(id)arg1 ;
-(void)gaplessHeuristicInfo:(unsigned*)arg1 durationInSamples:(unsigned long long*)arg2 lastPacketsResync:(unsigned long long*)arg3 encodingDelay:(unsigned*)arg4 encodingDrain:(unsigned*)arg5 ;
-(void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL)arg2 ;
-(double)playbackDuration;
-(BOOL)isITunesU;
-(BOOL)didSkipWithPlayedToTime:(double)arg1 ;
-(void)setHasBeenPlayed:(BOOL)arg1 ;
-(void)incrementPlayCountForPlayingToEnd;
-(BOOL)incrementPlayCountForStopTime:(double)arg1 ;
-(id)chaptersOfType:(long long)arg1 ;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(BOOL)existsInLibrary;
-(id)multiverseIdentifier;
-(id)predicateForProperty:(id)arg1 ;
-(id)_directStoreURL;
-(id)_libraryLinkURL;
-(id)_libraryLinkKind;
-(id)_libraryLinkArtist;
-(id)_libraryLinkPlaylistName;
-(Class)itemArrayCoderPIDDataCodingClass;
-(void)markNominalAmountHasBeenPlayed;
-(void)incrementSkipCount;
-(void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(/*^block*/id)arg1 ;
-(double)nominalHasBeenPlayedThreshold;
-(id)_bestStoreURL;
-(void)populateLocationPropertiesWithPath:(id)arg1 ;
-(void)populateLocationPropertiesWithPath:(id)arg1 assetProtectionType:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSString *)effectiveAlbumArtist;
-(unsigned long long)beatsPerMinute;
-(NSDate *)dateAdded;
-(BOOL)hasProtectedAsset;
-(double)effectiveStopTime;
-(NSString *)podcastTitle;
-(unsigned long long)podcastPersistentID;
-(unsigned long long)playCountSinceSync;
-(void)setPlayCountSinceSync:(unsigned long long)arg1 ;
-(NSDate *)lastPlayedDate;
-(void)setLastPlayedDate:(NSDate *)arg1 ;
-(NSDate *)dateAccessed;
-(void)setDateAccessed:(NSDate *)arg1 ;
-(unsigned long long)skipCount;
-(void)setSkipCount:(unsigned long long)arg1 ;
-(unsigned long long)skipCountSinceSync;
-(void)setSkipCountSinceSync:(unsigned long long)arg1 ;
-(NSDate *)lastSkippedDate;
-(void)setLastSkippedDate:(NSDate *)arg1 ;
-(BOOL)hasBeenPlayed;
-(NSString *)playbackStoreID;
-(BOOL)isExplicitItem;
-(NSString *)userGrouping;
-(id)chapterOfType:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)countOfChaptersOfType:(long long)arg1 ;
-(BOOL)isUsableAsRepresentativeItem;
-(BOOL)MPSD_isDownloadInProgress;
-(BOOL)MPSD_isDownloadable;
-(unsigned long long)mediaType;
-(NSString *)albumTitle;
-(unsigned long long)playCount;
-(void)incrementPlayCount;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(double)startTime;
-(id)representativeItem;
-(void)didReceiveMemoryWarning;
-(unsigned long long)year;
-(id)valueForProperty:(id)arg1 ;
-(NSString *)composer;
@end

