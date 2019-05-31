/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/_TVLabel.h>

@class VUITextLayout;

@interface VUILabel : _TVLabel {

	BOOL _selected;
	BOOL _lastSelectedOrHighlighted;
	VUITextLayout* _textLayout;

}

@property (nonatomic,retain) VUITextLayout * textLayout;              //@synthesize textLayout=_textLayout - In the implementation block
+(id)labelWithString:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3 ;
+(unsigned long long)_numberOfLinesForTraitCollection:(id)arg1 textLayout:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)baselineHeight;
-(VUITextLayout *)textLayout;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
-(double)topMarginWithBaselineMargin:(double)arg1 ;
-(void)_updateTextColor:(BOOL)arg1 ;
@end

