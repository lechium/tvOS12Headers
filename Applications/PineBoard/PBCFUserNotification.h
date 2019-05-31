//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL;

@interface PBCFUserNotification : NSObject
{
    _Bool _noDefaultButton;	// 8 = 0x8
    _Bool _simple;	// 9 = 0x9
    _Bool _shouldBehaveSuperModally;	// 10 = 0xa
    _Bool _shouldDismissOnUnlock;	// 11 = 0xb
    _Bool _responseSent;	// 12 = 0xc
    int _token;	// 16 = 0x10
    int _timeout;	// 20 = 0x14
    int _defaultButtonIndex;	// 24 = 0x18
    int _alternateButtonIndex;	// 28 = 0x1c
    int _otherButtonIndex;	// 32 = 0x20
    int _dialogDefaultButtonIndex;	// 36 = 0x24
    unsigned int _replyPort;	// 40 = 0x28
    int _requestFlags;	// 44 = 0x2c
    unsigned int _replyFlags;	// 48 = 0x30
    NSString *_notificationSource;	// 56 = 0x38
    NSURL *_iconURL;	// 64 = 0x40
    NSString *_alertHeader;	// 72 = 0x48
    NSString *_alertMessage;	// 80 = 0x50
    NSString *_defaultButtonTitle;	// 88 = 0x58
    NSString *_alternateButtonTitle;	// 96 = 0x60
    NSString *_otherButtonTitle;	// 104 = 0x68
    NSArray *_selectableItemTitles;	// 112 = 0x70
    id _textFieldTitles;	// 120 = 0x78
    id _textFieldInitialValues;	// 128 = 0x80
    NSArray *_textFieldEnteredValues;	// 136 = 0x88
    NSString *_defaultResponseLaunchBundleID;	// 144 = 0x90
    NSURL *_defaultResponseLaunchURL;	// 152 = 0x98
    NSString *_accountName;	// 160 = 0xa0
    unsigned long long _attemptNumber;	// 168 = 0xa8
    NSArray *_keyboardTypes;	// 176 = 0xb0
}

@property(nonatomic) _Bool responseSent; // @synthesize responseSent=_responseSent;
@property(copy, nonatomic) NSArray *keyboardTypes; // @synthesize keyboardTypes=_keyboardTypes;
@property(nonatomic) _Bool shouldDismissOnUnlock; // @synthesize shouldDismissOnUnlock=_shouldDismissOnUnlock;
@property(nonatomic) _Bool shouldBehaveSuperModally; // @synthesize shouldBehaveSuperModally=_shouldBehaveSuperModally;
@property(nonatomic) unsigned int replyFlags; // @synthesize replyFlags=_replyFlags;
@property(nonatomic) int requestFlags; // @synthesize requestFlags=_requestFlags;
@property(nonatomic) unsigned int replyPort; // @synthesize replyPort=_replyPort;
@property(nonatomic) unsigned long long attemptNumber; // @synthesize attemptNumber=_attemptNumber;
@property(copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(retain, nonatomic) NSURL *defaultResponseLaunchURL; // @synthesize defaultResponseLaunchURL=_defaultResponseLaunchURL;
@property(retain, nonatomic) NSString *defaultResponseLaunchBundleID; // @synthesize defaultResponseLaunchBundleID=_defaultResponseLaunchBundleID;
@property(nonatomic, getter=isSimple) _Bool simple; // @synthesize simple=_simple;
@property(copy, nonatomic) NSArray *textFieldEnteredValues; // @synthesize textFieldEnteredValues=_textFieldEnteredValues;
@property(copy, nonatomic) id textFieldInitialValues; // @synthesize textFieldInitialValues=_textFieldInitialValues;
@property(copy, nonatomic) id textFieldTitles; // @synthesize textFieldTitles=_textFieldTitles;
@property(nonatomic) _Bool noDefaultButton; // @synthesize noDefaultButton=_noDefaultButton;
@property(copy, nonatomic) NSArray *selectableItemTitles; // @synthesize selectableItemTitles=_selectableItemTitles;
@property(nonatomic) int dialogDefaultButtonIndex; // @synthesize dialogDefaultButtonIndex=_dialogDefaultButtonIndex;
@property(nonatomic) int otherButtonIndex; // @synthesize otherButtonIndex=_otherButtonIndex;
@property(nonatomic) int alternateButtonIndex; // @synthesize alternateButtonIndex=_alternateButtonIndex;
@property(nonatomic) int defaultButtonIndex; // @synthesize defaultButtonIndex=_defaultButtonIndex;
@property(copy, nonatomic) NSString *otherButtonTitle; // @synthesize otherButtonTitle=_otherButtonTitle;
@property(copy, nonatomic) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(copy, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(copy, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(copy, nonatomic) NSString *alertHeader; // @synthesize alertHeader=_alertHeader;
@property(copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(nonatomic) int timeout; // @synthesize timeout=_timeout;
@property(nonatomic) int token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *notificationSource; // @synthesize notificationSource=_notificationSource;
- (void).cxx_destruct;	// IMP=0x00000001000bbce4
- (id)_safeLocalizedValue:(id)arg1 withBundle:(id)arg2;	// IMP=0x00000001000bb5e8
- (_Bool)isAlive;	// IMP=0x00000001000bb4b0
- (void)cancel;	// IMP=0x00000001000bb490
- (void)didSelectButtonAtIndex:(long long)arg1;	// IMP=0x00000001000bb004
- (_Bool)isLastTextField:(long long)arg1;	// IMP=0x00000001000bafb0
- (long long)keyboardTypeForTextField:(long long)arg1;	// IMP=0x00000001000baebc
- (_Bool)isSecureTextField:(long long)arg1;	// IMP=0x00000001000bae80
@property(readonly, nonatomic) long long notificationType;
- (void)updateWithMessage:(id)arg1 requestFlags:(int)arg2;	// IMP=0x00000001000b9ce8
- (id)initWithMessage:(id)arg1 replyPort:(unsigned int)arg2 requestFlags:(int)arg3;	// IMP=0x00000001000b9c54

@end

