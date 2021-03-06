//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface TVMusicBarsView : UIView
{
    NSArray *_barViews;	// 8 = 0x8
    float _repeatCount;	// 16 = 0x10
    unsigned long long _musicBarsStyle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100076afc
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100076ad0
- (void)_addAnimationsWithRepeatCount:(float)arg1;	// IMP=0x0000000100076670
- (void)_removeAnimations;	// IMP=0x0000000100076528
- (void)_addAnimations;	// IMP=0x0000000100076514
- (id)_createBarViews;	// IMP=0x0000000100076378
- (void)_setBarHeights:(double)arg1;	// IMP=0x0000000100076200
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100076134
@property(nonatomic) unsigned long long musicBarsStyle;
- (void)_updateMusicBarsStyle;	// IMP=0x0000000100075d98
- (void)resumeAnimating;	// IMP=0x0000000100075cfc
- (void)stopAnimating;	// IMP=0x0000000100075c6c
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100075c18
- (void)dealloc;	// IMP=0x0000000100075ba0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100075a44

@end

