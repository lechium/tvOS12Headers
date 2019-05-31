/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIVisualEffect, UITableViewRowAction;

@interface _UITableViewCellActionButton : UIButton {

	UIVisualEffect* _backgroundEffect;
	UITableViewRowAction* _action;
	unsigned long long _style;

}

@property (nonatomic,retain) UITableViewRowAction * action;                //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) UIVisualEffect * backgroundEffect;              //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
+(id)actionButtonWithStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(UITableViewRowAction *)action;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAction:(UITableViewRowAction *)arg1 ;
-(void)didMoveToWindow;
-(void)setBackgroundEffect:(UIVisualEffect *)arg1 ;
-(UIVisualEffect *)backgroundEffect;
-(void)setTitleFontSizeForContentSizeCategory:(id)arg1 ;
-(double)preferredFontSizeForContentSizeCategory:(id)arg1 ;
-(double)dynamicTypeSizeFittingHeight:(double)arg1 ;
@end
