/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVInfoPanelContentViewController.h>
#import <AVKit/AVInfoPanelMediaOptionSelectionDelegate.h>

@protocol AVInfoPanelLanguageDelegate;
@class AVInfoPanelAudioCollectionViewController, UIView, NSLayoutConstraint, AVKeyValueObservationController, AVSpeakerManager, NSString;

@interface AVInfoPanelAudioViewController : AVInfoPanelContentViewController <AVInfoPanelMediaOptionSelectionDelegate> {

	AVInfoPanelAudioCollectionViewController* _languageCollectionViewController;
	AVInfoPanelAudioCollectionViewController* _soundCollectionViewController;
	AVInfoPanelAudioCollectionViewController* _speakerCollectionViewController;
	UIView* _languageHeaderView;
	UIView* _soundHeaderView;
	UIView* _speakerHeaderView;
	NSLayoutConstraint* _languageCollectionViewWidthConstraint;
	NSLayoutConstraint* _soundCollectionViewWidthConstraint;
	NSLayoutConstraint* _speakerCollectionViewWidthConstraint;
	NSLayoutConstraint* _languageCollectionViewHeightConstraint;
	NSLayoutConstraint* _soundCollectionViewHeightConstraint;
	NSLayoutConstraint* _speakerCollectionViewHeightConstraint;
	BOOL _hasSetupColumnWidthConstraints;
	BOOL _hasSetupColumnHeightConstraints;
	AVKeyValueObservationController* _kvoController;
	int _lateNightModeNotificationToken;
	BOOL _isSpeakerRefreshPending;
	id<AVInfoPanelLanguageDelegate> _delegate;
	unsigned long long _selectedLanguageOptionIndex;
	unsigned long long _selectedSoundOptionIndex;
	AVSpeakerManager* _speakerManager;

}

@property (nonatomic,retain) AVSpeakerManager * speakerManager;                            //@synthesize speakerManager=_speakerManager - In the implementation block
@property (assign,nonatomic,__weak) id<AVInfoPanelLanguageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long selectedLanguageOptionIndex;               //@synthesize selectedLanguageOptionIndex=_selectedLanguageOptionIndex - In the implementation block
@property (assign,nonatomic) unsigned long long selectedSoundOptionIndex;                  //@synthesize selectedSoundOptionIndex=_selectedSoundOptionIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)mediaOptionCollectionViewController:(id)arg1 didSelectMediaOption:(id)arg2 ;
-(void)setAudibleMediaSelectionOptions:(id)arg1 ;
-(void)setSelectedLanguageOptionIndex:(unsigned long long)arg1 ;
-(long long)_textAlignmentForUserInterfaceLayout;
-(void)_setupLanguageColumn;
-(void)_setupSoundColumn;
-(void)_setupSpeakerColumn;
-(double)_largestColumnHeight;
-(void)_createOrUpdateColumnHeightConstraints;
-(void)_createOrUpdateColumnWidthConstraints;
-(void)_updateSelectedSoundOption;
-(void)_scheduleAvailableSpeakersUpdate;
-(void)_updateSpeakerSelection;
-(void)_updateAvailableSpeakers;
-(id)_newHeaderViewWithTitle:(id)arg1 ;
-(unsigned long long)selectedLanguageOptionIndex;
-(unsigned long long)selectedSoundOptionIndex;
-(void)setSelectedSoundOptionIndex:(unsigned long long)arg1 ;
-(AVSpeakerManager *)speakerManager;
-(void)setSpeakerManager:(AVSpeakerManager *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<AVInfoPanelLanguageDelegate>)arg1 ;
-(id<AVInfoPanelLanguageDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(BOOL)hasContent;
@end

