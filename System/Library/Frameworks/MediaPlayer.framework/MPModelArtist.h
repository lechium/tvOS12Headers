/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelPerson.h>

@class MPModelGenre, NSDate;

@interface MPModelArtist : MPModelPerson

@property (assign,nonatomic) BOOL hasBiography; 
@property (assign,nonatomic) long long songCount; 
@property (assign,nonatomic) long long albumCount; 
@property (nonatomic,copy) MPModelGenre * genre; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,copy) id editorialArtworkCatalogBlock; 
@property (nonatomic,copy) NSDate * libraryAddedDate; 
+(id)__genre_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)__libraryAddedDate_KEY;
+(id)kindWithAlbumKind:(id)arg1 ;
+(id)__hasBiography_KEY;
+(id)__editorialArtworkCatalogBlock_KEY;
+(id)__songCount_KEY;
+(id)__albumCount_KEY;
-(id)artworkCatalog;
-(id)editorialArtworkCatalog;
@end

