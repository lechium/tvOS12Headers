//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface _SATVAirplay2TableDataSource : NSObject
{
    NSMutableArray *_sectionTitles;	// 8 = 0x8
    NSMutableArray *_rowTitlesBySection;	// 16 = 0x10
    NSMutableArray *_rowActionsBySection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010007ef98
- (CDUnknownBlockType)actionForRowAtIndexpath:(id)arg1;	// IMP=0x000000010007eee0
- (id)titleForRowAtIndexPath:(id)arg1;	// IMP=0x000000010007ee00
- (id)titleForSection:(unsigned long long)arg1;	// IMP=0x000000010007ed9c
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x000000010007ed44
- (unsigned long long)numberOfSections;	// IMP=0x000000010007ed2c
- (void)addRowWithTitle:(id)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x000000010007ec04
- (void)addSectionWithTitle:(id)arg1;	// IMP=0x000000010007ea54

@end
