/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelMoviePlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntryMoviePlaybackItemMetadata : MPModelMoviePlaybackItemMetadata {

	MPModelGenericObject* _modelGenericObject;
	MPModelPlaylistEntry* _playlistEntry;

}

@property (nonatomic,retain) MPModelPlaylistEntry * playlistEntry;              //@synthesize playlistEntry=_playlistEntry - In the implementation block
+(id)requiredProperties;
-(id)movie;
-(void)setMovie:(id)arg1 ;
-(id)modelGenericObject;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(MPModelPlaylistEntry *)playlistEntry;
-(void)setPlaylistEntry:(MPModelPlaylistEntry *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
