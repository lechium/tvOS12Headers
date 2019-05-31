/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelObject.h>

@class MPModelPlaylist, MPModelSong, MPModelTVEpisode, MPModelMovie, MPModelSocialPerson, MPArtworkCatalog;

@interface MPModelPlaylistEntry : MPModelObject

@property (nonatomic,retain) MPModelPlaylist * playlist; 
@property (assign,nonatomic) long long position; 
@property (nonatomic,retain) MPModelSong * song; 
@property (nonatomic,retain) MPModelTVEpisode * tvEpisode; 
@property (nonatomic,retain) MPModelMovie * movie; 
@property (nonatomic,retain) MPModelSocialPerson * socialContributor; 
@property (nonatomic,retain) MPArtworkCatalog * _artworkCatalog; 
+(BOOL)supportsKeepLocalStatusObservation;
+(id)requiredKeepLocalStatusObservationProperties;
+(id)__playlist_KEY;
+(id)kindWithKinds:(id)arg1 ;
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)__movie_KEY;
+(id)__song_KEY;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
+(id)__tvEpisode_KEY;
+(id)__position_KEY;
+(id)__socialContributor_KEY;
+(id)___artworkCatalog_KEY;
-(id)storeItemMetadataRequestItemIdentifier;
-(id)humanDescription;
-(id)mediaItemPropertyValues;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(long long)libraryRemovalSupportedOptions;
-(id)newKeepLocalStatusObserverConfiguration;
-(BOOL)storeItemMetadataRequestNeedsPersonalization;
-(long long)type;
-(id)anyObject;
@end

