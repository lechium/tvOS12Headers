/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPRequest.h>

@class MPCPlayerPath, MPPropertySet;

@interface MPCPlayerRequest : MPRequest {

	BOOL _disablePlaybackStateValidation;
	BOOL _disablePlaybackRateValidation;
	MPCPlayerPath* _playerPath;
	MPPropertySet* _playingItemProperties;
	MPPropertySet* _queueSectionProperties;
	MPPropertySet* _queueItemProperties;
	SCD_Struct_MP5 _tracklistRange;

}

@property (nonatomic,retain) MPCPlayerPath * playerPath;                        //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) MPPropertySet * playingItemProperties;               //@synthesize playingItemProperties=_playingItemProperties - In the implementation block
@property (nonatomic,copy) MPPropertySet * queueSectionProperties;              //@synthesize queueSectionProperties=_queueSectionProperties - In the implementation block
@property (nonatomic,copy) MPPropertySet * queueItemProperties;                 //@synthesize queueItemProperties=_queueItemProperties - In the implementation block
@property (assign,nonatomic) BOOL disablePlaybackStateValidation;               //@synthesize disablePlaybackStateValidation=_disablePlaybackStateValidation - In the implementation block
@property (assign,nonatomic) BOOL disablePlaybackRateValidation;                //@synthesize disablePlaybackRateValidation=_disablePlaybackRateValidation - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP5 tracklistRange;                     //@synthesize tracklistRange=_tracklistRange - In the implementation block
+(Class)responseClass;
-(id)middlewareClasses;
-(void)setTracklistRange:(SCD_Struct_MP5)arg1 ;
-(void)setPlayerPath:(MPCPlayerPath *)arg1 ;
-(void)setPlayingItemProperties:(MPPropertySet *)arg1 ;
-(void)setQueueItemProperties:(MPPropertySet *)arg1 ;
-(void)setDisablePlaybackStateValidation:(BOOL)arg1 ;
-(void)setDisablePlaybackRateValidation:(BOOL)arg1 ;
-(SCD_Struct_MP5)tracklistRange;
-(MPCPlayerPath *)playerPath;
-(MPPropertySet *)playingItemProperties;
-(MPPropertySet *)queueItemProperties;
-(MPPropertySet *)queueSectionProperties;
-(void)setQueueSectionProperties:(MPPropertySet *)arg1 ;
-(BOOL)disablePlaybackStateValidation;
-(BOOL)disablePlaybackRateValidation;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
