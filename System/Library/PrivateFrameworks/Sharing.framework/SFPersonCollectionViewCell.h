/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol SFPersonCollectionViewCellDelegate;
@class SFAirDropNode, NSProgress, NSString, NSObject, SFPersonImageView, SFCircleProgressView, NSArray, UILabel, UIColor, _TVMonogramView, UIView, NSLayoutConstraint;

@interface SFPersonCollectionViewCell : UICollectionViewCell {

	BOOL _darkStyleOnLegacyApp;
	BOOL _stateBeingRestored;
	BOOL _pressIsAnimating;
	BOOL _unpressOnEndAnimating;
	BOOL _allowsFocus;
	SFAirDropNode* _person;
	NSProgress* _progress;
	long long _cellState;
	NSString* _sessionID;
	NSObject*<SFPersonCollectionViewCellDelegate> _delegate;
	double _activitySheetWidth;
	SFPersonImageView* _imageView;
	SFCircleProgressView* _circleProgressView;
	id _progressToken;
	NSArray* _progressKeyPaths;
	UILabel* _secondLabel;
	NSArray* _secondLabelVisibleConstraintsArray;
	UIColor* _fadedSecondLabelColor;
	UILabel* _labelForPositioning;
	_TVMonogramView* _monogramView;
	UIView* _backgroundColorView;
	_TVMonogramView* _selectingView;
	NSLayoutConstraint* _nameLabelFBConstraint;
	NSLayoutConstraint* _secondLabelFBConstraint;
	NSLayoutConstraint* _cellWidthConstraint;
	NSLayoutConstraint* _chickletToTitleSpacingConstraint;
	NSLayoutConstraint* _nameFirstBaselineConstraint;
	NSLayoutConstraint* _largeTextNameCenterYConstraint;
	NSArray* _regularConstraints;
	NSArray* _largeTextConstraints;
	UILabel* _nameLabel;

}

