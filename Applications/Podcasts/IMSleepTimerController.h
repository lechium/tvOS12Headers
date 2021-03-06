//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMAVPlayer;

@interface IMSleepTimerController : NSObject
{
    id <IMSleepTimerDelegate> _delegate;	// 8 = 0x8
    IMAVPlayer *_player;	// 16 = 0x10
}

@property(retain, nonatomic) IMAVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <IMSleepTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001001e1d30
- (void)addActionWithTitle:(id)arg1 autoStop:(unsigned long long)arg2 timerTime:(double)arg3 alertController:(id)arg4;	// IMP=0x00000001001e1a44
- (void)addActionForTime:(double)arg1 alertController:(id)arg2;	// IMP=0x00000001001e1854
- (id)alertControllerForSleepTimer;	// IMP=0x00000001001e15ac
- (id)initWithPlayer:(id)arg1;	// IMP=0x00000001001e1538

@end

