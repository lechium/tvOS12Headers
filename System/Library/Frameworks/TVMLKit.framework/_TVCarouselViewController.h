/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVMLKit/TVCarouselViewDataSource.h>
#import <TVMLKit/TVCarouselViewDelegate.h>
#import <TVMLKit/TVFocusDirectionCollectionViewCellDelegate.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class IKCollectionElement, TVCarouselView, NSString;

@interface _TVCarouselViewController : UIViewController <TVCarouselViewDataSource, TVCarouselViewDelegate, TVFocusDirectionCollectionViewCellDelegate, TVAppTemplateImpressionable> {

	TVCellMetrics _cellMetrics;
	IKCollectionElement* _collectionElement;
	TVCarouselView* _carouselView;
	BOOL _didAppear;
	BOOL _isFlowcaseAtTop;

}

@property (nonatomic,readonly) TVCellMetrics cellMetrics;              //@synthesize cellMetrics=_cellMetrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateLayout;
-(void)_cancelImpressionsUpdate;
-(TVCellMetrics)cellMetrics;
-(void)updateWithViewElement:(id)arg1 cellMetrics:(TVCellMetrics)arg2 ;
-(void)collectionViewCellDidUnfocus:(id)arg1 ;
-(void)collectionViewCellDidChangeFocusDirection:(id)arg1 ;
-(id)layeredImageContainerLayerWithinCollectionViewCell:(id)arg1 ;
-(void)_selectButtonAction:(id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(void)_updateAutoScrollInterval;
-(void)_updateImpressions;
-(void)_dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(unsigned long long)arg2 ;
-(void)_recordImpressionsForVisibleView;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselView:(id)arg1 didFocusItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselViewDidScroll:(id)arg1 ;
-(CGSize)viewSizeThatFits:(CGSize)arg1 ;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end
