/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSData;


@protocol AVCSessionParticipantControlProtocol <NSObject>
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSData * negotiationData; 
@property (assign,getter=isAudioMuted,nonatomic) BOOL audioMuted; 
@property (assign,getter=isAudioEnabled,nonatomic) BOOL audioEnabled; 
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled; 
@property (assign,getter=isAudioPaused,nonatomic) BOOL audioPaused; 
@property (assign,getter=isVideoPaused,nonatomic) BOOL videoPaused; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,readonly) NSData * frequencyLevels; 
@required
-(void)setAudioEnabled:(BOOL)arg1;
-(void)setVolume:(float)arg1;
-(BOOL)isAudioPaused;
-(BOOL)isVideoPaused;
-(BOOL)isAudioEnabled;
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1;
-(void)setAudioPaused:(BOOL)arg1;
-(void)setVideoPaused:(BOOL)arg1;
-(void)setAudioMuted:(BOOL)arg1;
-(NSData *)negotiationData;
-(BOOL)isAudioMuted;
-(NSData *)frequencyLevels;
-(float)volume;
-(NSString *)uuid;

@end

