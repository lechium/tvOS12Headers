/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <SiriTVUI/SiriTVUITemplateItemView.h>

@class NSString;

@interface SiriTVUITemplateImageView : UIImageView <SiriTVUITemplateItemView> {

	BOOL hasPriorityLayout;
	CGSize _imageSize;

}

@property (assign,nonatomic) CGSize imageSize;                      //@synthesize imageSize=_imageSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasPriorityLayout; 
-(BOOL)hasPriorityLayout;
-(void)setHasPriorityLayout:(BOOL)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(BOOL)shouldFitWithinContentMargins;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)imageSize;
@end

