/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRefreshControlContentView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIImageView, UILabel, UIActivityIndicatorView, NSMutableDictionary, NSString;

@interface _UIRefreshControlDefaultContentView : _UIRefreshControlContentView <CAAnimationDelegate> {

	BOOL _animationsAreValid;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UIImageView* _arrow;
	UIActivityIndicatorView* _spinner;
	NSMutableDictionary* _snappingTextFromValues;
	NSMutableDictionary* _snappingImageFromValues;
	NSMutableDictionary* _snappingArrowFromValues;
	BOOL _areAnimationsValid;

}

@property (assign,nonatomic) BOOL areAnimationsValid;                          //@synthesize areAnimationsValid=_areAnimationsValid - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIImageView * arrow;                            //@synthesize arrow=_arrow - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                            //@synthesize textLabel=_textLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)imageView;
-(long long)style;
-(UILabel *)textLabel;
-(id)attributedTitle;
-(void)setAttributedTitle:(id)arg1 ;
-(void)refreshControlInvalidatedSnappingHeight;
-(double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(double)maximumSnappingHeight;
-(double)minimumSnappingHeight;
-(void)willTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)didTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)setAreAnimationsValid:(BOOL)arg1 ;
-(void)_fadeInMagic;
-(void)_revealingMagic;
-(void)_snappingMagic;
-(void)_refreshingMagic;
-(void)_spinOutMagic;
-(double)_currentTimeOffset;
-(double)_snappingTimeOffset;
-(BOOL)areAnimationsValid;
-(id)_revealingImageAnimations;
-(id)_revealingArrowAnimations;
-(id)_revealingTextAnimations;
-(void)_updateTimeOffsetOfRelevantLayers;
-(id)_regenerateCircle;
-(id)_regenerateArrow;
-(UIImageView *)arrow;
-(UIActivityIndicatorView *)spinner;
@end

