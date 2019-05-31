/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCMediaRemoteController.h>

@class MPCFuture;

@interface _MPCMediaRemoteNullController : MPCMediaRemoteController {

	MPCFuture* _playQueueIdentifiersFuture;
	MPCFuture* _contentItemForIdentifierFuture;
	MPCFuture* _contentItemArtworkForIdentifierFuture;

}
+(BOOL)_shouldRegisterForNotifications;
-(id)supportedCommands;
-(id)playQueueIdentifiersForRequest:(void*)arg1 ;
-(id)contentItemForIdentifier:(id)arg1 ;
-(id)playingIdentifier;
-(void)sendCommand:(unsigned)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)playbackStateCacheState;
-(long long)supportedCommandsCacheState;
-(long long)playQueueIdentifiersCacheStateForRange:(MSVSignedRange)arg1 ;
-(id)playQueueIdentifiersForRange:(MSVSignedRange)arg1 ;
-(long long)playingIdentifierCacheState;
-(long long)contentItemCacheStateForIdentifier:(id)arg1 ;
-(long long)contentItemArtworkCacheStateForIdentifier:(id)arg1 size:(CGSize)arg2 ;
-(id)contentItemArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(CGSize)arg3 ;
-(void)invalidateAllTokens;
-(id)playbackState;
-(id)_init;
@end
