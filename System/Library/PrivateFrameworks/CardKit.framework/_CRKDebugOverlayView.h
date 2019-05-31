/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardKit/CardKit-Structs.h>
#import <CardKit/_CRKHitTestPassThroughView.h>

@class UILabel, UIColor, NSString;

@interface _CRKDebugOverlayView : _CRKHitTestPassThroughView {

	UILabel* _label;
	UIColor* _color;
	NSString* _debugText;

}

@property (nonatomic,copy) UIColor * color;                   //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * debugText;              //@synthesize debugText=_debugText - In the implementation block
-(void)setDebugText:(NSString *)arg1 ;
-(NSString *)debugText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
@end

