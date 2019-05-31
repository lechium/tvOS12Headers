//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PBSBulletinPresenter.h"

@class GKNotificationBannerView, NSString, PBSBulletin;

@interface GKDashboardNotificationBannerViewController : UIViewController <PBSBulletinPresenter>
{
    PBSBulletin *_bulletin;	// 8 = 0x8
    GKNotificationBannerView *_bulletinView;	// 16 = 0x10
}

+ (id)_exportedInterface;	// IMP=0x0000000100003eb8
@property(retain, nonatomic) GKNotificationBannerView *bulletinView; // @synthesize bulletinView=_bulletinView;
@property(retain, nonatomic) PBSBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (void)dealloc;	// IMP=0x0000000100004714
- (void)viewDidLoad;	// IMP=0x000000010000469c
- (id)init;	// IMP=0x0000000100004668
- (void)bulletinServiceUpdateWithBulletin:(id)arg1;	// IMP=0x0000000100004664
- (void)bulletinServiceEndPresentationWithReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000043a8
- (void)bulletinServiceBeginPresentationWithBulletin:(id)arg1;	// IMP=0x0000000100003fbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
