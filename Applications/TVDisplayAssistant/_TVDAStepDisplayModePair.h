//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PBSDisplayMode;

@interface _TVDAStepDisplayModePair : NSObject
{
    PBSDisplayMode *_displayMode;	// 8 = 0x8
    id <TVDAStep> _step;	// 16 = 0x10
}

@property(retain, nonatomic) id <TVDAStep> step; // @synthesize step=_step;
@property(copy, nonatomic) PBSDisplayMode *displayMode; // @synthesize displayMode=_displayMode;
- (void).cxx_destruct;	// IMP=0x0000000100006408
- (id)initWithStep:(id)arg1;	// IMP=0x00000001000062f0

@end

