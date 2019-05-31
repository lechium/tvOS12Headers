/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class RPCompanionLinkClient, AVAudioSession, AVAudioPlayer, ACAccountStore, ACAccount, NSString, SSAccount, NSObject, NSArray, HMAccessory, SFSession, SFDeviceOperationWiFiSetup, TRSession, NSMutableArray, TROperationQueue, NSSet, SFDeviceOperationHomeKitSetup, NSDictionary, SFDevice, UIViewController, HMHome;

@interface SFDeviceSetupB238Session : NSObject <AVAudioPlayerDelegate> {

	BOOL _activateCalled;
	RPCompanionLinkClient* _companionLinkClient;
	BOOL _invalidateCalled;
	unsigned long long _startTicks;
	int _proxSetupActiveToken;
	BOOL _audioProgress;
	AVAudioSession* _audioSession;
	AVAudioPlayer* _audioPlayerStart;
	AVAudioPlayer* _audioPlayerStep;
	/*^block*/id _audioPlayerCompletion;
	BOOL _preflightEnabled;
	int _preflightWiFiState;
	int _preflightiCloudState;
	BOOL _preventAppleWiFi;
	ACAccountStore* _iCloudAccountStore;
	ACAccount* _iCloudAccount;
	NSString* _iCloudUserID;
	int _iCloudAccountState;
	BOOL _homeiCloudEnabled;
	int _preflightiTunesState;
	SSAccount* _iTunesAccount;
	BOOL _iTunesSignInSkip;
	NSString* _iTunesUserID;
	BOOL _appleMusicEnabled;
	int _appleMusicState;
	BOOL _appleMusicForce;
	NSObject*<OS_dispatch_source> _appleMusicTimeoutTimer;
	int _preflightAppleMusicState;
	int _preflightMiscState;
	BOOL _locationEnabled;
	BOOL _locationDecided;
	BOOL _siriEnabled;
	BOOL _prefStereoPairEnabled;
	BOOL _prefStereoWait;
	NSArray* _potentialStereoCounterparts;
	HMAccessory* _stereoCounterpartAccessory;
	int _stereoPairUserInputState;
	int _stereoPairRole;
	SFSession* _sfSession;
	BOOL _sfSessionSecured;
	int _sfSessionState;
	int _preAuthState;
	BOOL _preAuthStartedProgress;
	unsigned _siriFlags;
	NSArray* _siriLanguageCodes;
	long long _siriLanguageIndex;
	BOOL _siriLanguagePicked;
	int _siriLanguageState;
	NSString* _siriPreferredLanguage;
	BOOL _siriPasscodeEnabled;
	BOOL _siriPasscodeInitDone;
	BOOL _siriPasscodeSecured;
	int _siriPasscodeState;
	unsigned _pairSetupFlags;
	int _pairSetupState;
	double _pairSetupSecs;
	int _personalRequestsState;
	int _personalRequestsChoice;
	int _termsState;
	BOOL _termsAgreed;
	int _shareSettingsState;
	BOOL _shareSettingsAgreed;
	int _authKitTrustState;
	int _basicConfigState;
	unsigned long long _basicConfigStartTicks;
	double _basicConfigSecs;
	NSString* _deviceGUID;
	NSString* _deviceSerialNumber;
	SFDeviceOperationWiFiSetup* _wifiSetupOperation;
	int _wifiSetupState;
	double _wifiSetupSecs;
	int _trSessionState;
	TRSession* _trSession;
	NSMutableArray* _trOperations;
	TROperationQueue* _trOperationQueue;
	int _trSetupConfigurationState;
	unsigned long long _trSetupConfigurationStartTicks;
	double _trSetupConfigurationSecs;
	BOOL _trNeedsNetwork;
	NSSet* _trUnauthServices;
	int _trActivationState;
	unsigned long long _trActivationStartTicks;
	double _trActivationSecs;
	int _trAuthenticationState;
	unsigned long long _trAuthenticationStartTicks;
	double _trAuthenticationSecs;
	SFDeviceOperationHomeKitSetup* _homeKitSetupOperation;
	int _homeKitUserInputState;
	int _homeKitSetupState;
	double _homeKitSetupSecs;
	NSString* _homeKitSelectedRoomName;
	BOOL _hasExistingHomePod;
	int _finishState;
	unsigned long long _finishStartTicks;
	double _finishSecs;
	double _iTunesWaitSecs;
	double _mediaSystemWaitSecs;
	double _totalSecs;
	BOOL _prefForceSiriGreeting;
	BOOL _liveOn;
	BOOL _pauseAfterPreAuth;
	unsigned char _stereoCounterpartColor;
	BOOL _touchRemoteEnabled;
	unsigned _testFlags;
	NSDictionary* _additionalMetrics;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFDevice* _peerDevice;
	unsigned long long _peerFeatureFlags;
	NSDictionary* _preAuthResponse;
	UIViewController* _presentingViewController;
	/*^block*/id _preAuthHandler;
	/*^block*/id _progressHandler;
	/*^block*/id _promptForAppleMusicHandler;
	/*^block*/id _promptForHomeHandler;
	/*^block*/id _promptForHomeiCloudHandler;
	/*^block*/id _promptForiTunesSignInHandler;
	/*^block*/id _promptForLocationEnableHandler;
	/*^block*/id _promptForPersonalRequestsHandler;
	/*^block*/id _promptForPINHandler;
	/*^block*/id _promptForRoomHandler;
	/*^block*/id _promptForSiriEnableHandler;
	/*^block*/id _promptForTermsHandler;
	/*^block*/id _promptToInstallHomeAppHandler;
	/*^block*/id _promptToShareSettingsHandler;
	/*^block*/id _promptForSiriLanguageHandler;
	/*^block*/id _promptForStereoRoleHandler;
	/*^block*/id _promptForStereoMultipleHandler;

}

