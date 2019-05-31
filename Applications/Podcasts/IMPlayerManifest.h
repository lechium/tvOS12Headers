//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMPlayerItem, NSObject<OS_dispatch_queue>, NSString, NSUserActivity;

@interface IMPlayerManifest : NSObject
{
    _Bool _isLoaded;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    unsigned long long _currentIndex;	// 24 = 0x18
    IMPlayerItem *_currentItem;	// 32 = 0x20
    NSUserActivity *_activity;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

+ (void)registerManifestForRestoration:(Class)arg1;	// IMP=0x0000000100229fc8
+ (id)_activityType;	// IMP=0x0000000100229efc
+ (id)activityTypeSuffix;	// IMP=0x0000000100229ef4
+ (id)supportedActivityTypes;	// IMP=0x0000000100229ee0
+ (id)restoreActivity:(id)arg1;	// IMP=0x0000000100229ddc
+ (id)createManifestForActivity:(id)arg1;	// IMP=0x0000000100229dd4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSUserActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) IMPlayerItem *currentItem; // @synthesize currentItem=_currentItem;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x000000010022a330
- (id)description;	// IMP=0x000000010022a0e4
- (void)postManifestDidChangeNotification;	// IMP=0x000000010022a08c
@property(readonly, nonatomic) unsigned long long count;
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100229ab0
- (void)previous;	// IMP=0x00000001002297dc
- (_Bool)hasPrevious;	// IMP=0x00000001002297b8
- (void)next;	// IMP=0x000000010022975c
- (_Bool)hasNext;	// IMP=0x0000000100229718
- (void)_load;	// IMP=0x0000000100229714
- (void)load:(CDUnknownBlockType)arg1;	// IMP=0x0000000100229538
- (id)init;	// IMP=0x000000010022942c

@end

