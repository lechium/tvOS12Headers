/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIView, UIButton, UIColor, NSString;

@interface _UIButtonMaskAnimationView : UIView <CAAnimationDelegate> {

	unsigned long long _hardEdge;
	UIView* _hardEdgeLine;
	UIButton* _delegate;

}

@property (assign,nonatomic) UIButton * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign) double borderWidth; 
@property (assign,nonatomic) UIColor * borderColor; 
@property (assign) unsigned long long hardEdge; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(UIButton *)arg1 ;
-(void)layoutSubviews;
-(UIButton *)delegate;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)borderWidth;
-(UIColor *)borderColor;
-(void)setHardEdge:(unsigned long long)arg1 ;
-(unsigned long long)hardEdge;
-(CGRect)_frameForLine;
@end

