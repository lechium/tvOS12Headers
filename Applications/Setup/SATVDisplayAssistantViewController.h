//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVActionStep.h"

@class NSString;

@interface SATVDisplayAssistantViewController : SATVStepViewController <SATVActionStep>
{
    CDUnknownBlockType completionHandler;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x0000000100046d94
+ (id)stableKey;	// IMP=0x0000000100046d68
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
- (void).cxx_destruct;	// IMP=0x00000001000471f4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100047174
- (void)viewDidLoad;	// IMP=0x0000000100046e30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isConfigured;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

