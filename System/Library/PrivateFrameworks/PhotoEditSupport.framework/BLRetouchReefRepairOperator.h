/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@interface BLRetouchReefRepairOperator : NSObject {

	void* _buffer;
	int _rowBytes;
	int _width;
	int _height;
	void* _maskBuffer;
	int _maskRowBytes;
	int _maskWidth;
	int _maskHeight;
	int _brushSize;
	CGRect _maskRect;

}
+(int)borderWithBrushSize:(int)arg1 ;
-(id)initWithRepairSourceData:(void*)arg1 rowBytes:(int)arg2 width:(int)arg3 height:(int)arg4 ;
-(void)setMaskRect:(CGRect)arg1 ;
-(void)setMaskData:(void*)arg1 rowBytes:(int)arg2 width:(int)arg3 height:(int)arg4 ;
-(void)setBrushSize:(int)arg1 ;
-(void)repair;
-(CGPoint)analyzeOffset;
-(void)repairWithOffset:(CGPoint)arg1 ;
@end

