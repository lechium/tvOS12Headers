/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKInfoCardTheme.h>

@class UIColor, UIFont, NSDictionary, NSPointerArray, NSString;

@interface MKInfoCardThemeManager : NSObject <MKInfoCardTheme> {

	BOOL _themeWasExplicitySet;
	NSDictionary* _colors;
	NSPointerArray* _viewListeners;
	NSPointerArray* _viewControllerListeners;
	NSPointerArray* _otherListeners;
	/*^block*/id _tintColorProvider;
	UIColor* _currentTintColor;
	BOOL _useSmallFont;
	unsigned long long _themeType;

}

@property (assign,nonatomic) BOOL useSmallFont;                                              //@synthesize useSmallFont=_useSmallFont - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long themeType;                                 //@synthesize themeType=_themeType - In the implementation block
@property (nonatomic,readonly) BOOL isDarkTheme; 
@property (nonatomic,readonly) BOOL isVibrantTheme; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) UIColor * lightTextColor; 
@property (nonatomic,readonly) UIColor * tintColor; 
@property (nonatomic,readonly) UIColor * highlightedTintColor; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * separatorLineColor; 
@property (nonatomic,readonly) UIColor * rowColor; 
@property (nonatomic,readonly) UIColor * selectedRowColor; 
@property (nonatomic,readonly) UIColor * highlightedActionRowTextColor; 
@property (nonatomic,readonly) UIColor * disabledActionRowTextColor; 
@property (nonatomic,readonly) UIColor * disabledActionRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalActionRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalActionRowBackgroundPressedColor; 
@property (nonatomic,readonly) UIColor * headerPrimaryButtonNormalColor; 
@property (nonatomic,readonly) UIColor * headerPrimaryButtonHighlightedColor; 
@property (nonatomic,readonly) UIColor * headerSecondaryButtonNormalColor; 
@property (nonatomic,readonly) UIColor * headerSecondaryButtonHighlightedColor; 
@property (nonatomic,readonly) UIFont * largeTitleFontStatic; 
@property (nonatomic,readonly) UIFont * largeTitleFont; 
@property (nonatomic,readonly) UIFont * titleFont; 
@property (nonatomic,readonly) UIFont * brandTitleFont; 
@property (nonatomic,readonly) UIFont * bodyFont; 
@property (nonatomic,readonly) UIFont * boldBodyFont; 
@property (nonatomic,readonly) UIFont * mediumBodyFont; 
@property (nonatomic,readonly) UIFont * sectionHeaderFont; 
@property (nonatomic,readonly) UIFont * sectionHeaderButtonFont; 
@property (nonatomic,readonly) UIFont * attributionFont; 
@property (nonatomic,readonly) UIFont * smallAttributionFont; 
@property (nonatomic,readonly) UIFont * rowButtonFont; 
@property (nonatomic,readonly) UIFont * rowGlyphButtonFont; 
+(void)setUseSmallFont:(BOOL)arg1 ;
+(id)currentTheme;
+(id)_currentTheme:(unsigned long long)arg1 ;
+(id)themeWithThemeType:(unsigned long long)arg1 ;
+(void)setTheme:(unsigned long long)arg1 ;
+(void)setTintColorProvider:(/*^block*/id)arg1 ;
+(void)addThemeChangedListener:(id)arg1 ;
-(id)iconFontToMatch:(id)arg1 ;
-(unsigned long long)themeType;
-(BOOL)isDarkTheme;
-(BOOL)isVibrantTheme;
-(UIColor *)highlightedTintColor;
-(UIColor *)separatorLineColor;
-(UIColor *)rowColor;
-(UIColor *)selectedRowColor;
-(UIColor *)highlightedActionRowTextColor;
-(UIColor *)disabledActionRowTextColor;
-(UIColor *)disabledActionRowBackgroundColor;
-(UIColor *)normalActionRowBackgroundColor;
-(UIColor *)normalActionRowBackgroundPressedColor;
-(UIColor *)headerPrimaryButtonNormalColor;
-(UIColor *)headerPrimaryButtonHighlightedColor;
-(UIColor *)headerSecondaryButtonNormalColor;
-(UIColor *)headerSecondaryButtonHighlightedColor;
-(UIFont *)largeTitleFontStatic;
-(UIFont *)largeTitleFont;
-(UIFont *)brandTitleFont;
-(UIFont *)bodyFont;
-(UIFont *)boldBodyFont;
-(UIFont *)mediumBodyFont;
-(UIFont *)sectionHeaderFont;
-(UIFont *)sectionHeaderButtonFont;
-(UIFont *)attributionFont;
-(UIFont *)smallAttributionFont;
-(UIFont *)rowButtonFont;
-(UIFont *)rowGlyphButtonFont;
-(BOOL)_isInSpotlightContext;
-(id)_initWithThemeType:(unsigned long long)arg1 ;
-(unsigned long long)_currentSystemTheme;
-(void)_setTheme:(unsigned long long)arg1 ;
-(void)_tintColorDidChange;
-(void)_notifyAllListenersOfTintChange:(id)arg1 visitedSet:(id)arg2 ;
-(void)_setTintColorProvider:(/*^block*/id)arg1 ;
-(void)_notifyAllListenersOfThemeChange:(id)arg1 visitedSet:(id)arg2 subListenerMethod:(/*function pointer*/void*)arg3 subListenerSelector:(SEL)arg4 ;
-(void)_addThemeChangedListener:(id)arg1 ;
-(BOOL)useSmallFont;
-(void)setUseSmallFont:(BOOL)arg1 ;
-(id)init;
-(UIColor *)tintColor;
-(UIColor *)backgroundColor;
-(UIColor *)textColor;
-(UIColor *)lightTextColor;
-(UIFont *)titleFont;
@end

