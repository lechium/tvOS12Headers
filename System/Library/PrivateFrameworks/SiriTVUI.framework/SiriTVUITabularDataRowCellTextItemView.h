/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, SiriTVUITemplateLabel, UIImage, NSAttributedString;

@interface SiriTVUITabularDataRowCellTextItemView : UIView {

	UIImageView* _imageView;
	SiriTVUITemplateLabel* _textLabel;
	CGSize _imageSize;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGSize imageSize;                               //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText; 
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(CGSize)imageSize;
@end

