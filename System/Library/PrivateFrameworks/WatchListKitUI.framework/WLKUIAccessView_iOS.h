/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKitUI/WatchListKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TVCarouselViewDataSource.h>

@class NSArray, UILayoutGuide, UIStackView, UILabel, UIScrollView, UIButton, TVCarouselView, UIView, NSString;

@interface WLKUIAccessView_iOS : UIView <TVCarouselViewDataSource> {

	NSArray* _apps;
	UILayoutGuide* _titlePlacementGuide;
	UIStackView* _scrollStack;
	UILabel* _titleLabel;
	UIScrollView* _bodyScroll;
	UILabel* _bodyLabel;
	UIStackView* _logoStack;
	UIStackView* _bottomStack;
	UIButton* _allowButton;
	UIButton* _disallowButton;
	UIButton* _nackButton;
	UILabel* _privacyLabel;
	UIButton* _seeAllButton;
	TVCarouselView* _carouselView;
	BOOL _didLayout;
	UIView* _privacyView;

}

@property (nonatomic,retain) UIView * privacyView;                  //@synthesize privacyView=_privacyView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)iconSize;
-(id)_buildCarousel;
-(id)_buildLogoStack;
-(id)_imageViewForIndex:(unsigned long long)arg1 ;
-(id)initWithApps:(id)arg1 ;
-(id)allowButton;
-(id)disallowButton;
-(id)seeAllButton;
-(id)nackButton;
-(id)bodyScroll;
-(void)showNackScreen;
-(UIView *)privacyView;
-(void)setPrivacyView:(UIView *)arg1 ;
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setBody:(id)arg1 ;
-(void)setFooter:(id)arg1 ;
@end

