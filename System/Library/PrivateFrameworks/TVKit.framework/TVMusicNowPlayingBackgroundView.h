/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView;

@interface TVMusicNowPlayingBackgroundView : UIView {

	UIImage* _artworkImage;
	UIImageView* _animatedView1;
	UIImageView* _animatedView2;

}
-(void)_setupAnimationForView:(id)arg1 duration:(double)arg2 ;
-(void)_setupAnimatedViews;
-(id)_blurredImageWithImage:(id)arg1 targetSize:(CGSize)arg2 ;
-(id)_resizeImage:(CGImageRef)arg1 targetSize:(CGSize)arg2 shouldDither:(BOOL)arg3 ;
-(id)initWithImage:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)_setupAnimations;
@end

