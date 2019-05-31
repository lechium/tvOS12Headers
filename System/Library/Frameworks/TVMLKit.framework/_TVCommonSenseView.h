/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSArray, _TVCommonSenseFooterView;

@interface _TVCommonSenseView : UIView {

	UIView* _containerView;
	UIView* _headerView;
	NSArray* _infoViews;
	_TVCommonSenseFooterView* _footerView;

}

@property (nonatomic,retain) UIView * headerView;                                //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSArray * infoViews;                                //@synthesize infoViews=_infoViews - In the implementation block
@property (nonatomic,retain) _TVCommonSenseFooterView * footerView;              //@synthesize footerView=_footerView - In the implementation block
-(NSArray *)infoViews;
-(void)setInfoViews:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(_TVCommonSenseFooterView *)footerView;
-(void)setFooterView:(_TVCommonSenseFooterView *)arg1 ;
@end
