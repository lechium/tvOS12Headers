/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutManager, NSTextStorage, NSTextContainer, NSMutableArray, NSMutableSet, UIFont, UIColor, NSArray, NSString;

@interface SUICStreamingTextView : UIView {

	NSLayoutManager* _layoutManager;
	NSTextStorage* _textStorage;
	NSTextContainer* _textContainer;
	NSMutableArray* _words;
	NSMutableArray* _wordsToShow;
	NSMutableSet* _wordsToDelete;
	BOOL _animatedInternal;
	BOOL _animated;
	UIFont* _font;
	double _hyphenationFactor;
	UIColor* _startTextColor;
	UIColor* _endTextColor;
	double _animationDuration;
	UIColor* _textColor;

}

@property (nonatomic,retain) UIFont * font;                         //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double hyphenationFactor;              //@synthesize hyphenationFactor=_hyphenationFactor - In the implementation block
@property (nonatomic,retain) UIColor * startTextColor;              //@synthesize startTextColor=_startTextColor - In the implementation block
@property (nonatomic,retain) UIColor * endTextColor;                //@synthesize endTextColor=_endTextColor - In the implementation block
@property (assign,nonatomic) double animationDuration;              //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) BOOL animated;                         //@synthesize animated=_animated - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                   //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) NSArray * words; 
@property (nonatomic,readonly) NSString * text; 
-(void)_resetState;
-(void)_sharedInit;
-(void)_updateText:(id)arg1 ;
-(void)_updateAnimatedInternal;
-(void)setEndTextColor:(UIColor *)arg1 ;
-(void)_layoutFrames;
-(id)_glyphImageForWord:(id)arg1 frame:(CGRect)arg2 glyphRange:(NSRange)arg3 textColor:(id)arg4 ;
-(void)_animateLayers;
-(void)_animateWordIn:(id)arg1 ;
-(void)_animateWordOut:(id)arg1 ;
-(id)_createGlyphImage:(CGRect)arg1 glyphRange:(NSRange)arg2 layoutManager:(id)arg3 ;
-(UIColor *)startTextColor;
-(void)setStartTextColor:(UIColor *)arg1 ;
-(UIColor *)endTextColor;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setTextColor:(UIColor *)arg1 ;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(UIColor *)textColor;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setWords:(NSArray *)arg1 ;
-(NSArray *)words;
-(double)hyphenationFactor;
-(void)setHyphenationFactor:(double)arg1 ;
@end

