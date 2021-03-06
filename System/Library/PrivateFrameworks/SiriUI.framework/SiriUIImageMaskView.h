/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage;

@interface SiriUIImageMaskView : UIView {

	UIImage* _maskImage;

}

@property (nonatomic,retain) UIImage * maskImage;              //@synthesize maskImage=_maskImage - In the implementation block
+(id)imageMaskViewWithImage:(id)arg1 ;
+(id)imageMaskViewWithDefaultChevron;
-(UIImage *)maskImage;
-(void)setMaskImage:(UIImage *)arg1 ;
-(void)setMaskColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

