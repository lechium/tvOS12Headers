//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

#import "PBTextEntryViewControllerDelegate.h"

@class NSString, NSURL;

@interface PBCVVVerificationOperation : ISOperation <PBTextEntryViewControllerDelegate>
{
    CDUnknownBlockType _completion;	// 112 = 0x70
    NSString *_customerTitle;	// 120 = 0x78
    NSString *_customerMessage;	// 128 = 0x80
    NSURL *_verifyURL;	// 136 = 0x88
}

@property(retain, nonatomic) NSURL *verifyURL; // @synthesize verifyURL=_verifyURL;
@property(retain, nonatomic) NSString *customerMessage; // @synthesize customerMessage=_customerMessage;
@property(retain, nonatomic) NSString *customerTitle; // @synthesize customerTitle=_customerTitle;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;	// IMP=0x00000001000b1494
- (void)textEntryDidCancel:(id)arg1;	// IMP=0x00000001000b1338
- (void)textEntry:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;	// IMP=0x00000001000b1228
- (void)presentFailureAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b0e3c
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b0b20
- (id)_copyResponseWithCode:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000b073c
- (_Bool)_verifyCVVCode:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000b0150
- (id)_copyCVVCodeFromUser;	// IMP=0x00000001000aff08
- (void)run;	// IMP=0x00000001000afd24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
