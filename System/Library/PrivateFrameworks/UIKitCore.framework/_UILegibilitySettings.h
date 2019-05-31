/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString;

@interface _UILegibilitySettings : NSObject <NSSecureCoding, NSCopying> {

	long long _style;
	UIColor* _contentColor;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	UIColor* _shadowColor;
	double _shadowRadius;
	double _shadowAlpha;
	double _imageOutset;
	double _minFillHeight;
	NSString* _shadowCompositingFilterName;

}

@property (assign,nonatomic) long long style;                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * shadowCompositingFilterName;              //@synthesize shadowCompositingFilterName=_shadowCompositingFilterName - In the implementation block
@property (nonatomic,retain) UIColor * primaryColor;                            //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                          //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                             //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,retain) UIColor * contentColor;                            //@synthesize contentColor=_contentColor - In the implementation block
@property (assign,nonatomic) double shadowRadius;                               //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) double shadowAlpha;                                //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (assign,nonatomic) double imageOutset;                                //@synthesize imageOutset=_imageOutset - In the implementation block
@property (assign,nonatomic) double minFillHeight;                              //@synthesize minFillHeight=_minFillHeight - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sharedInstanceForStyle:(long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(double)shadowRadius;
-(double)shadowAlpha;
-(void)setShadowAlpha:(double)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(UIColor *)shadowColor;
-(void)setContentColor:(UIColor *)arg1 ;
-(UIColor *)contentColor;
-(id)initWithStyle:(long long)arg1 contentColor:(id)arg2 ;
-(void)setMinFillHeight:(double)arg1 ;
-(void)setPropertiesForStyle:(long long)arg1 ;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(id)initWithStyle:(long long)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 shadowColor:(id)arg4 ;
-(double)imageOutset;
-(double)minFillHeight;
-(NSString *)shadowCompositingFilterName;
-(void)setImageOutset:(double)arg1 ;
-(void)setShadowCompositingFilterName:(NSString *)arg1 ;
-(UIColor *)primaryColor;
-(UIColor *)secondaryColor;
-(id)initWithContentColor:(id)arg1 ;
-(id)initWithContentColor:(id)arg1 contrast:(double)arg2 ;
@end

