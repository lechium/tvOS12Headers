/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSAttributedString, UITableViewCell;

@interface UITableViewLabel : UILabel {

	long long _savedNumberOfLines;
	double _firstParagraphFirstLineHeadIndent;
	NSAttributedString* _shadowAttributedText;
	UITableViewCell* _tableCell;

}

@property (assign,nonatomic,__weak) UITableViewCell * tableCell;              //@synthesize tableCell=_tableCell - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(id)_disabledFontColor;
-(void)setTableCell:(UITableViewCell *)arg1 ;
-(void)_setFirstParagraphFirstLineHeadIndent:(double)arg1 ;
-(void)_clearNumberOfLines;
-(void)_setNumberOfLinesForAXLayoutIfNecessary;
-(void)_cleanupErrantFirstLineHeadIndent;
-(void)_restoreNumberOfLines;
-(BOOL)_attributedStringHasParagraphStyleWithNonzeroFirstLineHeadIndent:(id)arg1 ;
-(UITableViewCell *)tableCell;
@end
