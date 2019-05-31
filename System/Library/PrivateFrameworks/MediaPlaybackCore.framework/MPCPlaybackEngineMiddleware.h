/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPCPlayerResponseBuilder.h>
#import <libobjc.A.dylib/MPMiddleware.h>

@class NSArray, MPCPlaybackEngine, NSString;

@interface MPCPlaybackEngineMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware> {

	NSArray* _invalidationObservers;
	MPCPlaybackEngine* _playbackEngine;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,retain) NSArray * invalidationObservers;                 //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(NSArray *)invalidationObservers;
-(void)setInvalidationObservers:(NSArray *)arg1 ;
-(id)operationsForRequest:(id)arg1 ;
-(MPCPlaybackEngine *)playbackEngine;
-(void)setPlaybackEngine:(MPCPlaybackEngine *)arg1 ;
-(id)controller:(id)arg1 chain:(id)arg2 ;
-(long long)playerState:(long long)arg1 chain:(id)arg2 ;
-(id)tracklistUniqueIdentifier:(id)arg1 chain:(id)arg2 ;
-(long long)playerRepeatType:(long long)arg1 chain:(id)arg2 ;
-(long long)playerShuffleType:(long long)arg1 chain:(id)arg2 ;
-(long long)playerLastChangeDirection:(long long)arg1 chain:(id)arg2 ;
-(long long)playerUpNextItemCount:(long long)arg1 chain:(id)arg2 ;
-(unsigned long long)playerNumberOfSections:(unsigned long long)arg1 chain:(id)arg2 ;
-(unsigned long long)playerNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 chain:(id)arg3 ;
-(SCD_Struct_MP6)playerItemDuration:(SCD_Struct_MP6)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(long long)playerItemEditingStyleFlags:(long long)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(BOOL)playerItemIsPlaceholder:(BOOL)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4 ;
-(id)playerPlayingItemIndexPath:(id)arg1 chain:(id)arg2 ;
-(long long)playerPlayingItemGlobalIndex:(long long)arg1 chain:(id)arg2 ;
-(long long)playerGlobalItemCount:(long long)arg1 chain:(id)arg2 ;
-(BOOL)playerCommandSupported:(BOOL)arg1 command:(unsigned)arg2 chain:(id)arg3 ;
-(BOOL)playerCommandEnabled:(BOOL)arg1 command:(unsigned)arg2 chain:(id)arg3 ;
-(id)playerCommandOptionValue:(id)arg1 forKey:(id)arg2 command:(unsigned)arg3 chain:(id)arg4 ;
-(id)playerVideoView:(id)arg1 chain:(id)arg2 ;
-(id)operationsForPlayerRequest:(id)arg1 ;
@end

