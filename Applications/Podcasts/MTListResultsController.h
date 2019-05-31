//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTResultsController.h"

#import "MTResultsChangeGeneratorDelegate.h"

@class MTResultsChangeGenerator, NSArray, NSString;

@interface MTListResultsController : MTResultsController <MTResultsChangeGeneratorDelegate>
{
    NSArray *_objects;	// 8 = 0x8
    MTResultsChangeGenerator *_changeGenerator;	// 16 = 0x10
}

@property(retain, nonatomic) MTResultsChangeGenerator *changeGenerator; // @synthesize changeGenerator=_changeGenerator;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;	// IMP=0x00000001000f2bbc
- (void)generator:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x00000001000f2ad0
- (id)allObjects;	// IMP=0x00000001000f2ac4
- (unsigned long long)numberOfObjectsInSection:(unsigned long long)arg1;	// IMP=0x00000001000f2a78
- (id)indexPathForObject:(id)arg1;	// IMP=0x00000001000f29e8
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x00000001000f294c
- (unsigned long long)startingIndexForDisplay;	// IMP=0x00000001000f2810
- (id)init;	// IMP=0x00000001000f2784

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

