//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

#import "PBTextEntryViewControllerDelegate.h"

@class NSDictionary, NSString;

@interface PBCarMVerificationOperation : ISOperation <PBTextEntryViewControllerDelegate>
{
    unsigned long long _submitIndex;	// 112 = 0x70
    unsigned long long _sendCodeIndex;	// 120 = 0x78
    CDUnknownBlockType _codeHandler;	// 128 = 0x80
    CDUnknownBlockType _sendNewCodeBlock;	// 136 = 0x88
    NSString *_customerTitle;	// 144 = 0x90
    NSString *_customerMessage;	// 152 = 0x98
    NSDictionary *_failureClientInfo;	// 160 = 0xa0
}

@property(retain, nonatomic) NSDictionary *failureClientInfo; // @synthesize failureClientInfo=_failureClientInfo;
@property(retain, nonatomic) NSString *customerMessage; // @synthesize customerMessage=_customerMessage;
@property(retain, nonatomic) NSString *customerTitle; // @synthesize customerTitle=_customerTitle;
@property(copy, nonatomic) CDUnknownBlockType sendNewCodeBlock; // @synthesize sendNewCodeBlock=_sendNewCodeBlock;
@property(copy, nonatomic) CDUnknownBlockType codeHandler; // @synthesize codeHandler=_codeHandler;
- (void).cxx_destruct;	// IMP=0x0000000100083220
- (void)textEntryDidCancel:(id)arg1;	// IMP=0x0000000100083098
- (void)textEntry:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100082f0c
- (void)presentFailureAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100082bd0
- (void)presentCodeEntryAlertWithTitle:(id)arg1 message:(id)arg2 newCodeLabel:(id)arg3 submitLabel:(id)arg4 newCodeRequestHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100082818
- (id)_copyVerifyResponseWithCode:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000823d0
- (id)_copySendCodeResponseWithError:(id *)arg1;	// IMP=0x000000010008206c
- (_Bool)_verifySMSCode:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100081aec
- (_Bool)_sendNewCodeShowingDialogs:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000010008162c
- (id)_copySMSCodeFromUser;	// IMP=0x00000001000812b8
- (void)run;	// IMP=0x00000001000810d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

