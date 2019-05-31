//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString;

@interface SVSStarkConfirmationButton : UIButton
{
    _Bool _handlerDisabled;	// 8 = 0x8
    long long _confirmationButtonType;	// 16 = 0x10
    NSString *_buttonTitle;	// 24 = 0x18
    CDUnknownBlockType _handlerBlock;	// 32 = 0x20
}

+ (id)starkButtonWithType:(long long)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010007adf8
@property(nonatomic, getter=_isHandlerDisabled) _Bool handlerDisabled; // @synthesize handlerDisabled=_handlerDisabled;
@property(copy, nonatomic, getter=_handlerBlock) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
@property(retain, nonatomic, getter=_buttonTitle) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) long long confirmationButtonType; // @synthesize confirmationButtonType=_confirmationButtonType;
- (void).cxx_destruct;	// IMP=0x000000010007b214
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000010007b140
- (void)invokeConfirmationHandler:(id)arg1;	// IMP=0x000000010007b0ec
- (void)setUserInteractionEnabled:(_Bool)arg1;	// IMP=0x000000010007af24

@end

