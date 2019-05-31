/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont, UIColor;

@interface SiriTVUITemplateBadgeView : UIView {

	BOOL _filled;
	NSString* _title;
	UIFont* _font;
	UIColor* _color;
	double _backgroundCornerRadius;
	double _borderWidth;
	UIEdgeInsets _backgroundInsets;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIFont * font;                              //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * color;                            //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundInsets;              //@synthesize backgroundInsets=_backgroundInsets - In the implementation block
@property (assign,nonatomic) double backgroundCornerRadius;              //@synthesize backgroundCornerRadius=_backgroundCornerRadius - In the implementation block
@property (assign,nonatomic) double borderWidth;                         //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,getter=isFilled,nonatomic) BOOL filled;                //@synthesize filled=_filled - In the implementation block
-(double)backgroundCornerRadius;
-(UIEdgeInsets)backgroundInsets;
-(void)setBackgroundInsets:(UIEdgeInsets)arg1 ;
-(void)setBackgroundCornerRadius:(double)arg1 ;
-(void)_updateColorsAndBorder;
-(void)setFilled:(BOOL)arg1 ;
-(BOOL)isFilled;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(double)borderWidth;
-(void)drawRect:(CGRect)arg1 ;
@end

