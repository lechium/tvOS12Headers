//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKPreviewViewController.h"

@class NSLayoutConstraint, TVSUIConferenceRoomDisplaySmallView;

@interface TVSettingsCRDPreviewViewController : TSKPreviewViewController
{
    TVSUIConferenceRoomDisplaySmallView *_crdView;	// 8 = 0x8
    NSLayoutConstraint *_contentViewCenterXConstraint;	// 16 = 0x10
    NSLayoutConstraint *_contentViewCenterYConstraint;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000cbb64
- (id)_newCRDView;	// IMP=0x00000001000cba28
- (id)_crdView;	// IMP=0x00000001000cb9d8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000cb854
- (id)contentContainerSnapshot;	// IMP=0x00000001000cb7a0
- (void)setContentView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000cb564
- (void)viewDidLoad;	// IMP=0x00000001000cb470
- (void)dealloc;	// IMP=0x00000001000cb398
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000cb28c

@end

