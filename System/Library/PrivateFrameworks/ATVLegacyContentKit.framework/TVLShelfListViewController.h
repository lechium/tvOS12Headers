/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class UIView, TVLShelfView, TVLMenuViewController;

@interface TVLShelfListViewController : UIViewController <ATVUpdatable> {

	UIView* _headerView;
	TVLShelfView* _shelfView;
	TVLMenuViewController* _menuViewController;

}
-(void)didUpdateFeedElementRequiringUserInterfaceUpdate:(BOOL)arg1 previousElement:(id)arg2 ;
-(void)headerViewUpdated;
-(id)initWithShelfListElement:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
@end

