/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImage, TVImageProxy, UIColor;

@interface TVPTableViewCell : UITableViewCell {

	UIImage* _backingImage;
	BOOL _rendersImageAsTemplates;
	BOOL _allowsFocus;
	UIImage* _placeholderImage;
	TVImageProxy* _imageProxy;
	UIColor* __imageTintColor;
	double __imageViewWidth;

}

@property (setter=_setImageTintColor:,nonatomic,retain) UIColor * _imageTintColor;              //@synthesize _imageTintColor=__imageTintColor - In the implementation block
@property (assign,setter=_setImageViewWidth:,nonatomic) double _imageViewWidth;                 //@synthesize _imageViewWidth=__imageViewWidth - In the implementation block
@property (assign,nonatomic) BOOL rendersImageAsTemplates;                                      //@synthesize rendersImageAsTemplates=_rendersImageAsTemplates - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                        //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                                         //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,nonatomic) BOOL allowsFocus;                                                  //@synthesize allowsFocus=_allowsFocus - In the implementation block
-(void)setAllowsFocus:(BOOL)arg1 ;
-(void)_updateImage;
-(BOOL)allowsFocus;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)labelForMarquee;
-(double)_imageViewWidth;
-(double)_textLabelWidthWithXPosition:(double)arg1 currentWidth:(double)arg2 ;
-(BOOL)rendersImageAsTemplates;
-(void)setRendersImageAsTemplates:(BOOL)arg1 ;
-(void)_setImageViewWidth:(double)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIColor *)_imageTintColor;
-(void)_setImageTintColor:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
@end

