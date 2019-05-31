/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPickerTableViewCell.h>

@class UILabel, UIColor, NSString, NSAttributedString;

@interface UIPickerTableViewTitledCell : UIPickerTableViewCell {

	UILabel* _titleLabel;
	BOOL _isAttributed;
	BOOL _usesModernStyle;
	UIColor* _textColor;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
@property (nonatomic,readonly) UILabel * _titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) BOOL _isAttributed;                              //@synthesize isAttributed=_isAttributed - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)_titleLabel;
-(void)prepareForReuse;
-(NSAttributedString *)attributedTitle;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(BOOL)_canBeReusedInPickerView;
-(void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 isModern:(BOOL)arg3 textColor:(id)arg4 forceTextAlignmentCentered:(BOOL)arg5 ;
-(BOOL)_isAttributed;
@end

