//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

#import "PBTextEntryViewControllerDelegate.h"

@class NSArray, NSDictionary, NSString;

@interface PB2SVerificationOperation : ISOperation <PBTextEntryViewControllerDelegate>
{
    unsigned long long _submitIndex;	// 112 = 0x70
    unsigned long long _sendCodeIndex;	// 120 = 0x78
    CDUnknownBlockType _codeHandler;	// 128 = 0x80
    CDUnknownBlockType _sendNewCode;	// 136 = 0x88
    NSString *_customerTitle;	// 144 = 0x90
    NSString *_customerMessage;	// 152 = 0x98
    NSArray *_devices;	// 160 = 0xa0
    NSDictionary *_URLs;	// 168 = 0xa8
    NSDictionary *_selectedDevice;	// 176 = 0xb0
    NSDictionary *_sendCodeLocalization;	// 184 = 0xb8
}

@property(retain, nonatomic) NSDictionary *sendCodeLocalization; // @synthesize sendCodeLocalization=_sendCodeLocalization;
@property(retain, nonatomic) NSDictionary *selectedDevice; // @synthesize selectedDevice=_selectedDevice;
@property(retain, nonatomic) NSDictionary *URLs; // @synthesize URLs=_URLs;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) NSString *customerMessage; // @synthesize customerMessage=_customerMessage;
@property(retain, nonatomic) NSString *customerTitle; // @synthesize customerTitle=_customerTitle;
@property(copy, nonatomic) CDUnknownBlockType sendNewCode; // @synthesize sendNewCode=_sendNewCode;
@property(copy, nonatomic) CDUnknownBlockType codeHandler; // @synthesize codeHandler=_codeHandler;
- (void).cxx_destruct;	// IMP=0x0000000100090110
- (void)textEntryDidCancel:(id)arg1;	// IMP=0x000000010008ff1c
- (void)textEntry:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;	// IMP=0x000000010008fd90
- (void)presentFailureAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010008f9a4
- (void)presentCodeEntryAlertWithTitle:(id)arg1 message:(id)arg2 newCodeLabel:(id)arg3 submitLabel:(id)arg4 newCodeRequestHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010008f5f0
- (void)presentDevicesAlertWithTitle:(id)arg1 message:(id)arg2 deviceList:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010008eef8
- (id)_copyVerifyResponseWithCode:(id)arg1 fromDevice:(id)arg2 error:(id *)arg3;	// IMP=0x000000010008ea68
- (id)_copySendCodeResponseForDevice:(id)arg1 error:(id *)arg2;	// IMP=0x000000010008e70c
- (id)_copyDevicesResponseWithError:(id *)arg1;	// IMP=0x000000010008e4b4
- (_Bool)_verify2SVCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000010008ded4
- (_Bool)_sendCodeToDevice:(id)arg1 error:(id *)arg2 showDialogs:(_Bool)arg3;	// IMP=0x000000010008d968
- (_Bool)_sendCodeToSelectedDevice;	// IMP=0x000000010008d8bc
- (void)_displayDeviceListWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010008cd68
- (id)_copy2SVCodeFromUser;	// IMP=0x000000010008c9ac
- (id)_copyDeviceFromUser;	// IMP=0x000000010008c7c8
- (void)run;	// IMP=0x000000010008c508
- (void)setSerializedURLs:(id)arg1;	// IMP=0x000000010008c434

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

