/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPickerView.h>
#import <libobjc.A.dylib/WKFormControl.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class WKContentView, NSString;

@interface WKMultipleSelectPicker : UIPickerView <WKFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {

	WKContentView* _view;
	long long _textAlignment;
	unsigned long long _singleSelectionIndex;
	BOOL _allowsMultipleSelection;
	double _layoutWidth;
	double _fontSize;
	double _maximumTextWidth;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(BOOL)arg3 ;
-(long long)findItemIndexAt:(int)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithView:(id)arg1 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(BOOL)arg4 ;
@end
