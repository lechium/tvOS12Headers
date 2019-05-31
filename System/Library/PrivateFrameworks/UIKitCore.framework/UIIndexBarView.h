/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol UIIndexBarViewDelegate, UIIndexBarVisualStyle;
@class UIColor, NSArray;

@interface UIIndexBarView : UIControl {

	UIColor* _indexColor;
	NSArray* _entries;
	id<UIIndexBarViewDelegate> _delegate;
	UIColor* _trackingBackgroundColor;
	long long _highlightStyle;
	double _highlightedIndex;
	double _deflection;
	double _cachedDisplayHighlightedIndex;
	UIColor* _nonTrackingBackgroundColor;
	id<UIIndexBarVisualStyle> _visualStyle;
	NSArray* _displayEntries;

}

@property (assign,nonatomic) double cachedDisplayHighlightedIndex;                    //@synthesize cachedDisplayHighlightedIndex=_cachedDisplayHighlightedIndex - In the implementation block
@property (nonatomic,copy) UIColor * nonTrackingBackgroundColor;                      //@synthesize nonTrackingBackgroundColor=_nonTrackingBackgroundColor - In the implementation block
@property (nonatomic,retain) id<UIIndexBarVisualStyle> visualStyle;                   //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,retain) NSArray * displayEntries;                                //@synthesize displayEntries=_displayEntries - In the implementation block
@property (nonatomic,readonly) double displayHighlightedIndex; 
@property (nonatomic,copy) NSArray * entries;                                         //@synthesize entries=_entries - In the implementation block
@property (assign,nonatomic,__weak) id<UIIndexBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UIColor * indexColor;                                      //@synthesize indexColor=_indexColor - In the implementation block
@property (nonatomic,copy) UIColor * trackingBackgroundColor;                         //@synthesize trackingBackgroundColor=_trackingBackgroundColor - In the implementation block
@property (assign,nonatomic) long long highlightStyle;                                //@synthesize highlightStyle=_highlightStyle - In the implementation block
@property (assign,nonatomic) double highlightedIndex;                                 //@synthesize highlightedIndex=_highlightedIndex - In the implementation block
@property (assign,nonatomic) double deflection;                                       //@synthesize deflection=_deflection - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<UIIndexBarViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<UIIndexBarViewDelegate>)delegate;
-(id<UIIndexBarVisualStyle>)visualStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setVisualStyle:(id<UIIndexBarVisualStyle>)arg1 ;
-(id)backgroundColor;
-(void)tintColorDidChange;
-(BOOL)canBecomeFocused;
-(long long)highlightStyle;
-(void)setHighlightStyle:(long long)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)_canDrawContent;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setEntries:(NSArray *)arg1 ;
-(void)resetDeflection:(BOOL)arg1 ;
-(NSArray *)entries;
-(void)setIndexColor:(UIColor *)arg1 ;
-(void)_updateBackgroundColor;
-(UIColor *)indexColor;
-(void)setHighlightedIndex:(double)arg1 ;
-(BOOL)_selectEntry:(id)arg1 atIndex:(long long)arg2 ;
-(NSArray *)displayEntries;
-(void)_updateDisplayEntries;
-(void)setDisplayEntries:(NSArray *)arg1 ;
-(void)_userInteractionStarted;
-(void)_userInteractionStopped;
-(void)setDeflection:(double)arg1 ;
-(double)displayHighlightedIndex;
-(void)setTrackingBackgroundColor:(UIColor *)arg1 ;
-(BOOL)_didSelectEntry:(id)arg1 atIndex:(long long)arg2 ;
-(UIColor *)trackingBackgroundColor;
-(double)highlightedIndex;
-(double)deflection;
-(double)cachedDisplayHighlightedIndex;
-(void)setCachedDisplayHighlightedIndex:(double)arg1 ;
-(UIColor *)nonTrackingBackgroundColor;
-(void)setNonTrackingBackgroundColor:(UIColor *)arg1 ;
@end

