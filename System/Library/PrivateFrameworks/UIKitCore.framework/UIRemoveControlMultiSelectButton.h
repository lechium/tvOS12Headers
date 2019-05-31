/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIRemoveControlMinusButton.h>

@interface UIRemoveControlMultiSelectButton : UIRemoveControlMinusButton {

	unsigned _isHighlighted : 1;
	unsigned _isSelected : 1;

}
+(id)minusImage;
+(float)defaultWidth;
+(id)plusImage;
+(id)minusCenterImage;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isRotating;
-(BOOL)isRotated;
-(id)initWithRemoveControl:(id)arg1 ;
-(void)setHiding:(BOOL)arg1 ;
-(BOOL)isHiding;
-(void)toggleRotate:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 highlighted:(BOOL)arg2 ;
@end