@property (nonatomic,retain) SFPersonImageView * imageView;                                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) SFCircleProgressView * circleProgressView;                                  //@synthesize circleProgressView=_circleProgressView - In the implementation block
@property (nonatomic,retain) id progressToken;                                                           //@synthesize progressToken=_progressToken - In the implementation block
@property (nonatomic,retain) NSArray * progressKeyPaths;                                                 //@synthesize progressKeyPaths=_progressKeyPaths - In the implementation block
@property (nonatomic,retain) UILabel * secondLabel;                                                      //@synthesize secondLabel=_secondLabel - In the implementation block
@property (nonatomic,retain) NSArray * secondLabelVisibleConstraintsArray;                               //@synthesize secondLabelVisibleConstraintsArray=_secondLabelVisibleConstraintsArray - In the implementation block
@property (nonatomic,retain) UIColor * fadedSecondLabelColor;                                            //@synthesize fadedSecondLabelColor=_fadedSecondLabelColor - In the implementation block
@property (nonatomic,retain) UILabel * labelForPositioning;                                              //@synthesize labelForPositioning=_labelForPositioning - In the implementation block
@property (nonatomic,retain) _TVMonogramView * monogramView;                                             //@synthesize monogramView=_monogramView - In the implementation block
@property (nonatomic,retain) UIView * backgroundColorView;                                               //@synthesize backgroundColorView=_backgroundColorView - In the implementation block
@property (assign,nonatomic,__weak) _TVMonogramView * selectingView;                                     //@synthesize selectingView=_selectingView - In the implementation block
@property (assign,nonatomic) BOOL pressIsAnimating;                                                      //@synthesize pressIsAnimating=_pressIsAnimating - In the implementation block
@property (assign,nonatomic) BOOL unpressOnEndAnimating;                                                 //@synthesize unpressOnEndAnimating=_unpressOnEndAnimating - In the implementation block
@property (assign,nonatomic) BOOL allowsFocus;                                                           //@synthesize allowsFocus=_allowsFocus - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nameLabelFBConstraint;                                 //@synthesize nameLabelFBConstraint=_nameLabelFBConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * secondLabelFBConstraint;                               //@synthesize secondLabelFBConstraint=_secondLabelFBConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * cellWidthConstraint;                                   //@synthesize cellWidthConstraint=_cellWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * chickletToTitleSpacingConstraint;                      //@synthesize chickletToTitleSpacingConstraint=_chickletToTitleSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nameFirstBaselineConstraint;                           //@synthesize nameFirstBaselineConstraint=_nameFirstBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * largeTextNameCenterYConstraint;                        //@synthesize largeTextNameCenterYConstraint=_largeTextNameCenterYConstraint - In the implementation block
@property (nonatomic,retain) NSArray * regularConstraints;                                               //@synthesize regularConstraints=_regularConstraints - In the implementation block
@property (nonatomic,retain) NSArray * largeTextConstraints;                                             //@synthesize largeTextConstraints=_largeTextConstraints - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic) BOOL darkStyleOnLegacyApp;                                                  //@synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp - In the implementation block
@property (nonatomic,retain) SFAirDropNode * person;                                                     //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                      //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long cellState;                                                        //@synthesize cellState=_cellState - In the implementation block
@property (assign,nonatomic) BOOL stateBeingRestored;                                                    //@synthesize stateBeingRestored=_stateBeingRestored - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                                                       //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SFPersonCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double activitySheetWidth;                                                  //@synthesize activitySheetWidth=_activitySheetWidth - In the implementation block
+(CGSize)_cachedPreferredItemSizeForString:(id)arg1 viewWidth:(double)arg2 sizeCategory:(id)arg3 ;
+(CGSize)_cachedPreferredItemSizeForViewWidth:(double)arg1 sizeCategory:(id)arg2 ;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setAllowsFocus:(BOOL)arg1 ;
-(BOOL)allowsFocus;
-(void)setBackgroundColorView:(UIView *)arg1 ;
-(void)setMonogramView:(_TVMonogramView *)arg1 ;
-(void)setCircleProgressView:(SFCircleProgressView *)arg1 ;
-(_TVMonogramView *)monogramView;
-(void)setSecondLabel:(UILabel *)arg1 ;
-(UILabel *)secondLabel;
-(void)setLabelForPositioning:(UILabel *)arg1 ;
-(UILabel *)labelForPositioning;
-(void)setRegularConstraints:(NSArray *)arg1 ;
-(void)setLargeTextConstraints:(NSArray *)arg1 ;
-(void)setSecondLabelVisibleConstraintsArray:(NSArray *)arg1 ;
-(NSArray *)regularConstraints;
-(void)prepareHapticsPreWarm:(BOOL)arg1 ;
-(void)setFadedSecondLabelColor:(UIColor *)arg1 ;
-(void)deactivateHaptics;
-(void)setCellState:(long long)arg1 ;
-(void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2 ;
-(void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2 ;
-(void)updatePersonIconView;
-(void)updateNameLabel;
-(void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2 ;
-(void)setCellState:(long long)arg1 animated:(BOOL)arg2 silent:(BOOL)arg3 ;
-(void)prepareHaptics;
-(void)setSecondLabelText:(id)arg1 withTextColor:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)fireHapticsForState:(long long)arg1 ;
-(UIColor *)fadedSecondLabelColor;
-(SFCircleProgressView *)circleProgressView;
-(long long)cellState;
-(NSArray *)secondLabelVisibleConstraintsArray;
-(void)handleKVOUpdateForPerson:(id)arg1 keyPath:(id)arg2 ;
-(void)handleKVOUpdateForProgress:(id)arg1 keyPath:(id)arg2 ;
-(void)_setLabelPositionsChangeY:(BOOL)arg1 ;
-(void)restoreCellStateFromFinalTransferState:(long long)arg1 ;
-(void)userDidSelect;
-(void)userDidCancel;
-(CGSize)calculatedContentSizeForSheetWidth:(double)arg1 sizeCategory:(id)arg2 ;
-(BOOL)stateBeingRestored;
-(void)setStateBeingRestored:(BOOL)arg1 ;
-(double)activitySheetWidth;
-(void)setActivitySheetWidth:(double)arg1 ;
-(id)progressToken;
-(void)setProgressToken:(id)arg1 ;
-(NSArray *)progressKeyPaths;
-(void)setProgressKeyPaths:(NSArray *)arg1 ;
-(UIView *)backgroundColorView;
-(BOOL)pressIsAnimating;
-(void)setPressIsAnimating:(BOOL)arg1 ;
-(BOOL)unpressOnEndAnimating;
-(void)setUnpressOnEndAnimating:(BOOL)arg1 ;
-(NSLayoutConstraint *)nameLabelFBConstraint;
-(void)setNameLabelFBConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)secondLabelFBConstraint;
-(void)setSecondLabelFBConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)cellWidthConstraint;
-(void)setCellWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)chickletToTitleSpacingConstraint;
-(void)setChickletToTitleSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)nameFirstBaselineConstraint;
-(void)setNameFirstBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)largeTextNameCenterYConstraint;
-(void)setLargeTextNameCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(NSArray *)largeTextConstraints;
-(_TVMonogramView *)selectingView;
-(void)_showPressState;
-(void)_clearPressState;
-(void)setSelectingView:(_TVMonogramView *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(NSObject*<SFPersonCollectionViewCellDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(SFPersonImageView *)imageView;
-(NSObject*<SFPersonCollectionViewCellDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(NSProgress *)progress;
-(void)setImageView:(SFPersonImageView *)arg1 ;
-(void)setPerson:(SFAirDropNode *)arg1 ;
-(SFAirDropNode *)person;
-(BOOL)darkStyleOnLegacyApp;
-(void)setDarkStyleOnLegacyApp:(BOOL)arg1 ;
@end

