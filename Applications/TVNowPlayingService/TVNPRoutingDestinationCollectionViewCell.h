//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVNPBaseRoutingDestinationCollectionViewCell.h"

@class TVNPRoutingDestination;

@interface TVNPRoutingDestinationCollectionViewCell : TVNPBaseRoutingDestinationCollectionViewCell
{
    TVNPRoutingDestination *_destination;	// 8 = 0x8
}

@property(retain, nonatomic) TVNPRoutingDestination *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;	// IMP=0x000000010001e7c4
- (void)_updateNowPlayingInfo;	// IMP=0x000000010001e538
- (void)_updateMusicBarState;	// IMP=0x000000010001e4e4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010001e3b8
- (void)dealloc;	// IMP=0x000000010001e15c

@end
