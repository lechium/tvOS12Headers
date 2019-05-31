/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyEditingCell.h>

@class CNPostalAddressEditorView, UIColor;

@interface CNPropertyPostalAddressEditingCell : CNPropertyEditingCell {

	CNPostalAddressEditorView* _addressEditor;

}

@property (nonatomic,retain) CNPostalAddressEditorView * addressEditor;              //@synthesize addressEditor=_addressEditor - In the implementation block
@property (nonatomic,copy) UIColor * editorSeparatorColor; 
-(id)constantConstraints;
-(double)rightContentMargin;
-(id)firstResponderItem;
-(void)setEditorSeparatorColor:(UIColor *)arg1 ;
-(void)updateWithPropertyItem:(id)arg1 ;
-(id)valueView;
-(double)leftValueMargin;
-(CNPostalAddressEditorView *)addressEditor;
-(void)valueChanged:(id)arg1 ;
-(void)layoutChanged:(id)arg1 ;
-(UIColor *)editorSeparatorColor;
-(void)setAddressEditor:(CNPostalAddressEditorView *)arg1 ;
-(void)setPresentingDelegate:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutMarginsDidChange;
@end

