/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelObject.h>

@class NSString, MPModelArtist, MPModelGenre, NSDate, NSDateComponents, MPModelSong;

@interface MPModelAlbum : MPModelObject

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) MPModelArtist * artist; 
@property (nonatomic,retain) MPModelGenre * genre; 
@property (assign,nonatomic) long long trackCount; 
@property (assign,nonatomic) long long maximumItemTrackNumber; 
@property (assign,nonatomic) long long discCount; 
@property (assign,nonatomic) BOOL hasCleanContent; 
@property (assign,nonatomic) BOOL hasExplicitContent; 
@property (assign,getter=isCompilation,nonatomic) BOOL compilation; 
@property (assign,getter=isClassical,nonatomic) BOOL classical; 
@property (assign,getter=isLibraryAdded,nonatomic) BOOL libraryAdded; 
@property (nonatomic,copy) NSDate * libraryAddedDate; 
@property (assign,getter=isLibraryAddEligible,nonatomic) BOOL libraryAddEligible; 
@property (assign,nonatomic) float volumeNormalization; 
@property (nonatomic,copy) NSDateComponents * releaseDateComponents; 
@property (nonatomic,retain) MPModelSong * representativeSong; 
@property (assign,nonatomic) long long year; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,copy) NSString * copyrightText; 
@property (assign,nonatomic) long long keepLocalEnableState; 
@property (assign,nonatomic) long long keepLocalManagedStatus; 
@property (nonatomic,copy) NSDate * lastDevicePlaybackDate; 
@property (assign,getter=isPreorder,nonatomic) BOOL preorder; 
@property (nonatomic,copy) NSString * editorNotes; 
@property (nonatomic,copy) NSString * shortEditorNotes; 
@property (nonatomic,copy) id songPopularityBlock; 
+(BOOL)supportsKeepLocalStatusObservation;
+(id)requiredKeepLocalStatusObservationProperties;
+(id)__title_KEY;
+(id)__artist_KEY;
+(id)__genre_KEY;
+(id)__copyrightText_KEY;
+(id)__trackCount_KEY;
+(id)__volumeNormalization_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)__keepLocalEnableState_KEY;
+(id)__keepLocalManagedStatus_KEY;
+(id)__libraryAdded_KEY;
+(id)__libraryAddedDate_KEY;
+(id)__libraryAddEligible_KEY;
+(id)__year_KEY;
+(id)kindWithSongKind:(id)arg1 ;
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)__editorNotes_KEY;
+(id)__shortEditorNotes_KEY;
+(id)__hasExplicitContent_KEY;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
+(id)kindWithVariants:(unsigned long long)arg1 songKind:(id)arg2 ;
+(id)__hasCleanContent_KEY;
+(id)__releaseDateComponents_KEY;
+(id)__lastDevicePlaybackDate_KEY;
+(id)kindWithVariants:(unsigned long long)arg1 songKind:(id)arg2 options:(unsigned long long)arg3 ;
+(id)kindWithSongKind:(id)arg1 options:(unsigned long long)arg2 ;
+(id)__representativeSong_KEY;
+(id)__maximumItemTrackNumber_KEY;
+(id)__discCount_KEY;
+(id)__compilation_KEY;
+(id)__classical_KEY;
+(id)__preorder_KEY;
+(id)__songPopularityBlock_KEY;
-(id)contentItemCollectionInfo;
-(id)artworkCatalog;
-(id)humanDescription;
-(id)songPopularityForIdentifiers:(id)arg1 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(long long)libraryRemovalSupportedOptions;
-(id)newKeepLocalStatusObserverConfiguration;
@end

