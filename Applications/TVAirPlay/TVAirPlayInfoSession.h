//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVAirPlaySession.h"

@class NSObject<TVAirPlaySessionDelegate>, NSString, NSTimer;

@interface TVAirPlayInfoSession : NSObject <TVAirPlaySession>
{
    _Bool _deactivated;	// 8 = 0x8
    unsigned int _sessionID;	// 12 = 0xc
    NSObject<TVAirPlaySessionDelegate> *_delegate;	// 16 = 0x10
    NSString *_titleString;	// 24 = 0x18
    NSString *_promptString;	// 32 = 0x20
    NSString *_messageString;	// 40 = 0x28
    NSString *_commandKey;	// 48 = 0x30
    NSTimer *_timeoutTimer;	// 56 = 0x38
}

@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) NSString *commandKey; // @synthesize commandKey=_commandKey;
@property(readonly, copy, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
@property(readonly, copy, nonatomic) NSString *promptString; // @synthesize promptString=_promptString;
@property(readonly, copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak NSObject<TVAirPlaySessionDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool deactivated; // @synthesize deactivated=_deactivated;
- (void).cxx_destruct;	// IMP=0x00000001000149d0
- (void)_messageTimedOut;	// IMP=0x000000010001481c
- (void)userStop;	// IMP=0x000000010001473c
- (_Bool)performAction:(id)arg1 withOptions:(id)arg2 outInfo:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000100014734
- (_Bool)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 error:(id *)arg4;	// IMP=0x000000010001472c
- (id)getProperty:(id)arg1 qualifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100014724
- (_Bool)stopWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001468c
- (void)startWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000141f0
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long sessionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

