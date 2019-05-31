/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@class CIContext;

@interface BLImageBuffer : NSObject {

	CIContext* _ciContext;
	CGColorSpaceRef _colorSpace;
	int _colorManagement;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;              //@synthesize size=_size - In the implementation block
-(id)initWithSize:(CGSize)arg1 colorManagement:(int)arg2 ;
-(void)renderCIImage:(id)arg1 ;
-(void)readPixelsByAddressInBlock:(/*^block*/id)arg1 ;
-(id)initWithSize:(CGSize)arg1 colorManagement:(int)arg2 ciContext:(id)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(id)ciImage;
-(CGSize)size;
-(void)dealloc;
-(id)image;
@end

