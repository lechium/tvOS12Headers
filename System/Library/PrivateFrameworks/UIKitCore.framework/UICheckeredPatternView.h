/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface UICheckeredPatternView : UIView {

	UIColor* _patternColor;
	double _scale;
	UIColor* _checkerColor;

}

@property (nonatomic,retain) UIColor * checkerColor;              //@synthesize checkerColor=_checkerColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(BOOL)_canDrawContent;
-(void)updatePatternColor;
-(void)setCheckerColor:(UIColor *)arg1 ;
-(UIColor *)checkerColor;
@end

