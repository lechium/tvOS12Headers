/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAnimation.h>

@interface UIFrameAnimation : UIAnimation {

	CGRect _startFrame;
	CGRect _endFrame;
	int _fieldsToChange;

}
-(void)setStartFrame:(CGRect)arg1 ;
-(void)setEndFrame:(CGRect)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(CGRect)endFrame;
-(void)setSignificantRectFields:(int)arg1 ;
@end

