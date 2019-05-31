/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, AVTransportBarViewController;

@interface AVInternalPlaybackOptions : NSObject {

	BOOL _includeTransportBar;
	BOOL _includeInfoViews;
	BOOL _requiresLinearPlayback;
	BOOL _requiresFullSubtitles;
	BOOL _disableScrubbingThumbnails;
	BOOL _appliesPreferredDisplayCriteriaAutomatically;
	BOOL _skipForwardEnabled;
	BOOL _skipBackwardEnabled;
	NSArray* _allowedSubtitleOptionLanguages;
	AVTransportBarViewController* _clientTransportBarViewController;
	long long _skippingBehavior;

}

@property (assign,nonatomic) BOOL includeTransportBar;                                                         //@synthesize includeTransportBar=_includeTransportBar - In the implementation block
@property (assign,nonatomic) BOOL includeInfoViews;                                                            //@synthesize includeInfoViews=_includeInfoViews - In the implementation block
@property (assign,nonatomic) BOOL requiresLinearPlayback;                                                      //@synthesize requiresLinearPlayback=_requiresLinearPlayback - In the implementation block
@property (nonatomic,copy) NSArray * allowedSubtitleOptionLanguages;                                           //@synthesize allowedSubtitleOptionLanguages=_allowedSubtitleOptionLanguages - In the implementation block
@property (assign,nonatomic) BOOL requiresFullSubtitles;                                                       //@synthesize requiresFullSubtitles=_requiresFullSubtitles - In the implementation block
@property (assign,nonatomic) BOOL disableScrubbingThumbnails;                                                  //@synthesize disableScrubbingThumbnails=_disableScrubbingThumbnails - In the implementation block
@property (nonatomic,retain) AVTransportBarViewController * clientTransportBarViewController;                  //@synthesize clientTransportBarViewController=_clientTransportBarViewController - In the implementation block
@property (assign,nonatomic) BOOL appliesPreferredDisplayCriteriaAutomatically;                                //@synthesize appliesPreferredDisplayCriteriaAutomatically=_appliesPreferredDisplayCriteriaAutomatically - In the implementation block
@property (assign,nonatomic) long long skippingBehavior;                                                       //@synthesize skippingBehavior=_skippingBehavior - In the implementation block
@property (assign,getter=isSkipForwardEnabled,nonatomic) BOOL skipForwardEnabled;                              //@synthesize skipForwardEnabled=_skipForwardEnabled - In the implementation block
@property (assign,getter=isSkipBackwardEnabled,nonatomic) BOOL skipBackwardEnabled;                            //@synthesize skipBackwardEnabled=_skipBackwardEnabled - In the implementation block
@property (getter=isOffOptionAvailableForSubtitles,readonly) BOOL offOptionAvailableForSubtitles; 
-(BOOL)isOffOptionAvailableForSubtitles;
-(id)_descriptionOfTrueBooleanProperty:(id)arg1 ;
-(id)_descriptionOfBooleanProperty:(id)arg1 ;
-(BOOL)includeTransportBar;
-(void)setIncludeTransportBar:(BOOL)arg1 ;
-(BOOL)includeInfoViews;
-(void)setIncludeInfoViews:(BOOL)arg1 ;
-(BOOL)requiresLinearPlayback;
-(NSArray *)allowedSubtitleOptionLanguages;
-(void)setAllowedSubtitleOptionLanguages:(NSArray *)arg1 ;
-(BOOL)requiresFullSubtitles;
-(void)setRequiresFullSubtitles:(BOOL)arg1 ;
-(BOOL)disableScrubbingThumbnails;
-(void)setDisableScrubbingThumbnails:(BOOL)arg1 ;
-(AVTransportBarViewController *)clientTransportBarViewController;
-(void)setClientTransportBarViewController:(AVTransportBarViewController *)arg1 ;
-(BOOL)appliesPreferredDisplayCriteriaAutomatically;
-(long long)skippingBehavior;
-(BOOL)isSkipForwardEnabled;
-(void)setSkipForwardEnabled:(BOOL)arg1 ;
-(BOOL)isSkipBackwardEnabled;
-(void)setSkipBackwardEnabled:(BOOL)arg1 ;
-(void)setAppliesPreferredDisplayCriteriaAutomatically:(BOOL)arg1 ;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
-(void)setSkippingBehavior:(long long)arg1 ;
-(id)init;
-(id)debugDescription;
@end
