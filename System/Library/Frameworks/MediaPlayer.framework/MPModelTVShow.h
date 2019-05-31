/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, MPModelTVShowCreator;

@interface MPModelTVShow : MPModelObject

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) MPModelTVShowCreator * creator; 
@property (nonatomic,copy) NSString * shortTitle; 
@property (nonatomic,copy) NSString * editorNotes; 
@property (nonatomic,copy) NSString * shortEditorNotes; 
@property (nonatomic,copy) NSString * tagline; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,copy) id editorialArtworkCatalogBlock; 
@property (assign,nonatomic) long long episodesCount; 
+(id)__title_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)__editorialArtworkCatalogBlock_KEY;
+(id)__tagline_KEY;
+(id)__editorNotes_KEY;
+(id)__shortEditorNotes_KEY;
+(id)kindWithSeasonKind:(id)arg1 ;
+(id)__episodesCount_KEY;
+(id)__shortTitle_KEY;
+(id)__creator_KEY;
-(id)artworkCatalog;
-(id)humanDescription;
-(id)editorialArtworkCatalog;
@end

