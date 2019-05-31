/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UINavigationBarAugmentedTitleView.h>

@protocol _UINavigationBarTitleViewDataSource;
@class NSLayoutConstraint, _UINavigationBarTitleViewOverlayRects, UINavigationItem, NSArray, NSString;

@interface _UINavigationBarTitleView : UIView <_UINavigationBarAugmentedTitleView> {

	NSLayoutConstraint* _heightConstraint;
	_UINavigationBarTitleViewOverlayRects* _overlayRects;
	id<_UINavigationBarTitleViewDataSource> _dataSource;
	BOOL _underlayBarContent;
	BOOL _hideBackButton;
	BOOL _hideLeadingBarButtons;
	BOOL _hideStandardTitle;
	BOOL _hideTrailingBarButtons;
	UINavigationItem* _navigationItem;
	long long _titleLocation;
	double _height;
	double _backButtonMaximumWidth;

}

@property (nonatomic,__weak,readonly) UINavigationItem * navigationItem;                 //@synthesize navigationItem=_navigationItem - In the implementation block
@property (nonatomic,readonly) long long titleLocation;                                  //@synthesize titleLocation=_titleLocation - In the implementation block
@property (assign,nonatomic) BOOL underlayBarContent;                                    //@synthesize underlayBarContent=_underlayBarContent - In the implementation block
@property (assign,nonatomic) double height;                                              //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) double backButtonMaximumWidth;                              //@synthesize backButtonMaximumWidth=_backButtonMaximumWidth - In the implementation block
@property (assign,nonatomic) BOOL hideBackButton;                                        //@synthesize hideBackButton=_hideBackButton - In the implementation block
@property (assign,nonatomic) BOOL hideLeadingBarButtons;                                 //@synthesize hideLeadingBarButtons=_hideLeadingBarButtons - In the implementation block
@property (assign,nonatomic) BOOL hideStandardTitle;                                     //@synthesize hideStandardTitle=_hideStandardTitle - In the implementation block
@property (assign,nonatomic) BOOL hideTrailingBarButtons;                                //@synthesize hideTrailingBarButtons=_hideTrailingBarButtons - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contentOverlayRects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL _underlayNavigationBarContent; 
@property (nonatomic,readonly) double _navigationBarContentHeight; 
@property (nonatomic,readonly) double _navigationBarBackButtonMaximumWidth; 
@property (nonatomic,readonly) BOOL _hideNavigationBarBackButton; 
@property (nonatomic,readonly) BOOL _hideNavigationBarLeadingBarButtons; 
@property (nonatomic,readonly) BOOL _hideNavigationBarStandardTitle; 
@property (nonatomic,readonly) BOOL _hideNavigationBarTrailingBarButtons; 
@property (nonatomic,readonly) long long _preferredAlignment; 
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(double)backButtonMaximumWidth;
-(void)_setDataSource:(id)arg1 navigationItem:(id)arg2 titleLocation:(long long)arg3 ;
-(long long)_preferredContentSizeForSize:(long long)arg1 ;
-(void)_contentDidChange;
-(BOOL)_wantsTwoPartTransition;
-(void)_transitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)_performTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)_transitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(BOOL)_underlayNavigationBarContent;
-(double)_navigationBarContentHeight;
-(double)_navigationBarBackButtonMaximumWidth;
-(BOOL)_hideNavigationBarBackButton;
-(BOOL)_hideNavigationBarLeadingBarButtons;
-(BOOL)_hideNavigationBarStandardTitle;
-(BOOL)_hideNavigationBarTrailingBarButtons;
-(long long)_preferredAlignment;
-(long long)preferredContentSizeForSize:(long long)arg1 ;
-(void)contentDidChange;
-(void)transitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)performTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)transitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)setUnderlayBarContent:(BOOL)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setBackButtonMaximumWidth:(double)arg1 ;
-(void)setHideBackButton:(BOOL)arg1 ;
-(void)setHideLeadingBarButtons:(BOOL)arg1 ;
-(void)setHideStandardTitle:(BOOL)arg1 ;
-(void)setHideTrailingBarButtons:(BOOL)arg1 ;
-(NSArray *)contentOverlayRects;
-(void)preferredContentSizeDidChange;
-(UINavigationItem *)navigationItem;
-(long long)titleLocation;
-(BOOL)underlayBarContent;
-(double)height;
-(BOOL)hideBackButton;
-(BOOL)hideLeadingBarButtons;
-(BOOL)hideStandardTitle;
-(BOOL)hideTrailingBarButtons;
@end
