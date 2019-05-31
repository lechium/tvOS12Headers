/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedImage.h>

@interface CUINamedLayerImage : CUINamedImage {

	CGRect _frame;
	double _opacity;
	int _blendMode;
	BOOL _fixedFrame;

}

@property (assign,nonatomic) CGRect frame;                 //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double opacity;               //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) BOOL fixedFrame;              //@synthesize fixedFrame=_fixedFrame - In the implementation block
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(int)blendMode;
-(BOOL)fixedFrame;
-(void)setFixedFrame:(BOOL)arg1 ;
-(void)setBlendMode:(int)arg1 ;
@end

