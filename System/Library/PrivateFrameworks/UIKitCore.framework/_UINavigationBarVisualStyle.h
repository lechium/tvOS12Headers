/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIFont;

@interface _UINavigationBarVisualStyle : NSObject {

	long long _idiom;
	long long _metrics;
	BOOL _wantsLetterPress;
	BOOL _inPopover;

}

@property (assign,nonatomic) long long metrics;                                   //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) BOOL metricsIsMini; 
@property (nonatomic,readonly) BOOL metricsHasPrompt; 
@property (assign,nonatomic) BOOL wantsLetterPress;                               //@synthesize wantsLetterPress=_wantsLetterPress - In the implementation block
@property (assign,nonatomic) BOOL inPopover;                                      //@synthesize inPopover=_inPopover - In the implementation block
@property (nonatomic,readonly) long long idiom;                                   //@synthesize idiom=_idiom - In the implementation block
@property (nonatomic,readonly) double backButtonIndicatorSpacing; 
@property (nonatomic,readonly) double buttonHeight; 
@property (nonatomic,readonly) double barHeight; 
@property (nonatomic,readonly) double barPromptHeight; 
@property (nonatomic,readonly) double topMargin; 
@property (nonatomic,readonly) double horizontalMarginAdjustment; 
@property (nonatomic,readonly) double topTitleMargin; 
@property (nonatomic,readonly) double topBackMargin; 
@property (nonatomic,readonly) double headingFontSize; 
@property (nonatomic,readonly) double buttonFontSize; 
@property (nonatomic,readonly) double leftTitleMargin; 
@property (nonatomic,readonly) double leftBackTitleMargin; 
@property (nonatomic,readonly) double leftBackImageMargin; 
@property (nonatomic,readonly) double rightTitleMargin; 
@property (nonatomic,readonly) double rightImageMargin; 
@property (nonatomic,readonly) double leftTextMargin; 
@property (nonatomic,readonly) double topImageMargin; 
@property (nonatomic,readonly) double bottomImageMargin; 
@property (nonatomic,readonly) double bottomButtonMargin; 
@property (nonatomic,readonly) double promptInset; 
@property (nonatomic,readonly) double interItemSpace; 
@property (nonatomic,readonly) double interBlockSpace; 
@property (nonatomic,readonly) double maxBackButtonProportion; 
@property (nonatomic,readonly) double minBackTextWidth; 
@property (nonatomic,readonly) double minBackImageWidth; 
@property (nonatomic,readonly) double minButtonWidth; 
@property (nonatomic,readonly) double minTitleWidth; 
@property (nonatomic,readonly) double buttonImagePadding; 
@property (nonatomic,readonly) double promptFontSize; 
@property (nonatomic,copy,readonly) UIFont * promptFont; 
@property (nonatomic,readonly) double promptTextOffset; 
@property (nonatomic,readonly) double navigationItemBaselineOffset; 
@property (nonatomic,readonly) double backIndicatorBottomMargin; 
@property (nonatomic,copy,readonly) UIFont * defaultTitleFont; 
@property (nonatomic,readonly) UIEdgeInsets buttonContentEdgeInsets; 
@property (nonatomic,readonly) double _legacyLeftEdgeMargin; 
@property (nonatomic,readonly) double _legacyRightEdgeMargin; 
@property (nonatomic,readonly) double _legacyLeftTitleMargin; 
@property (nonatomic,readonly) double _legacyRightTitleMargin; 
@property (nonatomic,readonly) double _legacyButtonFontSize; 
@property (nonatomic,readonly) double _legacyButtonImagePadding; 
+(id)visualStyleForIdiom:(long long)arg1 ;
-(void)setInPopover:(BOOL)arg1 ;
-(BOOL)inPopover;
-(id)buttonFontForStyle:(long long)arg1 ;
-(double)_legacyButtonFontSize;
-(id)_legacyButtonFontForStyle:(long long)arg1 ;
-(UIEdgeInsets)buttonContentEdgeInsets;
-(double)buttonFontSize;
-(double)leftBackTitleMargin;
-(double)rightTitleMargin;
-(double)buttonImagePadding;
-(double)navigationItemBaselineOffset;
-(void)setMetrics:(long long)arg1 ;
-(void)setWantsLetterPress:(BOOL)arg1 ;
-(double)_legacyLeftTitleMargin;
-(double)_legacyRightTitleMargin;
-(double)leftTitleMargin;
-(double)minBackTextWidth;
-(double)_legacyButtonImagePadding;
-(double)buttonHeight;
-(double)horizontalMarginAdjustment;
-(double)barHeightForMetrics:(long long)arg1 ;
-(long long)navigationBar:(id)arg1 metricsForOrientation:(long long)arg2 hasPrompt:(BOOL)arg3 ;
-(double)barHeight;
-(double)barPromptHeight;
-(UIFont *)promptFont;
-(UIFont *)defaultTitleFont;
-(id)defaultTitleColorForUserInterfaceStyle:(long long)arg1 barStyle:(long long)arg2 ;
-(double)headingFontSize;
-(long long)idiom;
-(double)promptTextOffset;
-(double)promptFontSize;
-(double)leftBackImageMargin;
-(double)leftBackTitleMarginForCustomBackButtonBackground:(id)arg1 ;
-(double)rightImageMargin;
-(double)backButtonIndicatorSpacing;
-(double)topImageMargin;
-(double)bottomImageMargin;
-(double)topBackMargin;
-(id)timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 isInteractive:(BOOL)arg3 ;
-(double)promptInset;
-(BOOL)metricsIsMini;
-(BOOL)metricsHasPrompt;
-(double)backIndicatorBottomMargin;
-(double)textButtonMarginInNavigationBar:(id)arg1 ;
-(double)imageButtonMarginInNavigationBar:(id)arg1 ;
-(double)_legacyLeftEdgeMargin;
-(double)_legacyRightEdgeMargin;
-(double)topMargin;
-(double)topTitleMargin;
-(double)minTitleWidth;
-(double)minBackImageWidth;
-(double)maxBackButtonProportion;
-(double)interItemSpace;
-(double)interBlockSpace;
-(double)leftTextMargin;
-(long long)metrics;
-(id)initWithIdiom:(long long)arg1 ;
-(BOOL)shouldForceLegacyLeftBackTitleMarginForCustomBackButtonBackground:(id)arg1 ;
-(double)leftBackTitleMarginLetterpressPadding;
-(double)backButtonAnimationClippingPadding;
-(double)bottomButtonMargin;
-(double)minButtonWidth;
-(BOOL)wantsLetterPress;
@end

