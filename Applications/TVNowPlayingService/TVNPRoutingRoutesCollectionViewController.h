//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "TVNPRoutingRoutesCollectionViewLayoutDelegate.h"

@class NSObject<TVNPRoutingController>, NSString, TVNPRoute, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface TVNPRoutingRoutesCollectionViewController : UICollectionViewController <TVNPRoutingRoutesCollectionViewLayoutDelegate>
{
    _Bool _observingChanges;	// 8 = 0x8
    NSObject<TVNPRoutingController> *_routingController;	// 16 = 0x10
    TVNPRoute *_focusedRoute;	// 24 = 0x18
    id <TVNPRoutingRoutesCollectionViewControllerDelegate> _delegate;	// 32 = 0x20
    TVNPRoute *_routeForVolume;	// 40 = 0x28
    UILongPressGestureRecognizer *_longPressRecognizer;	// 48 = 0x30
    UITapGestureRecognizer *_menuRecognizer;	// 56 = 0x38
    UITapGestureRecognizer *_selectRecognizer;	// 64 = 0x40
}

@property(retain, nonatomic) UITapGestureRecognizer *selectRecognizer; // @synthesize selectRecognizer=_selectRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) TVNPRoute *routeForVolume; // @synthesize routeForVolume=_routeForVolume;
@property(nonatomic) _Bool observingChanges; // @synthesize observingChanges=_observingChanges;
@property(nonatomic) __weak id <TVNPRoutingRoutesCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TVNPRoute *focusedRoute; // @synthesize focusedRoute=_focusedRoute;
@property(readonly, nonatomic) NSObject<TVNPRoutingController> *routingController; // @synthesize routingController=_routingController;
- (void).cxx_destruct;	// IMP=0x0000000100016d1c
- (void)_cleanupRouteForVolumeIfNeeded;	// IMP=0x0000000100016b18
- (id)_gradientMask;	// IMP=0x00000001000166d8
- (void)handleEndVolumeControl:(id)arg1;	// IMP=0x0000000100016444
- (void)longPressSelect:(id)arg1;	// IMP=0x0000000100016388
- (id)indexPathForVolumeSliderInCollectionView:(id)arg1 layout:(id)arg2;	// IMP=0x000000010001628c
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x0000000100016250
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000100016170
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000100016154
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010001602c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100015b2c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000159f0
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100015998
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100015990
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000156b4
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100015470
- (void)viewDidLoad;	// IMP=0x0000000100015040
- (void)dealloc;	// IMP=0x0000000100014ff0
- (id)initWithCollectionViewLayout:(id)arg1 routingController:(id)arg2;	// IMP=0x0000000100014f44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
