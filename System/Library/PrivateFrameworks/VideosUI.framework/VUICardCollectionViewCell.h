/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/TVAuxiliaryViewSelecting.h>

@protocol TVAuxiliaryViewSelecting;
@class UIView, _TVCardFloatingContentView, TVViewElement, VUICardView, VUICardViewLayoutFactory, NSString;

@interface VUICardCollectionViewCell : UICollectionViewCell <TVAuxiliaryViewSelecting> {

	BOOL _pressIsAnimating;
	BOOL _unpressOnEndAnimating;
	BOOL _allowsFocus;
	UIView*<TVAuxiliaryViewSelecting> _selectingView;
	_TVCardFloatingContentView* _floatingView;
	TVViewElement* _viewElement;
	VUICardView* _cardView;
	VUICardViewLayoutFactory* _layoutFactory;

}

@property (nonatomic,retain) _TVCardFloatingContentView * floatingView;                           //@synthesize floatingView=_floatingView - In the implementation block
@property (assign,nonatomic) BOOL pressIsAnimating;                                               //@synthesize pressIsAnimating=_pressIsAnimating - In the implementation block
@property (assign,nonatomic) BOOL unpressOnEndAnimating;                                          //@synthesize unpressOnEndAnimating=_unpressOnEndAnimating - In the implementation block
@property (nonatomic,retain) TVViewElement * viewElement;                                         //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUICardView * cardView;                                              //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) VUICardViewLayoutFactory * layoutFactory;                            //@synthesize layoutFactory=_layoutFactory - In the implementation block
@property (assign,nonatomic) BOOL allowsFocus;                                                    //@synthesize allowsFocus=_allowsFocus - In the implementation block
@property (assign,nonatomic,__weak) UIView*<TVAuxiliaryViewSelecting> selectingView;              //@synthesize selectingView=_selectingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cardCellWithElement:(id)arg1 existingCell:(id)arg2 ;
-(VUICardView *)cardView;
-(void)setCardView:(VUICardView *)arg1 ;
-(void)setAllowsFocus:(BOOL)arg1 ;
-(BOOL)allowsFocus;
-(BOOL)pressIsAnimating;
-(void)setPressIsAnimating:(BOOL)arg1 ;
-(BOOL)unpressOnEndAnimating;
-(void)setUnpressOnEndAnimating:(BOOL)arg1 ;
-(UIView*<TVAuxiliaryViewSelecting>)selectingView;
-(void)_showPressState;
-(void)_clearPressState;
-(void)setSelectingView:(UIView*<TVAuxiliaryViewSelecting>)arg1 ;
-(id)_selectingView;
-(TVViewElement *)viewElement;
-(void)setViewElement:(TVViewElement *)arg1 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(_TVCardFloatingContentView *)floatingView;
-(void)setFloatingView:(_TVCardFloatingContentView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(VUICardViewLayoutFactory *)layoutFactory;
-(void)setLayoutFactory:(VUICardViewLayoutFactory *)arg1 ;
-(void)setCardView:(id)arg1 force:(BOOL)arg2 ;
@end

