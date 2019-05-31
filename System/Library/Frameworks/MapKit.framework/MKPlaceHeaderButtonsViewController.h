/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>
#import <libobjc.A.dylib/MKStackingViewControllerFixedHeightAware.h>
#import <libobjc.A.dylib/MKETAProviderObserver.h>

@protocol _MKPlaceItem, GEOTransitLineItem, MKPlaceHeaderButtonsViewControllerDelegate;
@class MKPlaceSectionRowView, NSArray, MKPlaceHeaderButton, NSAttributedString, NSString, _MKPlaceActionButtonController;

@interface MKPlaceHeaderButtonsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, MKStackingViewControllerFixedHeightAware, MKETAProviderObserver> {

	MKPlaceSectionRowView* _buttonsContainerView;
	NSArray* _constraints;
	MKPlaceHeaderButton* _primaryButton;
	MKPlaceHeaderButton* _secondaryButton;
	MKPlaceHeaderButton* _tertiaryButton;
	NSAttributedString* _primaryAttributedString;
	NSString* _currentETAString;
	BOOL _resizableViewsDisabled;
	id<_MKPlaceItem> _placeItem;
	id<GEOTransitLineItem> _lineItem;
	id<MKPlaceHeaderButtonsViewControllerDelegate> _delegate;
	unsigned long long _primaryButtonType;
	_MKPlaceActionButtonController* _secondaryButtonController;
	_MKPlaceActionButtonController* _tertiaryButtonController;
	double _contentAlpha;

}

@property (nonatomic,readonly) id<_MKPlaceItem> placeItem;                                                //@synthesize placeItem=_placeItem - In the implementation block
@property (nonatomic,readonly) id<GEOTransitLineItem> lineItem;                                           //@synthesize lineItem=_lineItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceHeaderButtonsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long primaryButtonType;                                        //@synthesize primaryButtonType=_primaryButtonType - In the implementation block
@property (nonatomic,retain) _MKPlaceActionButtonController * secondaryButtonController;                  //@synthesize secondaryButtonController=_secondaryButtonController - In the implementation block
@property (nonatomic,retain) _MKPlaceActionButtonController * tertiaryButtonController;                   //@synthesize tertiaryButtonController=_tertiaryButtonController - In the implementation block
@property (assign,nonatomic) double contentAlpha;                                                         //@synthesize contentAlpha=_contentAlpha - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL resizableViewsDisabled;                                                 //@synthesize resizableViewsDisabled=_resizableViewsDisabled - In the implementation block
-(id)infoCardChildPossibleActions;
-(void)_contentSizeDidChange;
-(id<GEOTransitLineItem>)lineItem;
-(BOOL)resizableViewsDisabled;
-(void)setResizableViewsDisabled:(BOOL)arg1 ;
-(id)initWithLineItem:(id)arg1 ;
-(id)initWithPlaceItem:(id)arg1 ;
-(id<_MKPlaceItem>)placeItem;
-(void)ETAProviderUpdated:(id)arg1 ;
-(id)etaStringFor:(unsigned long long)arg1 travelTime:(double)arg2 ;
-(id)directionAttributedStringWithETAString;
-(id)rerouteAttributedString;
-(id)attributedStringWith:(id)arg1 ;
-(id)primaryAttributedString;
-(BOOL)shouldStackForButtons:(id)arg1 ;
-(void)setConstraints;
-(void)setPrimaryButtonType:(unsigned long long)arg1 ;
-(void)setupPrimaryButton;
-(void)primaryButtonSelected:(id)arg1 ;
-(id)updateButton:(id)arg1 withController:(id)arg2 ;
-(void)setTertiaryButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(void)setSecondaryButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(unsigned long long)primaryButtonType;
-(_MKPlaceActionButtonController *)secondaryButtonController;
-(_MKPlaceActionButtonController *)tertiaryButtonController;
-(double)contentAlpha;
-(void)setDelegate:(id<MKPlaceHeaderButtonsViewControllerDelegate>)arg1 ;
-(id<MKPlaceHeaderButtonsViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_commonInit;
-(void)setContentAlpha:(double)arg1 ;
@end

