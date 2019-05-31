/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVPlayerViewControllerDelegate <NSObject>
@optional
-(BOOL)playerViewControllerShouldDismiss:(id)arg1;
-(void)playerViewControllerWillBeginDismissalTransition:(id)arg1;
-(void)playerViewControllerDidEndDismissalTransition:(id)arg1;
-(void)playerViewController:(id)arg1 willPresentInterstitialTimeRange:(id)arg2;
-(void)playerViewController:(id)arg1 didPresentInterstitialTimeRange:(id)arg2;
-(void)playerViewController:(id)arg1 willResumePlaybackAfterUserNavigatedFromTime:(SCD_Struct_TV3)arg2 toTime:(SCD_Struct_TV3)arg3;
-(SCD_Struct_TV3*)playerViewController:(id)arg1 timeToSeekAfterUserNavigatedFromTime:(SCD_Struct_TV3)arg2 toTime:(SCD_Struct_TV3)arg3;
-(void)playerViewController:(id)arg1 didSelectMediaSelectionOption:(id)arg2 inMediaSelectionGroup:(id)arg3;
-(void)playerViewController:(id)arg1 didSelectExternalSubtitleOptionLanguage:(id)arg2;
-(void)skipToNextItemForPlayerViewController:(id)arg1;
-(void)skipToPreviousItemForPlayerViewController:(id)arg1;
-(BOOL)playerViewController:(id)arg1 shouldPresentContentProposal:(id)arg2;
-(void)playerViewController:(id)arg1 didAcceptContentProposal:(id)arg2;
-(void)playerViewController:(id)arg1 didRejectContentProposal:(id)arg2;
-(void)playerViewController:(id)arg1 willTransitionToVisibilityOfTransportBar:(BOOL)arg2 withAnimationCoordinator:(id)arg3;

@end

