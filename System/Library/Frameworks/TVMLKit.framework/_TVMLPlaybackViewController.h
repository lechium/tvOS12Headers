/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPPlaybackViewController.h>

@class UIViewController, _TVMLPlayer, TVPMusicContextMenuData;

@interface _TVMLPlaybackViewController : TVPPlaybackViewController {

	UIViewController* _overlayViewController;
	BOOL _viewDidAppear;
	BOOL _interactiveOverlayDismissable;
	_TVMLPlayer* _tvmlPlayer;
	UIViewController* _interactiveOverlayViewController;
	TVPMusicContextMenuData* _contextMenuData;

}

@property (nonatomic,readonly) _TVMLPlayer * tvmlPlayer;                                                             //@synthesize tvmlPlayer=_tvmlPlayer - In the implementation block
@property (assign,getter=isInteractiveOverlayDismissable,nonatomic) BOOL interactiveOverlayDismissable;              //@synthesize interactiveOverlayDismissable=_interactiveOverlayDismissable - In the implementation block
@property (nonatomic,retain) UIViewController * overlayViewController;                                               //@synthesize overlayViewController=_overlayViewController - In the implementation block
@property (nonatomic,retain) UIViewController * interactiveOverlayViewController;                                    //@synthesize interactiveOverlayViewController=_interactiveOverlayViewController - In the implementation block
@property (nonatomic,retain) TVPMusicContextMenuData * contextMenuData;                                              //@synthesize contextMenuData=_contextMenuData - In the implementation block
-(_TVMLPlayer *)tvmlPlayer;
-(id)initWithTVMLPlayer:(id)arg1 ;
-(void)_transportBarVisiblityChanged:(id)arg1 ;
-(void)_updateInteractiveOverlayDismissableState;
-(void)setInteractiveOverlayViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dismissPlayerFromInteractiveOverlay;
-(void)_presentInteractiveOverlay:(BOOL)arg1 ;
-(void)_navigationControllerDidShowViewController:(id)arg1 ;
-(UIViewController *)interactiveOverlayViewController;
-(BOOL)isInteractiveOverlayDismissable;
-(void)setOverlayViewController:(UIViewController *)arg1 ;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1 ;
-(void)setInteractiveOverlayViewController:(UIViewController *)arg1 ;
-(void)contextMenuForMediaItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_currentChildViewControllerWillChangeTo:(id)arg1 ;
-(void)_currentChildViewControllerDidChangeFrom:(id)arg1 ;
-(UIViewController *)overlayViewController;
-(TVPMusicContextMenuData *)contextMenuData;
-(void)setContextMenuData:(TVPMusicContextMenuData *)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)_navigationControllerWillShowViewController:(id)arg1 ;
@end

