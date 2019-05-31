/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol _UIRefreshControlHosting;
@class _UIRefreshControlContentView, UIColor, NSAttributedString;

@interface UIRefreshControl : UIControl {

	long long _style;
	_UIRefreshControlContentView* _contentView;
	double _refreshControlHeight;
	double _visibleHeight;
	double _snappingHeight;
	double _additionalTopInset;
	BOOL _insetsApplied;
	BOOL _adjustingInsets;
	UIEdgeInsets _appliedInsets;
	id<_UIRefreshControlHosting> _host;
	long long _refreshControlState;

}

@property (nonatomic,readonly) long long refreshControlState;                                                      //@synthesize refreshControlState=_refreshControlState - In the implementation block
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) double _refreshControlHeight; 
@property (nonatomic,readonly) double _snappingHeight; 
@property (nonatomic,readonly) double _visibleHeight; 
@property (nonatomic,readonly) BOOL _hostAdjustsContentOffset; 
@property (nonatomic,readonly) BOOL _areInsetsBeingApplied; 
@property (getter=_appliedInsets,nonatomic,readonly) UIEdgeInsets appliedInsets; 
@property (assign,setter=_setHost:,getter=_host,nonatomic,__weak) id<_UIRefreshControlHosting> _host; 
@property (getter=isRefreshing,nonatomic,readonly) BOOL refreshing; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
+(Class)_contentViewClassForStyle:(long long)arg1 ;
+(id)_defaultColor;
-(void)setFrame:(CGRect)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)sizeToFit;
-(long long)style;
-(void)_setAttributedTitle:(id)arg1 ;
-(id)_attributedTitle;
-(id)_contentView;
-(UIColor *)tintColor;
-(id)initWithStyle:(long long)arg1 ;
-(id)_tintColor;
-(void)_didScroll;
-(void)didMoveToSuperview;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)_scrollView;
-(void)_setTintColor:(id)arg1 ;
-(long long)refreshControlState;
-(void)_removeInsets;
-(double)_refreshControlHeight;
-(id<_UIRefreshControlHosting>)_host;
-(NSAttributedString *)attributedTitle;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)_updateSnappingHeight;
-(void)_update;
-(void)setRefreshControlState:(long long)arg1 ;
-(void)_resizeToFitContents;
-(BOOL)_areInsetsBeingApplied;
-(BOOL)_hostAdjustsContentOffset;
-(void)_removeInsetHeight:(double)arg1 ;
-(void)_addInsetHeight:(double)arg1 ;
-(double)revealedFraction;
-(long long)_recomputeNewState;
-(void)_updateHiddenStateIfNeeded;
-(void)_updateConcealingMask;
-(double)_stiffnessForVelocity:(double)arg1 ;
-(CGPoint)_originForContentOffset:(CGPoint)arg1 ;
-(double)_visibleHeightForContentOffset:(CGPoint)arg1 origin:(CGPoint)arg2 ;
-(void)_setVisibleHeight:(double)arg1 ;
-(double)_impactIntensityForVelocity:(double)arg1 ;
-(void)_setRefreshControlState:(long long)arg1 notify:(BOOL)arg2 ;
-(double)_visibleHeight;
-(void)_endRefreshingAnimated:(BOOL)arg1 ;
-(BOOL)_canTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)_addInsets;
-(BOOL)isRefreshing;
-(double)_snappingHeight;
-(BOOL)_isApplyingInsets;
-(UIEdgeInsets)_appliedInsets;
-(void)beginRefreshing;
-(void)endRefreshing;
-(double)_scrollViewHeight;
-(void)_setHost:(id)arg1 ;
@end

