/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSDictionary, NSArray, NSString;

@interface BKSLocalDefaults : BSAbstractDefaultDomain

@property (assign,nonatomic) BOOL ignoreAccelerometerAndOrientationEvents; 
@property (assign,getter=isALSEnabled,nonatomic) BOOL ALSEnabled; 
@property (assign,nonatomic) long long ALSEpoch; 
@property (nonatomic,retain) NSDictionary * ALSUserPreferences; 
@property (assign,nonatomic) float ALSDelayOnUnlock; 
@property (assign,nonatomic) int brightnessCurve; 
@property (assign,nonatomic) BOOL ignoreTetheringPreferences; 
@property (assign,getter=isDitheringEnabled,nonatomic) BOOL ditheringEnabled; 
@property (assign,nonatomic) BOOL simulatePhoneButton; 
@property (assign,getter=isDigitizerSignpostsEnabled,nonatomic) BOOL digitizerSignpostsEnabled; 
@property (assign,nonatomic,__weak) NSArray * loggingTypesEnabled; 
@property (assign,nonatomic) float fenceArbiterTimeoutInterval; 
@property (assign,nonatomic,__weak) NSString * forceMirroredOrientation; 
@property (assign,nonatomic) BOOL hideAppleLogoOnLaunch; 
@property (assign,getter=isSteveNoteRotationEnabled,nonatomic) BOOL steveNoteRotationEnabled; 
@property (assign,nonatomic) BOOL disableCloneMirroring; 
@property (assign,nonatomic) BOOL disableCAOverscan; 
@property (assign,nonatomic) BOOL disableCAYUV; 
@property (assign,nonatomic) BOOL disableCAScaling; 
@property (assign,getter=isSteveNoteOverscanEnabled,nonatomic) BOOL steveNoteOverscanEnabled; 
@property (assign,nonatomic) BOOL forceCloneMirroring; 
@property (assign,nonatomic) BOOL disableStudyLogBTKeyboardEventLogging; 
@property (assign,nonatomic) BOOL disableStudyLogBTKeyboardEventRedirection; 
@property (assign,nonatomic) BOOL disableStudyLogVolumeKeyLogging; 
@property (assign,nonatomic) BOOL disableStudyLogHomeButtonLogging; 
@property (assign,nonatomic) BOOL disableStudyLogButtonLogging; 
-(void)setDisableCloneMirroring:(BOOL)arg1 ;
-(BOOL)disableCloneMirroring;
-(void)setDisableStudyLogBTKeyboardEventRedirection:(BOOL)arg1 ;
-(BOOL)disableStudyLogBTKeyboardEventRedirection;
-(void)setDisableCAScaling:(BOOL)arg1 ;
-(BOOL)disableCAScaling;
-(void)setForceCloneMirroring:(BOOL)arg1 ;
-(BOOL)forceCloneMirroring;
-(void)setSteveNoteRotationEnabled:(BOOL)arg1 ;
-(BOOL)isSteveNoteRotationEnabled;
-(void)setALSDelayOnUnlock:(float)arg1 ;
-(float)ALSDelayOnUnlock;
-(void)setHideAppleLogoOnLaunch:(BOOL)arg1 ;
-(BOOL)hideAppleLogoOnLaunch;
-(void)setDitheringEnabled:(BOOL)arg1 ;
-(BOOL)isDitheringEnabled;
-(void)setLoggingTypesEnabled:(NSArray *)arg1 ;
-(NSArray *)loggingTypesEnabled;
-(void)setDisableCAYUV:(BOOL)arg1 ;
-(BOOL)disableCAYUV;
-(void)setForceMirroredOrientation:(NSString *)arg1 ;
-(NSString *)forceMirroredOrientation;
-(void)setIgnoreAccelerometerAndOrientationEvents:(BOOL)arg1 ;
-(BOOL)ignoreAccelerometerAndOrientationEvents;
-(void)setIgnoreTetheringPreferences:(BOOL)arg1 ;
-(BOOL)ignoreTetheringPreferences;
-(void)setALSEnabled:(BOOL)arg1 ;
-(BOOL)isALSEnabled;
-(void)setDigitizerSignpostsEnabled:(BOOL)arg1 ;
-(BOOL)isDigitizerSignpostsEnabled;
-(void)setALSEpoch:(long long)arg1 ;
-(long long)ALSEpoch;
-(void)setSimulatePhoneButton:(BOOL)arg1 ;
-(BOOL)simulatePhoneButton;
-(void)setDisableStudyLogBTKeyboardEventLogging:(BOOL)arg1 ;
-(BOOL)disableStudyLogBTKeyboardEventLogging;
-(void)setALSUserPreferences:(NSDictionary *)arg1 ;
-(NSDictionary *)ALSUserPreferences;
-(void)setDisableStudyLogButtonLogging:(BOOL)arg1 ;
-(BOOL)disableStudyLogButtonLogging;
-(void)setBrightnessCurve:(int)arg1 ;
-(int)brightnessCurve;
-(void)setDisableCAOverscan:(BOOL)arg1 ;
-(BOOL)disableCAOverscan;
-(void)setDisableStudyLogHomeButtonLogging:(BOOL)arg1 ;
-(BOOL)disableStudyLogHomeButtonLogging;
-(void)setFenceArbiterTimeoutInterval:(float)arg1 ;
-(float)fenceArbiterTimeoutInterval;
-(void)setSteveNoteOverscanEnabled:(BOOL)arg1 ;
-(BOOL)isSteveNoteOverscanEnabled;
-(void)setDisableStudyLogVolumeKeyLogging:(BOOL)arg1 ;
-(BOOL)disableStudyLogVolumeKeyLogging;
-(void)migrateDefaultsIfNecessary;
-(void)_bindAndRegisterDefaults;
-(id)init;
@end

