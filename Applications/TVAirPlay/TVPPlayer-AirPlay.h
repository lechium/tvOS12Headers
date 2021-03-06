//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPPlayer.h"

@interface TVPPlayer (AirPlay)
- (id)mediaItemForIdentifier:(id)arg1;	// IMP=0x000000010000f928
- (void)setAudioSessionID:(unsigned int)arg1;	// IMP=0x000000010000f7f4
- (void)setReversePlaybackEndTime:(CDStruct_198678f7)arg1;	// IMP=0x000000010000f6ac
- (void)setForwardPlaybackEndTime:(CDStruct_198678f7)arg1;	// IMP=0x000000010000f564
- (void)setPlayerRate:(float)arg1;	// IMP=0x000000010000f43c
- (void)setPlayerPosition:(double)arg1;	// IMP=0x000000010000f2ec
- (void)setSelectedMediaArray:(id)arg1;	// IMP=0x000000010000f2e0
- (id)selectedMediaArray;	// IMP=0x000000010000f078
- (void)setTrackEnabled:(_Bool)arg1 trackID:(long long)arg2;	// IMP=0x000000010000ee98
- (_Bool)trackEnabled:(long long)arg1;	// IMP=0x000000010000ec90
- (id)timedMetadata;	// IMP=0x000000010000ebc4
- (id)errorLogArray;	// IMP=0x000000010000eb70
- (id)accessLogArray;	// IMP=0x000000010000eb1c
- (id)playbackInfo;	// IMP=0x000000010000df10
@end

