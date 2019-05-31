/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableDictionary, _UINavigationBarLargeTitleView, UILabel, UIView, _UINavigationControllerRefreshControlHost;

@interface _UINavigationBarLargeTitleViewLayout : NSObject {

	NSMutableDictionary* _titleHeightCache;
	NSMutableDictionary* _restingHeightCache;
	double _cachedRestingHeight;
	BOOL _supportsTwoLines;
	BOOL _alignAccessoryViewToTitleBaseline;
	_UINavigationBarLargeTitleView* _contentView;
	long long _titleType;
	UILabel* _titleLabel;
	double _titleRestingHeight;
	UIView* _accessoryView;
	unsigned long long _accessoryViewHorizontalAlignment;
	_UINavigationControllerRefreshControlHost* _refreshControlHost;
	double _restingHeightOfRefreshControl;
	UIView* _refreshHostContainerView;
	NSDirectionalEdgeInsets _layoutMargins;

}

@property (nonatomic,retain) UIView * refreshHostContainerView;                                             //@synthesize refreshHostContainerView=_refreshHostContainerView - In the implementation block
@property (nonatomic,readonly) _UINavigationBarLargeTitleView * contentView;                                //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long titleType;                                                           //@synthesize titleType=_titleType - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) BOOL supportsTwoLines;                                                         //@synthesize supportsTwoLines=_supportsTwoLines - In the implementation block
@property (nonatomic,readonly) double titleRestingHeight;                                                   //@synthesize titleRestingHeight=_titleRestingHeight - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                                        //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) BOOL alignAccessoryViewToTitleBaseline;                                        //@synthesize alignAccessoryViewToTitleBaseline=_alignAccessoryViewToTitleBaseline - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryViewHorizontalAlignment;                           //@synthesize accessoryViewHorizontalAlignment=_accessoryViewHorizontalAlignment - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets layoutMargins;                                         //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (nonatomic,readonly) _UINavigationControllerRefreshControlHost * refreshControlHost;              //@synthesize refreshControlHost=_refreshControlHost - In the implementation block
@property (assign,nonatomic) double restingHeightOfRefreshControl;                                          //@synthesize restingHeightOfRefreshControl=_restingHeightOfRefreshControl - In the implementation block
-(_UINavigationBarLargeTitleView *)contentView;
-(UILabel *)titleLabel;
-(void)setLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(NSDirectionalEdgeInsets)layoutMargins;
-(void)invalidate;
-(_UINavigationControllerRefreshControlHost *)refreshControlHost;
-(void)cleanupAfterLayoutTransitionCompleted;
-(void)setContentHidden:(BOOL)arg1 ;
-(void)_enforceLayoutOrdering;
-(void)_invalidateTitleHeightCache;
-(double)titleRestingHeight;
-(CGRect)_contentLayoutBoundsUsingRestingTitleHeight:(BOOL)arg1 ;
-(CGRect)_contentLayoutBounds;
-(double)_textHeightForSize:(CGSize)arg1 titleType:(long long)arg2 ;
-(void)setRefreshHostContainerView:(UIView *)arg1 ;
-(void)layoutViewsWithOffset:(UIOffset)arg1 useRestingTitleHeight:(BOOL)arg2 ;
-(CGSize)_cachedTitleHeightSizeAndUpdateRestingSizeForWidth:(double)arg1 ;
-(double)_unobstructedHeightOfRefreshControlWithFrame:(CGRect)arg1 ;
-(void)setContentAlpha:(double)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSupportsTwoLines:(BOOL)arg1 ;
-(void)updateRestingTitleHeight;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)configureRefreshControlUsingHost:(id)arg1 ;
-(void)layoutViews;
-(CGSize)sizeFittingSize:(CGSize)arg1 titleType:(long long)arg2 ;
-(long long)titleType;
-(void)setTitleType:(long long)arg1 ;
-(BOOL)supportsTwoLines;
-(UIView *)accessoryView;
-(BOOL)alignAccessoryViewToTitleBaseline;
-(void)setAlignAccessoryViewToTitleBaseline:(BOOL)arg1 ;
-(unsigned long long)accessoryViewHorizontalAlignment;
-(void)setAccessoryViewHorizontalAlignment:(unsigned long long)arg1 ;
-(double)restingHeightOfRefreshControl;
-(void)setRestingHeightOfRefreshControl:(double)arg1 ;
-(UIView *)refreshHostContainerView;
@end

