//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TVSettingsPreviouslyUsedEmailFacade : NSObject
{
    NSArray *_previouslyUsedEmails;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000a2d58
@property(copy, nonatomic) NSArray *previouslyUsedEmails; // @synthesize previouslyUsedEmails=_previouslyUsedEmails;
- (void).cxx_destruct;	// IMP=0x00000001000a3168
- (void)clearAllEntriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a3088
- (void)deleteEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a2f6c
- (void)update;	// IMP=0x00000001000a2ee4
- (id)init;	// IMP=0x00000001000a2e1c

@end
