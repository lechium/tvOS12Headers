//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MTCoalescableWorkManifest : NSObject
{
    CDUnknownBlockType _workBlock;	// 8 = 0x8
    NSArray *_completions;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray *completions; // @synthesize completions=_completions;
@property(copy, nonatomic) CDUnknownBlockType workBlock; // @synthesize workBlock=_workBlock;
- (void).cxx_destruct;	// IMP=0x000000010007a8b0
- (id)description;	// IMP=0x000000010007a7b0
- (id)manifestByReplacingWorkBlock:(CDUnknownBlockType)arg1 appendingCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007a6c8
- (id)initWithWorkBlock:(CDUnknownBlockType)arg1 completions:(id)arg2;	// IMP=0x000000010007a604
- (id)initWithWorkBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007a558

@end

