/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIKeyCommandDiscoverabilityHUDVisualStyle.h>
@class UIFont, UIColor;


@protocol UIKeyCommandDiscoverabilityHUDVisualStyle <NSObject>
@property (nonatomic,readonly) UIEdgeInsets HUDViewInsets; 
@property (nonatomic,readonly) double HUDPageControlBottomMargin; 
@property (nonatomic,readonly) double columnDividerWidth; 
@property (nonatomic,readonly) double summaryXPadding; 
@property (nonatomic,readonly) double summaryYPadding; 
@property (nonatomic,readonly) double summaryDescriptionToModifiersSpacing; 
@property (nonatomic,readonly) double summaryModifiersSpacing; 
@property (nonatomic,readonly) UIFont * summaryFont; 
@property (nonatomic,readonly) double summaryLineHeight; 
@property (nonatomic,readonly) double summaryLineSpacing; 
@property (nonatomic,readonly) double minimumFontScaleBeforeTruncation; 
@property (nonatomic,readonly) UIColor * titleColor; 
@property (nonatomic,readonly) UIColor * inputColor; 
@property (nonatomic,readonly) UIColor * dividerColor; 
@required
-(UIColor *)titleColor;
-(UIColor *)dividerColor;
-(UIFont *)summaryFont;
-(double)summaryXPadding;
-(double)summaryYPadding;
-(double)summaryLineHeight;
-(double)summaryLineSpacing;
-(UIColor *)inputColor;
-(double)summaryModifiersSpacing;
-(double)summaryDescriptionToModifiersSpacing;
-(double)minimumFontScaleBeforeTruncation;
-(double)maxHUDWidthForWidth:(double)arg1;
-(double)maxHUDHeightForHeight:(double)arg1;
-(UIEdgeInsets)HUDViewInsets;
-(double)columnDividerWidth;
-(double)HUDPageControlBottomMargin;
-(double)columnDividerHeightForHUDHeight:(double)arg1;

@end


@class UIFont, UIColor, NSString;

@interface UIKeyCommandDiscoverabilityHUDVisualStyle : NSObject <UIKeyCommandDiscoverabilityHUDVisualStyle>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIEdgeInsets HUDViewInsets; 
@property (nonatomic,readonly) double HUDPageControlBottomMargin; 
@property (nonatomic,readonly) double columnDividerWidth; 
@property (nonatomic,readonly) double summaryXPadding; 
@property (nonatomic,readonly) double summaryYPadding; 
@property (nonatomic,readonly) double summaryDescriptionToModifiersSpacing; 
@property (nonatomic,readonly) double summaryModifiersSpacing; 
@property (nonatomic,readonly) UIFont * summaryFont; 
@property (nonatomic,readonly) double summaryLineHeight; 
@property (nonatomic,readonly) double summaryLineSpacing; 
@property (nonatomic,readonly) double minimumFontScaleBeforeTruncation; 
@property (nonatomic,readonly) UIColor * titleColor; 
@property (nonatomic,readonly) UIColor * inputColor; 
@property (nonatomic,readonly) UIColor * dividerColor; 
+(id)visualStyleForTraitCollection:(id)arg1 ;
-(double)maxHUDWidthForWidth:(double)arg1 ;
-(double)maxHUDHeightForHeight:(double)arg1 ;
-(double)columnDividerHeightForHUDHeight:(double)arg1 ;
@end

