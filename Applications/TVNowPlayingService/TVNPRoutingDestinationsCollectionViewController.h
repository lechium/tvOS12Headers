//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "PBSBulletinServiceDelegate.h"

@class NSObject<OS_dispatch_queue>, NSObject<TVNPRoutingController>, NSString, PBSAssertion, PBSBulletin, TVNPRoutingDestination;

@interface TVNPRoutingDestinationsCollectionViewController : UICollectionViewController <PBSBulletinServiceDelegate>
{
    _Bool _volumeEditingInProgress;	// 8 = 0x8
    _Bool _shouldFocusInitialIndex;	// 9 = 0x9
    _Bool _observingChanges;	// 10 = 0xa
    _Bool _initiatedByPicker;	// 11 = 0xb
    NSObject<TVNPRoutingController> *_routingController;	// 16 = 0x10
    id <TVNPRoutingDestinationsCollectionViewControllerDelegate> _viewControllerDelegate;	// 24 = 0x18
    PBSAssertion *_volumeAssertion;	// 32 = 0x20
    unsigned long long _initialFocusIndex;	// 40 = 0x28
    TVNPRoutingDestination *_destinationForVolume;	// 48 = 0x30
    PBSBulletin *_volumeBulletin;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_volumeUpdateQueue;	// 64 = 0x40
    TVNPRoutingDestination *_connectingRoutingDestination;	// 72 = 0x48
    CDUnknownBlockType _initialUIDProvider;	// 80 = 0x50
}

@property(copy, nonatomic) CDUnknownBlockType initialUIDProvider; // @synthesize initialUIDProvider=_initialUIDProvider;
@property(retain, nonatomic) TVNPRoutingDestination *connectingRoutingDestination; // @synthesize connectingRoutingDestination=_connectingRoutingDestination;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeUpdateQueue; // @synthesize volumeUpdateQueue=_volumeUpdateQueue;
@property(retain, nonatomic) PBSBulletin *volumeBulletin; // @synthesize volumeBulletin=_volumeBulletin;
@property(retain, nonatomic) TVNPRoutingDestination *destinationForVolume; // @synthesize destinationForVolume=_destinationForVolume;
@property(readonly, nonatomic) _Bool initiatedByPicker; // @synthesize initiatedByPicker=_initiatedByPicker;
@property(nonatomic) _Bool observingChanges; // @synthesize observingChanges=_observingChanges;
@property(readonly, nonatomic) unsigned long long initialFocusIndex; // @synthesize initialFocusIndex=_initialFocusIndex;
@property(readonly, nonatomic) _Bool shouldFocusInitialIndex; // @synthesize shouldFocusInitialIndex=_shouldFocusInitialIndex;
@property(readonly, nonatomic) PBSAssertion *volumeAssertion; // @synthesize volumeAssertion=_volumeAssertion;
@property(nonatomic) _Bool volumeEditingInProgress; // @synthesize volumeEditingInProgress=_volumeEditingInProgress;
@property(nonatomic) __weak id <TVNPRoutingDestinationsCollectionViewControllerDelegate> viewControllerDelegate; // @synthesize viewControllerDelegate=_viewControllerDelegate;
@property(readonly, nonatomic) NSObject<TVNPRoutingController> *routingController; // @synthesize routingController=_routingController;
- (void).cxx_destruct;	// IMP=0x0000000100006a24
- (id)_indexPathForCurrentDestination;	// IMP=0x00000001000067e8
- (void)_presentVolumeBulletinForDestination:(id)arg1;	// IMP=0x0000000100006110
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x0000000100006004
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000100005ff8
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100005ab0
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x0000000100005a1c
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000100005758
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000055d8
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100005580
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100005578
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100005138
- (_Bool)_ignoreVolumeChangesWhilePendingSelection;	// IMP=0x0000000100004ff4
- (void)_showConnectionFailedAlertControllerForRoutingDestination:(id)arg1;	// IMP=0x0000000100004dac
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100004870
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000047dc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100004414
- (void)viewDidLoad;	// IMP=0x00000001000042b4
- (void)dealloc;	// IMP=0x00000001000041fc
- (void)handleVolumeDown;	// IMP=0x0000000100003fdc
- (void)handleVolumeUp;	// IMP=0x0000000100003dbc
- (id)initWithCollectionViewLayout:(id)arg1 routingController:(id)arg2 options:(id)arg3 initialUIDProvider:(CDUnknownBlockType)arg4;	// IMP=0x0000000100003bc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

