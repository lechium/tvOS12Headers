/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIAssetManager, UIImage;

@interface TVVolatileImage : NSObject {

	_UIAssetManager* _assetManager;
	UIImage* _image;

}

@property (nonatomic,readonly) UIImage * image;              //@synthesize image=_image - In the implementation block
+(id)volatileImageWithImage:(id)arg1 fromAssetManager:(id)arg2 ;
+(id)volatileImageWithImage:(id)arg1 ;
-(id)init;
-(UIImage *)image;
-(id)_init;
@end

