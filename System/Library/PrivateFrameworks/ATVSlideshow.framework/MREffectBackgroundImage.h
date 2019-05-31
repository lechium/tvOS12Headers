/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class MRImageProvider, NSString;

@interface MREffectBackgroundImage : MREffect {

	MRImageProvider* mImageProvider;
	NSString* mClampingMode;

}
-(id)initWithEffectID:(id)arg1 ;
-(void)_unload;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)setAssetPath:(id)arg1 ;
-(id)assetPath;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)_cleanup;
@end

