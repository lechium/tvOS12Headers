/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewPrintFormatter.h>

@class NSArray;

@interface UITextViewPrintFormatter : UIViewPrintFormatter {

	SCD_Struct_UI20 _textViewPrintFormatterFlags;
	NSArray* _pageData;

}
-(void)setText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setTextAlignment:(long long)arg1 ;
-(id)text;
-(void)setAttributedText:(id)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)attributedText;
-(long long)textAlignment;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(id)_pageData;
-(id)_textView;
@end

