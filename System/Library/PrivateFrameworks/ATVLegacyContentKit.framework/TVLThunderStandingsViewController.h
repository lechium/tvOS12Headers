/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/TVCollectionViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class UICollectionView, UIView, NSArray, UILabel, TVImageView, NSString, CAGradientLayer;

@interface TVLThunderStandingsViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, TVCollectionViewDelegate, UIScrollViewDelegate, ATVUpdatable> {

	UICollectionView* _collectionView;
	UIView* _collectionContainerView;
	NSArray* _sectionDefinitions;
	UILabel* _titleLabel;
	TVImageView* _brandingImageView;
	NSString* _brandingImageURLString;
	CAGradientLayer* _scrollGradient;
	unsigned long long _gradientState;
	NSArray* _sectionHeaderViews;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIView * collectionContainerView;               //@synthesize collectionContainerView=_collectionContainerView - In the implementation block
@property (nonatomic,retain) NSArray * sectionDefinitions;                   //@synthesize sectionDefinitions=_sectionDefinitions - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) TVImageView * brandingImageView;                //@synthesize brandingImageView=_brandingImageView - In the implementation block
@property (nonatomic,retain) NSString * brandingImageURLString;              //@synthesize brandingImageURLString=_brandingImageURLString - In the implementation block
@property (nonatomic,retain) CAGradientLayer * scrollGradient;               //@synthesize scrollGradient=_scrollGradient - In the implementation block
@property (assign,nonatomic) unsigned long long gradientState;               //@synthesize gradientState=_gradientState - In the implementation block
@property (nonatomic,retain) NSArray * sectionHeaderViews;                   //@synthesize sectionHeaderViews=_sectionHeaderViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)collectionContainerView;
-(void)setCollectionContainerView:(UIView *)arg1 ;
-(id)initWithPropertyListElement:(id)arg1 ;
-(void)didUpdateFeedElementRequiringUserInterfaceUpdate:(BOOL)arg1 previousElement:(id)arg2 ;
-(void)_updateWithDictionary:(id)arg1 ;
-(void)setBrandingImageView:(TVImageView *)arg1 ;
-(void)_addProxyToBrandingImage;
-(NSArray *)sectionHeaderViews;
-(void)setScrollGradient:(CAGradientLayer *)arg1 ;
-(CAGradientLayer *)scrollGradient;
-(TVImageView *)brandingImageView;
-(void)_setScrollEnabled:(BOOL)arg1 ;
-(NSArray *)sectionDefinitions;
-(id)_imageProxyForBrandingImage;
-(NSString *)brandingImageURLString;
-(void)setSectionDefinitions:(NSArray *)arg1 ;
-(void)setBrandingImageURLString:(NSString *)arg1 ;
-(void)setSectionHeaderViews:(NSArray *)arg1 ;
-(void)setGradientState:(unsigned long long)arg1 ;
-(unsigned long long)gradientState;
-(void)setTitle:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(UICollectionView *)collectionView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

