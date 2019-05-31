/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView;

@interface SKWeakContainer : NSObject {

	BOOL _wasOnScreen;
	UIView* _scrollingView;
	UIView* _trackingView;

}

@property (assign,nonatomic,__weak) UIView * scrollingView;              //@synthesize scrollingView=_scrollingView - In the implementation block
@property (assign,nonatomic,__weak) UIView * trackingView;               //@synthesize trackingView=_trackingView - In the implementation block
@property (assign,nonatomic) BOOL wasOnScreen;                           //@synthesize wasOnScreen=_wasOnScreen - In the implementation block
-(UIView *)scrollingView;
-(void)setScrollingView:(UIView *)arg1 ;
-(UIView *)trackingView;
-(void)setTrackingView:(UIView *)arg1 ;
-(BOOL)wasOnScreen;
-(void)setWasOnScreen:(BOOL)arg1 ;
@end
