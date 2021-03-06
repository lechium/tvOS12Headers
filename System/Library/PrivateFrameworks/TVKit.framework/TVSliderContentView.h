/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface TVSliderContentView : UIView {

	UIView* _leftContentView;
	UIView* _middleContentView;
	UIView* _rightContentView;
	CGRect _leftDividerFrame;
	CGRect _rightDividerFrame;

}

@property (nonatomic,readonly) UIView * leftContentView;                //@synthesize leftContentView=_leftContentView - In the implementation block
@property (nonatomic,readonly) UIView * middleContentView;              //@synthesize middleContentView=_middleContentView - In the implementation block
@property (nonatomic,readonly) UIView * rightContentView;               //@synthesize rightContentView=_rightContentView - In the implementation block
@property (assign,nonatomic) CGRect leftDividerFrame;                   //@synthesize leftDividerFrame=_leftDividerFrame - In the implementation block
@property (assign,nonatomic) CGRect rightDividerFrame;                  //@synthesize rightDividerFrame=_rightDividerFrame - In the implementation block
-(void)setLeftDividerFrame:(CGRect)arg1 ;
-(void)setRightDividerFrame:(CGRect)arg1 ;
-(UIView *)middleContentView;
-(CGRect)leftDividerFrame;
-(CGRect)rightDividerFrame;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentScaleFactor:(double)arg1 ;
-(UIView *)leftContentView;
-(UIView *)rightContentView;
@end

