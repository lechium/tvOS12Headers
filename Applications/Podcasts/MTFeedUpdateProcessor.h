//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseProcessor.h"

@interface MTFeedUpdateProcessor : MTBaseProcessor
{
}

- (void)_lpmDidChange;	// IMP=0x000000010012ac00
- (void)_reCheck;	// IMP=0x000000010012aa54
- (_Bool)_isLPMEnabled;	// IMP=0x000000010012aa00
- (void)checkAutoDownloadsForUuids:(id)arg1;	// IMP=0x000000010012a838
- (void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2;	// IMP=0x000000010012a828
- (id)entityName;	// IMP=0x000000010012a818
- (id)predicate;	// IMP=0x000000010012a788
- (double)updatePredicateDuration;	// IMP=0x000000010012a77c
- (void)dealloc;	// IMP=0x000000010012a704
- (void)start;	// IMP=0x000000010012a674

@end

