//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVDAStep.h"

@class NSArray, NSMutableArray, NSString, TVDAWiFiQualityMeasurement;

@interface TVDALoadingStep : NSObject <TVDAStep>
{
    double _loadingDuration;	// 8 = 0x8
    long long _menuBehavior;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    NSMutableArray *_mutableActions;	// 40 = 0x28
    CDUnknownBlockType _actionHandler;	// 48 = 0x30
    TVDAWiFiQualityMeasurement *_measurementToRun;	// 56 = 0x38
}

@property(retain, nonatomic) TVDAWiFiQualityMeasurement *measurementToRun; // @synthesize measurementToRun=_measurementToRun;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(copy, nonatomic) NSMutableArray *mutableActions; // @synthesize mutableActions=_mutableActions;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long menuBehavior; // @synthesize menuBehavior=_menuBehavior;
@property(nonatomic) double loadingDuration; // @synthesize loadingDuration=_loadingDuration;
- (void).cxx_destruct;	// IMP=0x0000000100004920
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100004624
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100004560
- (void)runMeasurement:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004558
@property(readonly, copy, nonatomic) NSArray *actions;
- (id)loadingAction;	// IMP=0x00000001000044b8
- (void)cancel;	// IMP=0x0000000100004344
- (void)restart;	// IMP=0x00000001000042f8
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004008
- (id)initWithTitle:(id)arg1 loadingDuration:(double)arg2 actionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100003ee0
- (id)init;	// IMP=0x0000000100003ec8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
