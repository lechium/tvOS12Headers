/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString, SANPVideoAudioAndSubtitleLanguageOptions, NSDictionary, SAMPMediaItem, SANPCommandInfo, SAMPNowPlayingQueuePosition, NSNumber;

@interface SAMPQueueState : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSString * applicationIdentifier; 
@property (nonatomic,retain) SANPVideoAudioAndSubtitleLanguageOptions * audioAndSubtitleLanguageOptions; 
@property (assign,nonatomic) BOOL currentItemSteerable; 
@property (nonatomic,copy) NSDictionary * currentListeningToContainer; 
@property (nonatomic,retain) SAMPMediaItem * listeningToItem; 
@property (nonatomic,retain) SAMPMediaItem * nextListeningToItem; 
@property (nonatomic,retain) SANPCommandInfo * nowPlayingCommandInfo; 
@property (nonatomic,retain) SAMPNowPlayingQueuePosition * playbackQueuePosition; 
@property (nonatomic,copy) NSNumber * playbackRate; 
@property (nonatomic,retain) SAMPMediaItem * previousListenedToItem; 
@property (nonatomic,copy) NSNumber * shuffleEnabled; 
@property (nonatomic,copy) NSString * source; 
@property (assign,nonatomic) int state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queueState;
+(id)queueStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)_mediaTypeFromNowPlayingInfo:(id)arg1 ;
-(id)_mediaItemIdURLFromNowPlayingInfo:(id)arg1 ;
-(void)_af_setShuffleModeFromNowPlayingInfo:(id)arg1 ;
-(void)_af_setNowPlayingInfo:(id)arg1 ;
-(void)_af_validateAndFinalize;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAMPMediaItem *)listeningToItem;
-(void)setListeningToItem:(SAMPMediaItem *)arg1 ;
-(SANPVideoAudioAndSubtitleLanguageOptions *)audioAndSubtitleLanguageOptions;
-(void)setAudioAndSubtitleLanguageOptions:(SANPVideoAudioAndSubtitleLanguageOptions *)arg1 ;
-(BOOL)currentItemSteerable;
-(void)setCurrentItemSteerable:(BOOL)arg1 ;
-(NSDictionary *)currentListeningToContainer;
-(void)setCurrentListeningToContainer:(NSDictionary *)arg1 ;
-(SAMPMediaItem *)nextListeningToItem;
-(void)setNextListeningToItem:(SAMPMediaItem *)arg1 ;
-(SANPCommandInfo *)nowPlayingCommandInfo;
-(void)setNowPlayingCommandInfo:(SANPCommandInfo *)arg1 ;
-(SAMPNowPlayingQueuePosition *)playbackQueuePosition;
-(void)setPlaybackQueuePosition:(SAMPNowPlayingQueuePosition *)arg1 ;
-(SAMPMediaItem *)previousListenedToItem;
-(void)setPreviousListenedToItem:(SAMPMediaItem *)arg1 ;
-(NSNumber *)shuffleEnabled;
-(void)setShuffleEnabled:(NSNumber *)arg1 ;
-(void)setPlaybackRate:(NSNumber *)arg1 ;
-(NSNumber *)playbackRate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
@end

