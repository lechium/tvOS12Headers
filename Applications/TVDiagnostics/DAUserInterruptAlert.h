//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DAUserInterruptAlert : NSObject
{
    CDUnknownBlockType _handler;	// 8 = 0x8
    NSString *_suiteName;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *suiteName; // @synthesize suiteName=_suiteName;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;	// IMP=0x000000010000aba8
- (void)activate;	// IMP=0x000000010000aa40
- (id)initWithSuiteName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000a988

@end

