/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUIImage;

@interface _CUINineImagePieces : NSObject {

	CUIImage* _center;
	CUIImage* _topLeft;
	CUIImage* _top;
	CUIImage* _topRight;
	CUIImage* _right;
	CUIImage* _bottomRight;
	CUIImage* _bottom;
	CUIImage* _bottomLeft;
	CUIImage* _left;
	BOOL _tileCenterAndEdges;

}
-(id)initWithCenter:(id)arg1 topLeft:(id)arg2 top:(id)arg3 topRight:(id)arg4 right:(id)arg5 bottomRight:(id)arg6 bottom:(id)arg7 bottomLeft:(id)arg8 left:(id)arg9 tileCenterAndEdges:(BOOL)arg10 ;
-(BOOL)tileCenterAndEdges;
-(id)bottom;
-(id)left;
-(id)right;
-(id)bottomLeft;
-(id)bottomRight;
-(id)topLeft;
-(id)topRight;
-(id)top;
-(void)dealloc;
-(id)center;
@end
