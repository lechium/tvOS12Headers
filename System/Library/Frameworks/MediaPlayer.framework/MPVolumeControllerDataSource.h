/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MPVolumeControllerDataSource <NSObject>
@property (assign,nonatomic,__weak) id<MPVolumeControllerDataSourceDelegate> delegate; 
@property (nonatomic,readonly) BOOL applicationShouldOverrideHardwareVolumeBehavior; 
@property (nonatomic,copy,readonly) NSString * volumeControlLabel; 
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (assign,nonatomic) float volume; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (nonatomic,readonly) BOOL volumeWarningEnabled; 
@property (nonatomic,readonly) long long volumeWarningState; 
@property (nonatomic,readonly) float EUVolumeLimit; 
@optional
-(void)reloadWarning;

@required
-(BOOL)isVolumeControlAvailable;
-(BOOL)volumeWarningEnabled;
-(float)EUVolumeLimit;
-(long long)volumeWarningState;
-(NSString *)volumeControlLabel;
-(void)adjustVolumeValue:(float)arg1;
-(void)getVolumeValueWithCompletion:(/*^block*/id)arg1;
-(void)initializeVolume;
-(BOOL)applicationShouldOverrideHardwareVolumeBehavior;
-(void)setVolume:(float)arg1;
-(void)setMuted:(BOOL)arg1;
-(float)volume;
-(BOOL)isMuted;
-(void)setDelegate:(id)arg1;
-(id<MPVolumeControllerDataSourceDelegate>)delegate;
-(void)reload;

@end

