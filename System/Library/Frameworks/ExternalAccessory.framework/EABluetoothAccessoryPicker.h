/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BTDevicePickerDelegate.h>

@protocol EABluetoothAccessoryPickerDelegate;
@class BTDevicePicker, NSString;

@interface EABluetoothAccessoryPicker : NSObject <BTDevicePickerDelegate> {

	BTDevicePicker* _picker;
	id<EABluetoothAccessoryPickerDelegate> _delegate;

}

@property (assign,nonatomic) id<EABluetoothAccessoryPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)wakeSelectedBluetoothAccessories:(id)arg1 ;
-(void)devicePicker:(id)arg1 didDismissWithResult:(long long)arg2 device:(id)arg3 ;
-(id)initWithPredicate:(id)arg1 ;
-(void)dismissPicker;
-(void)dealloc;
-(void)setDelegate:(id<EABluetoothAccessoryPickerDelegate>)arg1 ;
-(id<EABluetoothAccessoryPickerDelegate>)delegate;
-(void)show;
@end
