/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class UIImageView, _MKUILabel, MKTransitIncidentItemCellBackgroundView, NSLayoutConstraint, UIButton;

@interface MKTransitItemIncidentCell : MKCustomSeparatorTableViewCell {

	UIImageView* _incidentIconImageView;
	_MKUILabel* _titleLabel;
	_MKUILabel* _summaryLabel;
	_MKUILabel* _lastUpdatedLabel;
	MKTransitIncidentItemCellBackgroundView* _backgroundView;
	BOOL _incidentIsBlocking;
	NSLayoutConstraint* _titleLabelToTopConstraint;
	NSLayoutConstraint* _summaryToTitleConstraint;
	NSLayoutConstraint* _lastUpdatedToSummaryConstraint;
	NSLayoutConstraint* _titleToButtonConstraint;
	NSLayoutConstraint* _titleToTrailingConstraint;
	NSLayoutConstraint* _bottomToBackgroundConstraint;
	NSLayoutConstraint* _bottomToIconImageConstraint;
	NSLayoutConstraint* _bottomToUpdatedLabelConstraint;
	NSLayoutConstraint* _bottomToSummaryLabelConstraint;
	NSLayoutConstraint* _bottomToTitleLabelConstraint;
	BOOL _showMoreDetailsButton;
	BOOL _padBottom;
	UIButton* _moreDetailsButton;

}

@property (assign,getter=isShowingMoreDetailsButton,nonatomic) BOOL showMoreDetailsButton;              //@synthesize showMoreDetailsButton=_showMoreDetailsButton - In the implementation block
@property (nonatomic,readonly) UIButton * moreDetailsButton;                                            //@synthesize moreDetailsButton=_moreDetailsButton - In the implementation block
@property (assign,nonatomic) long long position; 
@property (assign,nonatomic) BOOL padBottom;                                                            //@synthesize padBottom=_padBottom - In the implementation block
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;
-(void)setLeadingSeparatorInset:(double)arg1 ;
-(void)setTrailingSeparatorInset:(double)arg1 ;
-(void)setPadBottom:(BOOL)arg1 ;
-(void)_updateBottomConstraints;
-(void)setShowMoreDetailsButton:(BOOL)arg1 ;
-(id)_blockingImage;
-(id)_nonBlockingImage;
-(BOOL)isShowingMoreDetailsButton;
-(UIButton *)moreDetailsButton;
-(BOOL)padBottom;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

