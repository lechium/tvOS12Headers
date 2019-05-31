/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, _TVProgressBarView, UIColor, UIImageView;

@interface _TVProgressView : UIView {

	UIVisualEffectView* _materialView;
	_TVProgressBarView* _progressBarView;
	BOOL _useMaterial;
	long long _style;
	double _cornerRadius;
	double _progress;
	UIColor* _progressTintColor;
	UIColor* _completeTintColor;
	UIImageView* _shadowImageView;

}

@property (nonatomic,retain) UIImageView * shadowImageView;              //@synthesize shadowImageView=_shadowImageView - In the implementation block
@property (assign,nonatomic) long long style;                            //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double cornerRadius;                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double progress;                            //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressTintColor;                //@synthesize progressTintColor=_progressTintColor - In the implementation block
@property (nonatomic,retain) UIColor * completeTintColor;                //@synthesize completeTintColor=_completeTintColor - In the implementation block
@property (assign,nonatomic) BOOL useMaterial;                           //@synthesize useMaterial=_useMaterial - In the implementation block
-(void)setCompleteTintColor:(UIColor *)arg1 ;
-(void)_updateForStyleChange;
-(id)_maskImageForProgressBar;
-(void)setUseMaterial:(BOOL)arg1 ;
-(UIColor *)completeTintColor;
-(BOOL)useMaterial;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)setProgress:(double)arg1 ;
-(double)cornerRadius;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)progress;
-(UIImageView *)shadowImageView;
-(void)setShadowImageView:(UIImageView *)arg1 ;
-(UIColor *)progressTintColor;
-(void)setProgressTintColor:(UIColor *)arg1 ;
@end

