/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIImageView {

	BOOL _disabled;
	BOOL _hasFlexibleCornerRadius;
	UIColor* _strokeColor;
	UIColor* _fillColor;
	double _lineWidth;
	double _cornerRadius;

}

@property (nonatomic,retain) UIColor * strokeColor;                     //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                       //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                          //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double cornerRadius;                       //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL hasFlexibleCornerRadius;              //@synthesize hasFlexibleCornerRadius=_hasFlexibleCornerRadius - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(void)setActive:(BOOL)arg1 ;
-(UIColor *)fillColor;
-(double)cornerRadius;
-(void)updateView;
-(void)setHasFlexibleCornerRadius:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_initWithFrame:(CGRect)arg1 active:(BOOL)arg2 lineWidth:(double)arg3 ;
-(id)_initWithFrame:(CGRect)arg1 active:(BOOL)arg2 lineWidth:(double)arg3 updateView:(BOOL)arg4 ;
-(id)_strokeColor:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(id)_fillColor:(BOOL)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(double)_screenScale;
-(UIColor *)strokeColor;
-(double)_cornerRadiusAdjustedForBoundsHeight;
-(BOOL)hasFlexibleCornerRadius;
@end

