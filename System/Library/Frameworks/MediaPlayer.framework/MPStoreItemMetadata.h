/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDate, NSNumber, NSArray, NSString, MPStoreArtworkRequestToken, NSURL;

@interface MPStoreItemMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _downloadAssetDictionary;
	NSDictionary* _downloadMetadataDictionary;
	NSDate* _expirationDate;
	BOOL _hasOverrideChildStorePlatformDictionaries;
	NSNumber* _hasSubscriptionOffer;
	NSArray* _overrideChildStorePlatformDictionaries;
	NSDictionary* _storePlatformDictionary;
	MPStoreItemMetadata* _parentStoreItemMetadata;

}

@property (nonatomic,copy,readonly) NSString * cacheableItemIdentifier; 
@property (nonatomic,copy,readonly) MPStoreItemMetadata * parentStoreItemMetadata;                       //@synthesize parentStoreItemMetadata=_parentStoreItemMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * artistName; 
@property (nonatomic,readonly) MPStoreArtworkRequestToken * artworkRequestToken; 
@property (nonatomic,copy,readonly) id artistStoreID; 
@property (nonatomic,copy,readonly) NSArray * artworkTrackIDs; 
@property (nonatomic,copy,readonly) NSString * artistUploadedContentType; 
@property (getter=isBeats1,nonatomic,readonly) BOOL beats1; 
@property (nonatomic,copy,readonly) NSArray * childrenStoreIDs; 
@property (nonatomic,copy,readonly) NSArray * childStoreItemMetadatas; 
@property (nonatomic,copy,readonly) NSString * cloudAlbumID; 
@property (nonatomic,readonly) unsigned long long cloudID; 
@property (nonatomic,copy,readonly) NSString * collectionName; 
@property (nonatomic,copy,readonly) id collectionStoreID; 
@property (getter=isCompilation,nonatomic,readonly) BOOL compilation; 
@property (nonatomic,copy,readonly) NSString * composerName; 
@property (nonatomic,copy,readonly) NSString * copyrightText; 
@property (nonatomic,copy,readonly) NSString * curatorName; 
@property (nonatomic,copy,readonly) id curatorID; 
@property (nonatomic,copy,readonly) NSString * descriptionText; 
@property (nonatomic,readonly) long long discCount; 
@property (nonatomic,readonly) long long discNumber; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy,readonly) NSString * editorNotes; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,copy,readonly) NSString * shortEditorNotes; 
@property (nonatomic,copy,readonly) NSDictionary * effectiveStorePlatformDictionary; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,readonly) long long explicitRating; 
@property (nonatomic,readonly) BOOL hasArtistBiography; 
@property (nonatomic,readonly) BOOL hasLyrics; 
@property (nonatomic,readonly) BOOL hasSocialPosts; 
@property (nonatomic,readonly) BOOL hasSubscriptionOffer; 
@property (nonatomic,copy,readonly) NSArray * genreNames; 
@property (nonatomic,readonly) BOOL isPreorder; 
@property (nonatomic,copy,readonly) NSString * itemKind; 
@property (nonatomic,copy,readonly) NSString * playlistType; 
@property (nonatomic,copy,readonly) NSString * iTunesBrandType; 
@property (nonatomic,readonly) MPStoreArtworkRequestToken * latestAlbumArtworkRequestToken; 
@property (nonatomic,readonly) long long movementCount; 
@property (nonatomic,copy,readonly) NSString * movementName; 
@property (nonatomic,readonly) long long movementNumber; 
@property (nonatomic,readonly) long long movieClipsCount; 
@property (nonatomic,copy,readonly) NSArray * movieClips; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (nonatomic,copy,readonly) NSArray * playlistIdentifiers; 
@property (nonatomic,copy,readonly) NSNumber * popularity; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,copy,readonly) NSString * shortName; 
@property (nonatomic,copy,readonly) NSNumber * shouldBookmarkPlayPosition; 
@property (nonatomic,copy,readonly) NSString * versionHash; 
@property (nonatomic,readonly) BOOL shouldReportPlayEvents; 
@property (nonatomic,readonly) BOOL showComposer; 
@property (nonatomic,copy,readonly) NSString * cloudUniversalLibraryID; 
@property (nonatomic,readonly) long long purchasedAdamID; 
@property (nonatomic,readonly) long long subscriptionAdamID; 
@property (nonatomic,copy,readonly) id storeID; 
@property (nonatomic,copy,readonly) NSArray * formerStoreAdamIDs; 
@property (nonatomic,copy,readonly) id socialProfileID; 
@property (getter=isStoreRedownloadable,nonatomic,readonly) BOOL storeRedownloadable; 
@property (nonatomic,readonly) long long trackCount; 
@property (nonatomic,readonly) long long trackNumber; 
@property (nonatomic,readonly) long long seasonNumber; 
@property (nonatomic,readonly) long long episodeCount; 
@property (nonatomic,copy,readonly) NSURL * shortURL; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * videoSubtype; 
@property (nonatomic,copy,readonly) NSString * workName; 
@property (nonatomic,copy,readonly) NSString * handle; 
@property (nonatomic,copy,readonly) NSString * nameRaw; 
@property (getter=isPrivatePerson,nonatomic,readonly) BOOL privatePerson; 
@property (getter=isVerifiedPerson,nonatomic,readonly) BOOL verifiedPerson; 
@property (nonatomic,readonly) long long radioStationTypeID; 
@property (nonatomic,readonly) BOOL isChart; 
+(id)artworkRequestTokenForStorePlatformArtworkValue:(id)arg1 ;
+(id)storeServerCalendar;
+(BOOL)supportsSecureCoding;
-(NSDate *)expirationDate;
-(NSString *)descriptionText;
-(NSString *)handle;
-(NSString *)shortName;
-(id)storeID;
-(NSString *)collectionName;
-(NSString *)itemKind;
-(NSString *)iTunesBrandType;
-(NSString *)artistUploadedContentType;
-(id)socialProfileID;
-(id)artistStoreID;
-(long long)discNumber;
-(long long)discCount;
-(unsigned long long)cloudID;
-(NSString *)cloudAlbumID;
-(NSString *)cloudUniversalLibraryID;
-(NSString *)copyrightText;
-(id)initWithStorePlatformDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(id)initWithStorePlatformDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2 expirationDate:(id)arg3 ;
-(NSArray *)offers;
-(id)artworkRequestTokenForStorePlatformDictionary:(id)arg1 ;
-(MPStoreArtworkRequestToken *)artworkRequestToken;
-(NSArray *)childrenStoreIDs;
-(id)childStorePlatformDictionaryForStoreID:(id)arg1 ;
-(id)initWithStorePlatformDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2 ;
-(id)descriptionTextWithStyle:(id)arg1 ;
-(id)editorNotesWithStyle:(id)arg1 ;
-(NSString *)artistName;
-(NSArray *)artworkTrackIDs;
-(id)collectionStoreID;
-(NSString *)composerName;
-(id)curatorID;
-(NSString *)curatorName;
-(BOOL)hasArtistBiography;
-(BOOL)hasLyrics;
-(BOOL)hasSocialPosts;
-(NSArray *)genreNames;
-(BOOL)isBeats1;
-(long long)explicitRating;
-(BOOL)isExplicitContent;
-(BOOL)isCompilation;
-(BOOL)isMasteredForITunes;
-(BOOL)isPreorder;
-(NSString *)playlistType;
-(NSString *)movementName;
-(long long)movementCount;
-(long long)movementNumber;
-(NSArray *)movieClips;
-(NSArray *)playlistIdentifiers;
-(NSNumber *)popularity;
-(NSDate *)releaseDate;
-(id)_storePlatformReleaseDateFormatter;
-(NSDate *)lastModifiedDate;
-(id)_storePlatformLastModifiedDateFormatter;
-(NSNumber *)shouldBookmarkPlayPosition;
-(BOOL)showComposer;
-(long long)trackCount;
-(long long)trackNumber;
-(long long)seasonNumber;
-(long long)episodeCount;
-(NSString *)versionHash;
-(NSString *)workName;
-(NSString *)nameRaw;
-(BOOL)isPrivatePerson;
-(BOOL)isVerifiedPerson;
-(NSURL *)shortURL;
-(NSString *)videoSubtype;
-(long long)radioStationTypeID;
-(BOOL)isChart;
-(BOOL)hasSubscriptionOffer;
-(id)artworkRequestTokenForScreenshotArtwork;
-(id)artworkRequestTokenForEditorialArtworkKind:(id)arg1 ;
-(id)artworkRequestTokenForUberArtworkKind:(id)arg1 ;
-(id)initWithDownloadAssetDictionary:(id)arg1 ;
-(id)initWithStorePlatformDictionary:(id)arg1 ;
-(NSArray *)childStoreItemMetadatas;
-(NSString *)editorNotes;
-(NSString *)shortEditorNotes;
-(NSDictionary *)effectiveStorePlatformDictionary;
-(BOOL)isStoreRedownloadable;
-(MPStoreArtworkRequestToken *)latestAlbumArtworkRequestToken;
-(long long)movieClipsCount;
-(BOOL)shouldReportPlayEvents;
-(NSArray *)formerStoreAdamIDs;
-(long long)purchasedAdamID;
-(long long)subscriptionAdamID;
-(id)avatarArtworkRequestToken;
-(id)childStorePlatformDictionaryForArtworkTrackID:(id)arg1 ;
-(id)tvEpisodeArtworkRequestToken;
-(id)tvShowArtworkRequestToken;
-(id)movieArtworkRequestToken;
-(id)flowcaseEditorialArtworkRequestToken;
-(id)brickEditorialArtworkRequestToken;
-(id)metadataByAppendingMetadata:(id)arg1 ;
-(id)metadataWithChildStorePlatformDictionaries:(id)arg1 ;
-(id)metadataWithParentMetadata:(id)arg1 ;
-(MPStoreItemMetadata *)parentStoreItemMetadata;
-(NSString *)cacheableItemIdentifier;
-(BOOL)hasMetadataForRequestReason:(unsigned long long)arg1 ;
-(BOOL)isExpired;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(NSURL *)URL;
@end

