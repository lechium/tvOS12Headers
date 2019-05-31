/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@class NSDictionary, BLRetouchLayerStack, NSLock;

@interface BLRetouchModel : NSObject {

	NSDictionary* _strokesDataDictionary;
	BLRetouchLayerStack* _layerStack;
	NSLock* _lock;

}
-(id)initWithAdjustmentsDictionary:(id)arg1 ;
-(BOOL)hasRetouch;
-(BOOL)hasLayerStack;
-(BOOL)needsPadding;
-(double)paddingForSize:(CGSize)arg1 ;
-(void)buildLayerStackWithMaskSourceImage:(id)arg1 ;
-(id)imageForWorkingImageBuffer:(id)arg1 workingTransform:(CGAffineTransform)arg2 inDestRect:(CGRect)arg3 withPadding:(double)arg4 ;
-(id)imageForWorkingImage:(id)arg1 workingTransform:(CGAffineTransform)arg2 inDestRect:(CGRect)arg3 withPadding:(double)arg4 ;
-(void)setLayerStack:(id)arg1 ;
-(id)layerStack;
@end

