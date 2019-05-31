//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHJSObject.h"

#import "TVHJSMediaCategoryTypesFetchController.h"
#import "TVHKMediaCategoryTypesFetchControllerDelegate.h"

@class NSString, NSUUID, TVHKMediaCategoryTypesFetchController;

@interface TVHJSMediaCategoryTypesFetchController : TVHJSObject <TVHKMediaCategoryTypesFetchControllerDelegate, TVHJSMediaCategoryTypesFetchController>
{
    TVHKMediaCategoryTypesFetchController *_wrappedFetchController;	// 8 = 0x8
    NSUUID *_fetchControllerContext;	// 16 = 0x10
}

+ (id)mediaCategoryTypesFetchControllerWithMediaServer:(id)arg1;	// IMP=0x00000001000271b8
@property(retain, nonatomic) NSUUID *fetchControllerContext; // @synthesize fetchControllerContext=_fetchControllerContext;
@property(retain, nonatomic) TVHKMediaCategoryTypesFetchController *wrappedFetchController; // @synthesize wrappedFetchController=_wrappedFetchController;
- (void).cxx_destruct;	// IMP=0x0000000100027ab0
- (void)controller:(id)arg1 fetchDidFailWithError:(id)arg2;	// IMP=0x0000000100027830
- (void)controller:(id)arg1 fetchDidCompleteWithResult:(id)arg2;	// IMP=0x0000000100027530
- (void)resume;	// IMP=0x00000001000274f0
- (void)pause;	// IMP=0x00000001000274b0
- (void)stop;	// IMP=0x0000000100027458
- (void)start;	// IMP=0x00000001000273d4
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *logNameSuffix;
- (id)initWithMediaServer:(id)arg1 appContext:(id)arg2;	// IMP=0x00000001000270cc
- (id)initWithAppContext:(id)arg1;	// IMP=0x0000000100027044

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

