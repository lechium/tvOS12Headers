//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class TVAirPlayInfoSession, TVAirPlayPINViewController, TVAirPlayPresentationSession, TVAirPlayPresentationViewController, TVAirPlayURLSession, UIAlertController, _TVAirPlayVideoPlayerViewController;

@interface TVAirPlayMediaViewController : UIViewController
{
    _Bool _dismissing;	// 8 = 0x8
    TVAirPlayInfoSession *_pinInfoSession;	// 16 = 0x10
    TVAirPlayInfoSession *_dialogInfoSession;	// 24 = 0x18
    TVAirPlayPresentationSession *_presentationSession;	// 32 = 0x20
    TVAirPlayURLSession *_videoPlaybackSession;	// 40 = 0x28
    id <TVAirPlayMediaViewControllerDelegate> _delegate;	// 48 = 0x30
    TVAirPlayPINViewController *_pinViewController;	// 56 = 0x38
    UIAlertController *_dialogViewController;	// 64 = 0x40
    _TVAirPlayVideoPlayerViewController *_videoPlayerViewController;	// 72 = 0x48
    TVAirPlayPresentationViewController *_presentationViewController;	// 80 = 0x50
}

+ (id)_remoteViewControllerInterface;	// IMP=0x000000010001ab5c
+ (id)_exportedInterface;	// IMP=0x000000010001aa40
@property(retain, nonatomic) TVAirPlayPresentationViewController *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
@property(retain, nonatomic) _TVAirPlayVideoPlayerViewController *videoPlayerViewController; // @synthesize videoPlayerViewController=_videoPlayerViewController;
@property(retain, nonatomic) UIAlertController *dialogViewController; // @synthesize dialogViewController=_dialogViewController;
@property(retain, nonatomic) TVAirPlayPINViewController *pinViewController; // @synthesize pinViewController=_pinViewController;
@property(nonatomic) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(nonatomic) __weak id <TVAirPlayMediaViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TVAirPlayURLSession *videoPlaybackSession; // @synthesize videoPlaybackSession=_videoPlaybackSession;
@property(retain, nonatomic) TVAirPlayPresentationSession *presentationSession; // @synthesize presentationSession=_presentationSession;
@property(retain, nonatomic) TVAirPlayInfoSession *dialogInfoSession; // @synthesize dialogInfoSession=_dialogInfoSession;
@property(retain, nonatomic) TVAirPlayInfoSession *pinInfoSession; // @synthesize pinInfoSession=_pinInfoSession;
- (void).cxx_destruct;	// IMP=0x000000010001b270
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2;	// IMP=0x000000010001ab78
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a718
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x000000010001a5b0
- (void)dismiss;	// IMP=0x000000010001a4d0
- (id)preferredFocusEnvironments;	// IMP=0x0000000100019bbc

@end