@property (nonatomic,retain) NSDictionary * preAuthResponse;                           //@synthesize preAuthResponse=_preAuthResponse - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalMetrics;                           //@synthesize additionalMetrics=_additionalMetrics - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL liveOn;                                              //@synthesize liveOn=_liveOn - In the implementation block
@property (assign,nonatomic) BOOL pauseAfterPreAuth;                                   //@synthesize pauseAfterPreAuth=_pauseAfterPreAuth - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                    //@synthesize peerDevice=_peerDevice - In the implementation block
@property (assign,nonatomic) unsigned long long peerFeatureFlags;                      //@synthesize peerFeatureFlags=_peerFeatureFlags - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) HMHome * selectedHome; 
@property (nonatomic,readonly) NSString * selectedSiriLanguage; 
@property (nonatomic,readonly) unsigned char stereoCounterpartColor;                   //@synthesize stereoCounterpartColor=_stereoCounterpartColor - In the implementation block
@property (assign,nonatomic) unsigned testFlags;                                       //@synthesize testFlags=_testFlags - In the implementation block
@property (assign,nonatomic) BOOL touchRemoteEnabled;                                  //@synthesize touchRemoteEnabled=_touchRemoteEnabled - In the implementation block
@property (nonatomic,copy) id preAuthHandler;                                          //@synthesize preAuthHandler=_preAuthHandler - In the implementation block
@property (nonatomic,copy) id progressHandler;                                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id promptForAppleMusicHandler;                              //@synthesize promptForAppleMusicHandler=_promptForAppleMusicHandler - In the implementation block
@property (nonatomic,copy) id promptForHomeHandler;                                    //@synthesize promptForHomeHandler=_promptForHomeHandler - In the implementation block
@property (nonatomic,copy) id promptForHomeiCloudHandler;                              //@synthesize promptForHomeiCloudHandler=_promptForHomeiCloudHandler - In the implementation block
@property (nonatomic,copy) id promptForiTunesSignInHandler;                            //@synthesize promptForiTunesSignInHandler=_promptForiTunesSignInHandler - In the implementation block
@property (nonatomic,copy) id promptForLocationEnableHandler;                          //@synthesize promptForLocationEnableHandler=_promptForLocationEnableHandler - In the implementation block
@property (nonatomic,copy) id promptForPersonalRequestsHandler;                        //@synthesize promptForPersonalRequestsHandler=_promptForPersonalRequestsHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                     //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (nonatomic,copy) id promptForRoomHandler;                                    //@synthesize promptForRoomHandler=_promptForRoomHandler - In the implementation block
@property (nonatomic,copy) id promptForSiriEnableHandler;                              //@synthesize promptForSiriEnableHandler=_promptForSiriEnableHandler - In the implementation block
@property (nonatomic,copy) id promptForTermsHandler;                                   //@synthesize promptForTermsHandler=_promptForTermsHandler - In the implementation block
@property (nonatomic,copy) id promptToInstallHomeAppHandler;                           //@synthesize promptToInstallHomeAppHandler=_promptToInstallHomeAppHandler - In the implementation block
@property (nonatomic,copy) id promptToShareSettingsHandler;                            //@synthesize promptToShareSettingsHandler=_promptToShareSettingsHandler - In the implementation block
@property (nonatomic,copy) id promptForSiriLanguageHandler;                            //@synthesize promptForSiriLanguageHandler=_promptForSiriLanguageHandler - In the implementation block
@property (nonatomic,copy) id promptForStereoRoleHandler;                              //@synthesize promptForStereoRoleHandler=_promptForStereoRoleHandler - In the implementation block
@property (nonatomic,copy) id promptForStereoMultipleHandler;                          //@synthesize promptForStereoMultipleHandler=_promptForStereoMultipleHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cleanupSession;
-(void)preflight;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(NSDictionary *)additionalMetrics;
-(void)setAdditionalMetrics:(NSDictionary *)arg1 ;
-(id)progressHandler;
-(void)_activate;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(void)pairSetupTryPIN:(id)arg1 ;
-(int)_runSFSessionStart;
-(void)homeAppInstallChoice:(BOOL)arg1 ;
-(id)promptForHomeHandler;
-(void)setPromptForHomeHandler:(id)arg1 ;
-(id)promptForRoomHandler;
-(void)setPromptForRoomHandler:(id)arg1 ;
-(id)promptToInstallHomeAppHandler;
-(void)setPromptToInstallHomeAppHandler:(id)arg1 ;
-(void)setTouchRemoteEnabled:(BOOL)arg1 ;
-(int)_runPreflightWiFi;
-(int)_runWiFiSetup;
-(int)_runTRSessionStart;
-(int)_runTRAuthentication;
-(int)_runHomeKitSetup;
-(int)_runPreflightiTunes;
-(int)_runPreAuth;
-(int)_runPairSetup;
-(int)_runHomeKitUserInput;
-(int)_runBasicConfig;
-(int)_runTRSetupConfiguration;
-(int)_runTRActivation;
-(void)_reportError:(id)arg1 label:(id)arg2 ;
-(void)_runPreAuthRequest;
-(void)_runPreAuthResponse:(id)arg1 error:(id)arg2 ;
-(void)homeKitSelectHome:(id)arg1 ;
-(void)homeKitSelectRoom:(id)arg1 ;
-(void)_setupAudio;
-(void)_preflightAppleMusic;
-(void)_preflightAppleMusicCompleted:(int)arg1 ;
-(void)_speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(int)_runPreflightiCloud;
-(int)_runStereoPairUserInput;
-(int)_runAppleMusic;
-(int)_runSiriLanguage;
-(int)_runPersonalRequests;
-(int)_runPreflightMisc;
-(int)_runCheckAccount;
-(int)_runTerms;
-(int)_runShareSettings;
-(void)_runAuthKitTrustStartIfNeeded;
-(int)_runSiriPasscode;
-(int)_runAuthKitTrustFinish;
-(int)_runFinishStart;
-(void)_promptForPINWithFlags:(unsigned)arg1 throttleSeconds:(int)arg2 ;
-(void)_handlePeerEvent:(id)arg1 flags:(unsigned)arg2 ;
-(void)_homeKitUpdateiCloudSwitchState:(BOOL)arg1 ;
-(void)_runStereoPairUserInputPickColors:(BOOL)arg1 ;
-(void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2 ;
-(void)_runSiriPasscodeInitRequest;
-(void)_runSiriPasscodeStartPairSetup;
-(void)_runSiriPasscodeInitResponse:(id)arg1 error:(id)arg2 ;
-(void)_runBasicConfigSendRequest;
-(void)_runBasicConfigReceiveResponse:(id)arg1 error:(id)arg2 ;
-(void)_runFinishRequest;
-(void)_runFinishResponse:(id)arg1 error:(id)arg2 ;
-(void)_logMetrics;
-(void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)audioSessionInterrupted:(id)arg1 ;
-(void)appleMusicNext;
-(void)homeiCloudEnable;
-(void)homeKitReselectHome;
-(void)locationEnable:(BOOL)arg1 ;
-(void)personalRequestsEnabled:(BOOL)arg1 ;
-(void)playAudioPasscodeAgain;
-(NSString *)selectedSiriLanguage;
-(void)shareSettingsAgreed;
-(void)siriEnable;
-(void)siriLanguagePicked:(long long)arg1 ;
-(void)skipAudioPasscode;
-(void)skipiTunesSignIn;
-(void)speakPasscodeWithCompletion:(/*^block*/id)arg1 ;
-(void)speakPasscodeWithLanguageCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)speakPasscodeWithInstructions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stereoRolePicked:(int)arg1 ;
-(void)stereoMultiplePicked:(id)arg1 ;
-(void)termsAgreed;
-(BOOL)liveOn;
-(void)setLiveOn:(BOOL)arg1 ;
-(BOOL)pauseAfterPreAuth;
-(void)setPauseAfterPreAuth:(BOOL)arg1 ;
-(unsigned long long)peerFeatureFlags;
-(void)setPeerFeatureFlags:(unsigned long long)arg1 ;
-(NSDictionary *)preAuthResponse;
-(void)setPreAuthResponse:(NSDictionary *)arg1 ;
-(unsigned char)stereoCounterpartColor;
-(unsigned)testFlags;
-(void)setTestFlags:(unsigned)arg1 ;
-(BOOL)touchRemoteEnabled;
-(id)preAuthHandler;
-(void)setPreAuthHandler:(id)arg1 ;
-(id)promptForAppleMusicHandler;
-(void)setPromptForAppleMusicHandler:(id)arg1 ;
-(id)promptForHomeiCloudHandler;
-(void)setPromptForHomeiCloudHandler:(id)arg1 ;
-(id)promptForiTunesSignInHandler;
-(void)setPromptForiTunesSignInHandler:(id)arg1 ;
-(id)promptForLocationEnableHandler;
-(void)setPromptForLocationEnableHandler:(id)arg1 ;
-(id)promptForPersonalRequestsHandler;
-(void)setPromptForPersonalRequestsHandler:(id)arg1 ;
-(id)promptForSiriEnableHandler;
-(void)setPromptForSiriEnableHandler:(id)arg1 ;
-(id)promptForTermsHandler;
-(void)setPromptForTermsHandler:(id)arg1 ;
-(id)promptToShareSettingsHandler;
-(void)setPromptToShareSettingsHandler:(id)arg1 ;
-(id)promptForSiriLanguageHandler;
-(void)setPromptForSiriLanguageHandler:(id)arg1 ;
-(id)promptForStereoRoleHandler;
-(void)setPromptForStereoRoleHandler:(id)arg1 ;
-(id)promptForStereoMultipleHandler;
-(void)setPromptForStereoMultipleHandler:(id)arg1 ;
-(HMHome *)selectedHome;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(SFDevice *)peerDevice;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(id)init;
-(void)dealloc;
-(UIViewController *)presentingViewController;
-(void)invalidate;
-(void)_invalidate;
-(void)_cleanup;
-(void)activate;
-(void)setProgressHandler:(id)arg1 ;
-(void)disconnect;
-(void)_run;
@end

