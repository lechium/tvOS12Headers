/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol UILayoutContainerViewDelegate;
@class UIView;

@interface UILayoutContainerView : UIView <NSCoding> {

	long long _setNeedsLayoutDisabledCount;
	UIView* _shadowView;
	struct {
		unsigned delegateRespondsToSemanticContentAttributeChanged : 1;
		unsigned delegateRespondsToViewWillLayoutSubviews : 1;
		unsigned delegateRespondsToWillMoveToWindow : 1;
		unsigned delegateRespondsToDidMoveToWindow : 1;
	}  _layoutContainerViewFlags;
	BOOL _usesInnerShadow;
	BOOL _usesRoundedCorners;
	id<UILayoutContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UILayoutContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL usesInnerShadow;                                           //@synthesize usesInnerShadow=_usesInnerShadow - In the implementation block
@property (assign,nonatomic) BOOL usesRoundedCorners;                                        //@synthesize usesRoundedCorners=_usesRoundedCorners - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UILayoutContainerViewDelegate>)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id<UILayoutContainerViewDelegate>)delegate;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_setFlagsFromDelegate:(id)arg1 ;
-(void)_updateShadowViews;
-(void)_installShadowViews;
-(void)_tearDownShadowViews;
-(void)setUsesRoundedCorners:(BOOL)arg1 ;
-(void)setUsesInnerShadow:(BOOL)arg1 ;
-(void)beginWhileDisablingSetNeedsLayout;
-(void)endWhileDisablingSetNeedsLayout;
-(BOOL)usesInnerShadow;
-(BOOL)usesRoundedCorners;
@end

