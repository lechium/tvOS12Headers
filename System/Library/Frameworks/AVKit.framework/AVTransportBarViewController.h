/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class AVNowPlayingTransportBar, AVPlayerViewController, NSMutableDictionary, UIView;

@interface AVTransportBarViewController : UIViewController {

	AVNowPlayingTransportBar* _transportBar;
	double _availableFraction;
	AVPlayerViewController* _playerViewController;
	NSMutableDictionary* _animationBlocks;
	NSMutableDictionary* _animationCompletionBlocks;

}

@property (nonatomic,readonly) AVNowPlayingTransportBar * transportBar;                          //@synthesize transportBar=_transportBar - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerViewController * playerViewController;               //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * animationBlocks;                            //@synthesize animationBlocks=_animationBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * animationCompletionBlocks;                  //@synthesize animationCompletionBlocks=_animationCompletionBlocks - In the implementation block
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double elapsedTime; 
@property (getter=isTransportBarHidden,nonatomic,readonly) BOOL transportBarHidden; 
@property (nonatomic,readonly) UIView * transportBarView; 
@property (assign,nonatomic) double availableFraction;                                           //@synthesize availableFraction=_availableFraction - In the implementation block
-(void)setElapsedTime:(double)arg1 ;
-(void)setAvailableFraction:(double)arg1 ;
-(double)availableFraction;
-(BOOL)isTransportBarHidden;
-(NSMutableDictionary *)animationBlocks;
-(NSMutableDictionary *)animationCompletionBlocks;
-(void)addActionsForTransportBarAnimation:(long long)arg1 animating:(BOOL)arg2 ;
-(void)callCompletionBlocksForTransportBarAnimation:(long long)arg1 finished:(BOOL)arg2 ;
-(AVPlayerViewController *)playerViewController;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(UIView *)transportBarView;
-(AVNowPlayingTransportBar *)transportBar;
-(void)setElapsedTime:(double)arg1 animated:(BOOL)arg2 ;
-(void)setTransportBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)addCoordinatedTransportBarAnimation:(long long)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAvailableFraction:(double)arg1 animated:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(double)elapsedTime;
@end

