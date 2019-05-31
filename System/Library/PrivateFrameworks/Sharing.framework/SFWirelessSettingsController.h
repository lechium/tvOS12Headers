/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Sharing/Sharing-Structs.h>
@interface SFWirelessSettingsController : NSObject {

	id _delegate;
	BOOL _wifiEnabled;
	BOOL _bluetoothEnabled;
	BOOL _deviceSupportsWAPI;
	BOOL _firstCallbackCompleted;
	BOOL _wirelessCarPlayEnabled;
	BOOL _wirelessAccessPointEnabled;
	SFOperationRef _information;

}

@property (__weak) id<SFWirelessSettingsControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBluetoothEnabled) BOOL bluetoothEnabled; 
@property (getter=isWifiEnabled) BOOL wifiEnabled; 
@property (getter=isWirelessAccessPointEnabled,readonly) BOOL wirelessAccessPointEnabled; 
@property (getter=isWirelessCarPlayEnabled,readonly) BOOL wirelessCarPlayEnabled; 
@property (readonly) BOOL deviceSupportsWAPI; 
-(BOOL)isWifiEnabled;
-(BOOL)deviceSupportsWAPI;
-(BOOL)isBluetoothEnabled;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)setWifiEnabled:(BOOL)arg1 ;
-(void)setBluetoothEnabled:(BOOL)arg1 ;
-(BOOL)isWirelessAccessPointEnabled;
-(BOOL)isWirelessCarPlayEnabled;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<SFWirelessSettingsControllerDelegate>)arg1 ;
-(id<SFWirelessSettingsControllerDelegate>)delegate;
-(void)invalidate;
@end

