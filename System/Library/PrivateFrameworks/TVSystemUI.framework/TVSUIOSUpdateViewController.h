/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class TVSUIOSUpdateSlowRebootView, TVSUIOSUpdateView;

@interface TVSUIOSUpdateViewController : UIViewController {

	TVSUIOSUpdateSlowRebootView* _rebootView;
	TVSUIOSUpdateView* _progressView;

}
-(void)setProgressPercent:(float)arg1 ;
-(void)showProgressView;
-(void)showSlowUpdateViewWithCompletion:(/*^block*/id)arg1 ;
-(void)loadView;
@end

