/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIAtomTextViewAtomLayout.h>

@class UILabel, UIImageView, _UISearchAtomBackgroundView, NSArray, NSString;

@interface _UISearchAtomView : UIView <_UIAtomTextViewAtomLayout> {

	SCD_Struct_UI20 _flags;
	UILabel* _textLabel;
	UIImageView* _leadingImage;
	_UISearchAtomBackgroundView* _backgroundView;
	NSArray* _defaultConstraints;
	NSArray* _withImageConstraints;
	NSArray* _withoutImageConstraints;

}

@property (nonatomic,retain) _UISearchAtomBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,copy) NSArray * defaultConstraints;                                //@synthesize defaultConstraints=_defaultConstraints - In the implementation block
@property (nonatomic,copy) NSArray * withImageConstraints;                              //@synthesize withImageConstraints=_withImageConstraints - In the implementation block
@property (nonatomic,copy) NSArray * withoutImageConstraints;                           //@synthesize withoutImageConstraints=_withoutImageConstraints - In the implementation block
@property (retain) UILabel * textLabel;                                                 //@synthesize textLabel=_textLabel - In the implementation block
@property (retain) UIImageView * leadingImage;                                          //@synthesize leadingImage=_leadingImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long selectionStyle; 
@property (nonatomic,readonly) CGRect selectionBounds; 
@property (nonatomic,readonly) long long baseWritingDirection; 
+(BOOL)requiresConstraintBasedLayout;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLeadingImage:(UIImageView *)arg1 ;
-(UIImageView *)leadingImage;
-(void)updateConstraints;
-(_UISearchAtomBackgroundView *)backgroundView;
-(id)_font;
-(void)setBackgroundView:(_UISearchAtomBackgroundView *)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)textLabel;
-(long long)selectionStyle;
-(void)setSelectionStyle:(long long)arg1 ;
-(id)viewForLastBaselineLayout;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setSelectionStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(CGRect)selectionBounds;
-(void)_updateImageColor;
-(void)_updateTextColor;
-(double)_topToBaselineDelta;
-(double)_bottomMargin;
-(void)setDefaultConstraints:(NSArray *)arg1 ;
-(void)setWithImageConstraints:(NSArray *)arg1 ;
-(void)setWithoutImageConstraints:(NSArray *)arg1 ;
-(NSArray *)defaultConstraints;
-(NSArray *)withImageConstraints;
-(NSArray *)withoutImageConstraints;
@end
