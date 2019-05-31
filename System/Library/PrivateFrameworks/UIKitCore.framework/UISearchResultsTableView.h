/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableView.h>

@class UIView, UISearchDisplayController;

@interface UISearchResultsTableView : UITableView {

	double _offsetForNoResultsMessage;
	UIView* _topShadowView;
	UISearchDisplayController* _controller;

}

@property (assign,nonatomic,__weak) UISearchDisplayController * controller;                                        //@synthesize controller=_controller - In the implementation block
@property (setter=_setTopShadowView:,getter=_topShadowView,nonatomic,retain) UIView * _topShadowView; 
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(UISearchDisplayController *)controller;
-(void)setController:(UISearchDisplayController *)arg1 ;
-(void)_numberOfRowsDidChange;
-(void)_setOffsetForNoResultsMessage:(double)arg1 ;
-(double)_offsetForNoResultsMessage;
-(UIView *)_topShadowView;
-(void)_setTopShadowView:(id)arg1 ;
@end
