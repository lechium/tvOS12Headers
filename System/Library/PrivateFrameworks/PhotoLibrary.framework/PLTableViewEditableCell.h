/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class PLTextView, UITextField, UILabel, NSString;

@interface PLTableViewEditableCell : UITableViewCell <UITextViewDelegate, UITextFieldDelegate> {

	PLTextView* _textView;
	UITextField* _textField;
	UILabel* _sizeTextLabel;
	id _delegate;
	BOOL _forceFirstResponder;
	int _cellStyle;

}

@property (assign,nonatomic) int style;                             //@synthesize cellStyle=_cellStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)posterCellIdentifier;
-(void)_textFieldChanged;
-(id)initWithFrame:(CGRect)arg1 multiLine:(BOOL)arg2 ;
-(id)initHDSDCell;
-(id)initWithFrame:(CGRect)arg1 cellStyle:(int)arg2 ;
-(void)forceFirstResponder:(BOOL)arg1 ;
-(id)sizeTextLabel;
-(void)setPlaceholderText:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(BOOL)becomeFirstResponder;
-(CGSize)contentSize;
-(BOOL)resignFirstResponder;
-(id)value;
-(void)setValue:(id)arg1 ;
-(BOOL)isEditing;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
@end

