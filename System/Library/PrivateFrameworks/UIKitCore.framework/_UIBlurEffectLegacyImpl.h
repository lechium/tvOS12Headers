/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIBlurEffectImpl.h>

@class UIColor, UIBlurEffect;

@interface _UIBlurEffectLegacyImpl : _UIBlurEffectImpl {

	long long _style;
	UIColor* _tintColor;
	BOOL _invertAutomaticStyle;
	UIBlurEffect* _effect;

}

@property (assign,nonatomic) UIBlurEffect * effect;              //@synthesize effect=_effect - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(long long)style;
-(id)tintColor;
-(void)setEffect:(UIBlurEffect *)arg1 ;
-(id)initWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(BOOL)arg3 ;
-(BOOL)invertAutomaticStyle;
-(BOOL)canProvideVibrancyEffect;
-(void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2 ;
-(BOOL)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 ;
-(id)implementationForUserInterfaceStyle:(long long)arg1 ;
-(void)appendDescriptionTo:(id)arg1 ;
-(UIBlurEffect *)effect;
@end

