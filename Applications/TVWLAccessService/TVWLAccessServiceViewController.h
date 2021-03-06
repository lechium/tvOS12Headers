//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PBSViewServicePresenter.h"

@class NSString, WLKUIAccessViewController;

__attribute__((visibility("hidden")))
@interface TVWLAccessServiceViewController : UIViewController <PBSViewServicePresenter>
{
    WLKUIAccessViewController *_accessViewController;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x00000001000024d4
+ (id)_exportedInterface;	// IMP=0x00000001000023a4
- (void).cxx_destruct;	// IMP=0x0000000100002600
- (void)_menuPressed:(id)arg1;	// IMP=0x000000010000258c
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100002394
- (void)viewServiceUpdatePresentationWithOptions:(id)arg1;	// IMP=0x0000000100002390
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0000000100001fe0
- (void)viewDidLoad;	// IMP=0x0000000100001e8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

