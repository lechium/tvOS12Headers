/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCCapabilities;

@interface AVConferenceCallState : NSObject {

	BOOL _audioIsPaused;
	VCCapabilities* _capabilities;
	BOOL _isVideoPaused;
	BOOL _isAudioSending;

}

@property (assign,getter=isAudioPaused,nonatomic) BOOL audioIsPaused;                //@synthesize audioIsPaused=_audioIsPaused - In the implementation block
@property (assign,getter=isVideoPaused,nonatomic) BOOL isVideoPaused;                //@synthesize isVideoPaused=_isVideoPaused - In the implementation block
@property (assign,getter=isAudioSending,nonatomic) BOOL isAudioSending;              //@synthesize isAudioSending=_isAudioSending - In the implementation block
@property (nonatomic,retain) VCCapabilities * capabilities;                          //@synthesize capabilities=_capabilities - In the implementation block
-(BOOL)isAudioPaused;
-(void)setAudioIsPaused:(BOOL)arg1 ;
-(BOOL)isVideoPaused;
-(void)setIsVideoPaused:(BOOL)arg1 ;
-(BOOL)isAudioSending;
-(void)setIsAudioSending:(BOOL)arg1 ;
-(VCCapabilities *)capabilities;
-(void)setCapabilities:(VCCapabilities *)arg1 ;
-(void)dealloc;
@end

