/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyCell.h>

@class UITextView, UILabel;

@interface CNPropertyNoteCell : CNPropertyCell {

	UITextView* _textView;
	UILabel* _labelLabel;

}

@property (nonatomic,readonly) UILabel * labelLabel;              //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,retain) UITextView * textView;               //@synthesize textView=_textView - In the implementation block
-(void)setLabelTextAttributes:(id)arg1 ;
-(id)labelView;
-(BOOL)shouldPerformDefaultAction;
-(void)performDefaultAction;
-(void)setValueTextAttributes:(id)arg1 ;
-(id)valueView;
-(double)bottomBaselineConstant;
-(void)textViewChanged:(id)arg1 ;
-(void)textViewEditingDidEnd:(id)arg1 ;
-(UILabel *)labelLabel;
-(void)setProperty:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(UITextView *)textView;
@end

