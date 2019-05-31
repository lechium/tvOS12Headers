/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIColor, _UILegibilitySettings;

@interface _UIVibrantSettings : NSObject {

	long long _style;
	UIColor* _referenceColor;
	_UILegibilitySettings* _legibilitySettings;
	double _referenceContrast;
	UIColor* _tintColor;
	UIColor* _highlightLimitingColor;
	UIColor* _shimmerColor;
	UIColor* _chevronShimmerColor;
	UIColor* _highlightColor;

}

@property (nonatomic,retain) UIColor * tintColor;                                       //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightLimitingColor;                          //@synthesize highlightLimitingColor=_highlightLimitingColor - In the implementation block
@property (nonatomic,retain) UIColor * shimmerColor;                                    //@synthesize shimmerColor=_shimmerColor - In the implementation block
@property (nonatomic,retain) UIColor * chevronShimmerColor;                             //@synthesize chevronShimmerColor=_chevronShimmerColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                                  //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,readonly) UIColor * referenceColor;                                //@synthesize referenceColor=_referenceColor - In the implementation block
@property (nonatomic,readonly) double referenceContrast;                                //@synthesize referenceContrast=_referenceContrast - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) long long style;                                         //@synthesize style=_style - In the implementation block
+(id)vibrantSettingsWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTintColor:(UIColor *)arg1 ;
-(long long)style;
-(long long)_style;
-(UIColor *)tintColor;
-(_UILegibilitySettings *)legibilitySettings;
-(id)initWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3 ;
-(id)_computeSourceColorDodgeColorForDestinationColor:(id)arg1 producingLuminanceChange:(double)arg2 ;
-(UIColor *)highlightLimitingColor;
-(UIColor *)shimmerColor;
-(UIColor *)chevronShimmerColor;
-(UIColor *)highlightColor;
-(id)tintViewWithFrame:(CGRect)arg1 ;
-(id)highlightLimitingViewWithFrame:(CGRect)arg1 ;
-(UIColor *)referenceColor;
-(double)referenceContrast;
-(void)setHighlightLimitingColor:(UIColor *)arg1 ;
-(void)setShimmerColor:(UIColor *)arg1 ;
-(void)setChevronShimmerColor:(UIColor *)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
@end

