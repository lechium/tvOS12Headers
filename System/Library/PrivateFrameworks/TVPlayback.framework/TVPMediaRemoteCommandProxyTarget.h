/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPMediaRemoteCommandHandling.h>

@protocol TVPMediaRemoteCommandHandling;
@class NSString;

@interface TVPMediaRemoteCommandProxyTarget : NSObject <TVPMediaRemoteCommandHandling> {

	id<TVPMediaRemoteCommandHandling> _defaultHandler;

}

@property (assign,nonatomic,__weak) id<TVPMediaRemoteCommandHandling> defaultHandler;              //@synthesize defaultHandler=_defaultHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDefaultHandler:(id<TVPMediaRemoteCommandHandling>)arg1 ;
-(long long)_handlePauseCommand:(id)arg1 ;
-(long long)_handlePlayCommand:(id)arg1 ;
-(long long)_handleStopCommand:(id)arg1 ;
-(long long)_handleTogglePlayPauseCommand:(id)arg1 ;
-(long long)_handleNextTrackCommand:(id)arg1 ;
-(long long)_handlePreviousTrackCommand:(id)arg1 ;
-(long long)_handleSeekForwardCommand:(id)arg1 ;
-(long long)_handleSeekBackwardCommand:(id)arg1 ;
-(long long)_handleSkipForwardCommand:(id)arg1 ;
-(long long)_handleSkipBackwardCommand:(id)arg1 ;
-(long long)_handleChangePlaybackRateCommand:(id)arg1 ;
-(id<TVPMediaRemoteCommandHandling>)defaultHandler;
-(long long)_handleAction:(SEL)arg1 withDefaultSelector:(SEL)arg2 forRemoteCommandEvent:(id)arg3 ;
@end

