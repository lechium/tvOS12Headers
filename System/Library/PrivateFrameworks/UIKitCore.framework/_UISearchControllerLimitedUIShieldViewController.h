/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class _UISearchControllerLimitedAccessView;

@interface _UISearchControllerLimitedUIShieldViewController : UIViewController {

	/*^block*/id _dismissAction;
	_UISearchControllerLimitedAccessView* _limitedAccessView;

}

@property (nonatomic,retain) _UISearchControllerLimitedAccessView * limitedAccessView;              //@synthesize limitedAccessView=_limitedAccessView - In the implementation block
@property (nonatomic,copy) id dismissAction;                                                        //@synthesize dismissAction=_dismissAction - In the implementation block
-(void)dealloc;
-(void)viewDidLoad;
-(void)setDismissAction:(id)arg1 ;
-(void)setLimitedAccessView:(_UISearchControllerLimitedAccessView *)arg1 ;
-(_UISearchControllerLimitedAccessView *)limitedAccessView;
-(void)_backButtonPressed:(id)arg1 ;
-(id)dismissAction;
@end

