//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVApplicationController.h"

#import "MTAppController.h"
#import "TVApplicationControllerDelegate.h"
#import "TVInterfaceCreating.h"
#import "UINavigationControllerDelegate.h"
#import "UITabBarControllerDelegate.h"

@class MTTVListenNowViewController, MTTVPodcastPlaybackHostControllerViewController, MTTVPodcastsAndStationsViewController, NSString, UINavigationController, UITabBarController;

@interface MTTVApplicationController : TVApplicationController <TVApplicationControllerDelegate, TVInterfaceCreating, UINavigationControllerDelegate, UITabBarControllerDelegate, MTAppController>
{
    _Bool _tabBarLoaded;	// 8 = 0x8
    MTTVListenNowViewController *_listenNowViewController;	// 16 = 0x10
    UINavigationController *_podcastsNavigationController;	// 24 = 0x18
    MTTVPodcastsAndStationsViewController *_podcastsAndStationsViewController;	// 32 = 0x20
    MTTVPodcastPlaybackHostControllerViewController *_nowPlayingController;	// 40 = 0x28
    id <UITabBarControllerDelegate> _originalTabBarDelegate;	// 48 = 0x30
}

+ (id)alertControllerForError:(long long)arg1;	// IMP=0x0000000100162e00
@property(nonatomic) __weak id <UITabBarControllerDelegate> originalTabBarDelegate; // @synthesize originalTabBarDelegate=_originalTabBarDelegate;
@property(retain, nonatomic) MTTVPodcastPlaybackHostControllerViewController *nowPlayingController; // @synthesize nowPlayingController=_nowPlayingController;
@property(retain, nonatomic) MTTVPodcastsAndStationsViewController *podcastsAndStationsViewController; // @synthesize podcastsAndStationsViewController=_podcastsAndStationsViewController;
@property(retain, nonatomic) UINavigationController *podcastsNavigationController; // @synthesize podcastsNavigationController=_podcastsNavigationController;
@property(retain, nonatomic) MTTVListenNowViewController *listenNowViewController; // @synthesize listenNowViewController=_listenNowViewController;
@property(nonatomic, getter=isTabBarLoaded) _Bool tabBarLoaded; // @synthesize tabBarLoaded=_tabBarLoaded;
- (void).cxx_destruct;	// IMP=0x000000010016323c
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;	// IMP=0x0000000100162cc4
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;	// IMP=0x0000000100162bdc
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100162bd0
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100162b04
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001001629dc
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x00000001001628d0
- (void)updateUnplayedBadgeCount;	// IMP=0x00000001001628cc
- (void)presentPodcast:(id)arg1 episode:(id)arg2 episodeNotAvailable:(_Bool)arg3 podcastTab:(unsigned long long)arg4 startPlayback:(_Bool)arg5 animated:(_Bool)arg6;	// IMP=0x0000000100162448
- (void)presentPodcast:(id)arg1 episode:(id)arg2 podcastTab:(unsigned long long)arg3 startPlayback:(_Bool)arg4 animated:(_Bool)arg5;	// IMP=0x00000001001623d4
- (void)presentStation:(id)arg1 new:(_Bool)arg2;	// IMP=0x00000001001623d0
- (void)selectSearchTabAndFocusSearchField;	// IMP=0x0000000100162314
- (void)selectFeaturedTabAndPopToRoot:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001622d4
- (void)selectFeaturedTab;	// IMP=0x00000001001622bc
- (void)selectMyPodcastsTabAndPopToRoot:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010016227c
- (void)selectMyPodcastsTab;	// IMP=0x0000000100162264
- (_Bool)isMyPodcastsTabSelected;	// IMP=0x0000000100162210
- (void)selectUnplayedTabAndPopToRoot:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001621d4
- (void)selectUnplayedTab;	// IMP=0x00000001001621bc
- (_Bool)isUnplayedTabSelected;	// IMP=0x0000000100162168
- (void)dismissNowPlayingAnimated:(_Bool)arg1;	// IMP=0x00000001001620c0
- (void)presentNowPlayingAnimated:(_Bool)arg1;	// IMP=0x0000000100161ed4
- (void)showDownloadsControllerAnimated:(_Bool)arg1;	// IMP=0x0000000100161ed0
- (void)dismissSearchOverlayController;	// IMP=0x0000000100161ecc
- (void)showSearchControllerWithSearchText:(id)arg1;	// IMP=0x0000000100161eb8
- (void)openStoreURL:(id)arg1;	// IMP=0x0000000100161d28
- (void)handlePodcastsUrlScheme:(id)arg1;	// IMP=0x0000000100161d14
- (void)handleiTMSUrlScheme:(id)arg1;	// IMP=0x0000000100161d00
- (void)_configureTabBarOnFirstLoad;	// IMP=0x0000000100161904
- (void)_playPauseButtonAction:(id)arg1;	// IMP=0x000000010016186c
- (void)_showNowPlaying;	// IMP=0x0000000100161758
- (void)_hideNowPlaying;	// IMP=0x0000000100161650
- (_Bool)_isNowPlayingTabVisible;	// IMP=0x0000000100161474
- (_Bool)_isNowPlayingTabSelected;	// IMP=0x0000000100161420
- (id)_menuItemElements;	// IMP=0x00000001001613c4
- (id)_tabIdentifierForIndex:(unsigned long long)arg1;	// IMP=0x00000001001612f4
- (unsigned long long)_tabIndexForIdentifier:(id)arg1;	// IMP=0x00000001001610c8
- (id)_selectedTabIdentifier;	// IMP=0x0000000100161064
- (id)_selectTabWithIdentifier:(id)arg1 popToRoot:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100160ea0
- (id)_selectTabWithIdentifier:(id)arg1;	// IMP=0x0000000100160e88
- (void)updateNowPlayingTabVisibility;	// IMP=0x0000000100160e44
@property(readonly, nonatomic) UINavigationController *rootNavController;
@property(readonly, nonatomic) UINavigationController *rootViewController;
@property(readonly, nonatomic) UITabBarController *tabBarController;
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;	// IMP=0x00000001001608b8
- (id)initWithContext:(id)arg1 window:(id)arg2;	// IMP=0x000000010016066c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
