/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject {

	CUIPSDLayerRef* _layerRef;
	BOOL _isVectorMask;

}
-(id)initLayerMaskWithLayerRef:(id)arg1 ;
-(id)initVectorMaskWithLayerRef:(id)arg1 ;
-(CGPathRef)newBezierPathAtScale:(double)arg1 ;
-(id)layerRef;
-(BOOL)isLinked;
-(BOOL)isInvertedWhenBlending;
-(CGPathRef)newBezierPath;
-(CGImageRef)createCGImageMask;
-(void)dealloc;
-(CGRect)bounds;
-(BOOL)isEnabled;
@end

