/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVMLKit/_TVPlaybackViewControllerDelegate.h>
#import <TVMLKit/TVAuxiliaryViewSelecting.h>

@class IKMediaContentElement, _TVPlayer, UICollectionReusableView, UIViewController, _UIFloatingContentView, UIView, NSString;

@interface _TVInlinePlayerView : UIView <_TVPlaybackViewControllerDelegate, TVAuxiliaryViewSelecting> {

	IKMediaContentElement* _mediaContentElement;
	long long _playbackMode;
	long long _audioMode;
	_TVPlayer* _appPlayer;
	UICollectionReusableView* _containingCell;
	UIViewController* _hostViewController;
	UIViewController* _playerViewController;
	CGRect _hostedPlayerViewFrame;
	BOOL _playbackEnabled;
	int _playbackState;
	_UIFloatingContentView* _floatingView;
	UIView* _staticView;
	BOOL _usesFocusedState;
	BOOL _playerViewEnabled;
	UIView* _imageView;
	UIView* _playerView;

}

@property (nonatomic,__weak,readonly) UIViewController * hostViewController; 
@property (nonatomic,readonly) long long playbackMode; 
@property (nonatomic,readonly) long long audioMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect _playerViewFrame; 
@property (nonatomic,retain) UIView * imageView;                                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * playerView;                                         //@synthesize playerView=_playerView - In the implementation block
@property (assign,nonatomic) BOOL usesFocusedState;                                       //@synthesize usesFocusedState=_usesFocusedState - In the implementation block
@property (assign,nonatomic) BOOL playerViewEnabled;                                      //@synthesize playerViewEnabled=_playerViewEnabled - In the implementation block
+(id)_makePlayerViewControllerWithPlayer:(id)arg1 ;
-(long long)playbackMode;
-(void)_playbackError:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(id)playbackViewController:(id)arg1 customAnimatorForNavigationControllerOperation:(long long)arg2 ;
-(void)viewWillAppearForPlaybackViewController:(id)arg1 ;
-(void)viewDidAppearForPlaybackViewController:(id)arg1 ;
-(void)viewWillDisappearForPlaybackViewController:(id)arg1 ;
-(void)viewDidDisappearForPlaybackViewController:(id)arg1 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)_controller_dealloc;
-(void)_controller_viewWillMoveToWindow:(id)arg1 andSuperView:(id)arg2 ;
-(void)_controller_viewDidMoveToWindow;
-(UIView *)playerView;
-(BOOL)playerViewEnabled;
-(void)setPlayerView:(UIView *)arg1 ;
-(void)setPlayerViewEnabled:(BOOL)arg1 ;
-(void)setUsesFocusedState:(BOOL)arg1 ;
-(void)setFocusedState:(BOOL)arg1 ;
-(CGRect)_playerViewFrame;
-(BOOL)usesFocusedState;
-(void)_play;
-(void)_hostPlayer:(BOOL)arg1 ;
-(void)_schedule;
-(BOOL)_canHostPlayer;
-(void)_containingCellDidDisplay:(BOOL)arg1 ;
-(void)_containingCellDidFocus:(BOOL)arg1 ;
-(BOOL)_isPlayerHosted;
-(void)_playerWillGetPresented:(id)arg1 ;
-(long long)audioMode;
-(UIViewController *)hostViewController;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)imageView;
-(void)didMoveToWindow;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_stop;
-(void)setImageView:(UIView *)arg1 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(void)setFocusDirection:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(CGPoint)focusDirection;
@end
