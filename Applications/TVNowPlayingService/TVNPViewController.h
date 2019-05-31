//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PBSViewServicePresenter.h"

@class NSString, TVNPMediaRemoteObserver, TVPMusicNowPlayingViewController, UITapGestureRecognizer, UIView;

@interface TVNPViewController : UIViewController <PBSViewServicePresenter>
{
    TVPMusicNowPlayingViewController *_musicViewController;	// 8 = 0x8
    TVNPMediaRemoteObserver *_mediaRemoteObserver;	// 16 = 0x10
    UITapGestureRecognizer *_menuGestureRecognizer;	// 24 = 0x18
    UIView *_nowPlayingWallPaper;	// 32 = 0x20
}

+ (id)_remoteViewControllerInterface;	// IMP=0x000000010001dc54
+ (id)_exportedInterface;	// IMP=0x000000010001db38
@property(retain, nonatomic) UIView *nowPlayingWallPaper; // @synthesize nowPlayingWallPaper=_nowPlayingWallPaper;
@property(retain, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(retain, nonatomic) TVNPMediaRemoteObserver *mediaRemoteObserver; // @synthesize mediaRemoteObserver=_mediaRemoteObserver;
@property(retain, nonatomic) TVPMusicNowPlayingViewController *musicViewController; // @synthesize musicViewController=_musicViewController;
- (void).cxx_destruct;	// IMP=0x000000010001dd44
- (void)_menuPressed:(id)arg1;	// IMP=0x000000010001dc70
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d7dc
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x000000010001d0e8
- (void)viewDidLoad;	// IMP=0x000000010001cf94
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010001cebc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

