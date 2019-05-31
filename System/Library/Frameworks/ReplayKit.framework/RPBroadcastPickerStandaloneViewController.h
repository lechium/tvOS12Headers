/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/RPSystemBroadcastPickerViewController.h>

@protocol RPSystemBroadcastPickerViewControllerDelegate;
@class RPModalPresentationWindow;

@interface RPBroadcastPickerStandaloneViewController : RPSystemBroadcastPickerViewController {

	RPModalPresentationWindow* _presentationWindow;
	id<RPSystemBroadcastPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RPSystemBroadcastPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)viewControllerDidFinish;
-(void)dismissAfter:(double)arg1 ;
-(void)presentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<RPSystemBroadcastPickerViewControllerDelegate>)arg1 ;
-(id<RPSystemBroadcastPickerViewControllerDelegate>)delegate;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end
