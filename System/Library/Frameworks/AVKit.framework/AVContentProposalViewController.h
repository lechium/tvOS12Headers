/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol AVContentProposalViewControllerDelegate;
@class UIFocusGuide, AVContentProposal, AVPlayerViewController, NSDate, NSTimer, AVFocusProxyView, UITapGestureRecognizer, UILayoutGuide;

@interface AVContentProposalViewController : UIViewController {

	UIFocusGuide* _playerFocusGuide;
	AVContentProposal* _contentProposal;
	AVPlayerViewController* _playerViewController;
	NSDate* _dateOfAutomaticAcceptance;
	id<AVContentProposalViewControllerDelegate> _contentProposalViewControllerDelegate;
	NSTimer* _acceptanceTimer;
	AVFocusProxyView* _playerFocusProxyView;
	UITapGestureRecognizer* _selectPlayerGestureRecognizer;
	UITapGestureRecognizer* _menuGestureRecognizer;

}

@property (assign,nonatomic,__weak) id<AVContentProposalViewControllerDelegate> contentProposalViewControllerDelegate;              //@synthesize contentProposalViewControllerDelegate=_contentProposalViewControllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerViewController * playerViewController;                                                  //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) AVContentProposal * contentProposal;                                                                   //@synthesize contentProposal=_contentProposal - In the implementation block
@property (nonatomic,retain) NSTimer * acceptanceTimer;                                                                             //@synthesize acceptanceTimer=_acceptanceTimer - In the implementation block
@property (nonatomic,retain) AVFocusProxyView * playerFocusProxyView;                                                               //@synthesize playerFocusProxyView=_playerFocusProxyView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * selectPlayerGestureRecognizer;                                                //@synthesize selectPlayerGestureRecognizer=_selectPlayerGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * menuGestureRecognizer;                                                        //@synthesize menuGestureRecognizer=_menuGestureRecognizer - In the implementation block
@property (nonatomic,readonly) CGRect preferredPlayerViewFrame; 
@property (nonatomic,readonly) UILayoutGuide * playerLayoutGuide; 
@property (nonatomic,retain) NSDate * dateOfAutomaticAcceptance;                                                                    //@synthesize dateOfAutomaticAcceptance=_dateOfAutomaticAcceptance - In the implementation block
-(id)playerLayerView;
-(BOOL)isUserInteractionAllowed;
-(void)setDateOfAutomaticAcceptance:(NSDate *)arg1 ;
-(void)setContentProposal:(AVContentProposal *)arg1 ;
-(void)_addPlayerFocusShadowView;
-(id)playerFocusGuide;
-(void)setPlayerFocusGuide:(id)arg1 ;
-(UILayoutGuide *)playerLayoutGuide;
-(id)_dateMainContentWillEnd;
-(void)_ensureFocusProxyViewInstalled;
-(void)_didSelectPlayerView:(id)arg1 ;
-(void)_didPressMenuButton:(id)arg1 ;
-(void)_acceptanceTimerFired:(id)arg1 ;
-(void)autoAcceptProposal;
-(CGRect)preferredPlayerViewFrame;
-(void)dismissContentProposalForAction:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideProposalAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)acceptProposalAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)rejectProposalAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(AVContentProposal *)contentProposal;
-(NSDate *)dateOfAutomaticAcceptance;
-(id<AVContentProposalViewControllerDelegate>)contentProposalViewControllerDelegate;
-(void)setContentProposalViewControllerDelegate:(id<AVContentProposalViewControllerDelegate>)arg1 ;
-(NSTimer *)acceptanceTimer;
-(void)setAcceptanceTimer:(NSTimer *)arg1 ;
-(AVFocusProxyView *)playerFocusProxyView;
-(void)setPlayerFocusProxyView:(AVFocusProxyView *)arg1 ;
-(UITapGestureRecognizer *)selectPlayerGestureRecognizer;
-(void)setSelectPlayerGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)setMenuGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)menuGestureRecognizer;
-(void)setPlayerLayerView:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

