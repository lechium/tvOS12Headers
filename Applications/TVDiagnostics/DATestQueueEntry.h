//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DKDiagnosticAttributes, DKDiagnosticParameters;

@interface DATestQueueEntry : NSObject
{
    DKDiagnosticAttributes *_attributes;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    DKDiagnosticParameters *_parameters;	// 24 = 0x18
}

+ (id)queueEntryWithAttributes:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000f4b0
@property(readonly, nonatomic) DKDiagnosticParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) DKDiagnosticAttributes *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;	// IMP=0x000000010000f858
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000f7a0
- (_Bool)isEqualToTestQueueEntry:(id)arg1;	// IMP=0x000000010000f6b4
- (unsigned long long)hash;	// IMP=0x000000010000f640
- (id)initWithAttributes:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000f554

@end
