/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <TVMLKit/TVAuxiliaryViewSelecting.h>

@protocol TVAuxiliaryViewSelecting;
@class UIView, NSString;

@interface _TVCollectionViewCell : UICollectionViewCell <TVAuxiliaryViewSelecting> {

	BOOL _pressIsAnimating;
	BOOL _unpressOnEndAnimating;
	BOOL _allowsFocus;
	UIView*<TVAuxiliaryViewSelecting> _selectingView;

}

@property (assign,nonatomic) BOOL allowsFocus;                                                    //@synthesize allowsFocus=_allowsFocus - In the implementation block
@property (assign,nonatomic,__weak) UIView*<TVAuxiliaryViewSelecting> selectingView;              //@synthesize selectingView=_selectingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAllowsFocus:(BOOL)arg1 ;
-(BOOL)allowsFocus;
-(UIView*<TVAuxiliaryViewSelecting>)selectingView;
-(void)_showPressState;
-(void)_clearPressState;
-(void)setSelectingView:(UIView*<TVAuxiliaryViewSelecting>)arg1 ;
-(id)_selectingView;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
@end
