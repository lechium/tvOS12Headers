//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface IMBag : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSString *_cacheFilePath;	// 16 = 0x10
    NSDate *_lastFetchDate;	// 24 = 0x18
    NSURL *_bagURL;	// 32 = 0x20
    double _refreshInterval;	// 40 = 0x28
    NSDictionary *_values;	// 48 = 0x30
    NSString *_appVersion;	// 56 = 0x38
}

@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain) NSDictionary *values; // @synthesize values=_values;
@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(readonly, nonatomic) NSURL *bagURL; // @synthesize bagURL=_bagURL;
@property(readonly, nonatomic) NSDate *lastFetchDate; // @synthesize lastFetchDate=_lastFetchDate;
- (void).cxx_destruct;	// IMP=0x00000001001ec910
@property(readonly, nonatomic) NSString *cacheFilePath; // @synthesize cacheFilePath=_cacheFilePath;
- (id)parseBagValuesFromData:(id)arg1;	// IMP=0x00000001001ec4a4
- (void)loadBagFromCache;	// IMP=0x00000001001ec344
- (_Bool)bagNeedsUpdating;	// IMP=0x00000001001ec280
- (void)updateBagIfNecessary;	// IMP=0x00000001001ebf9c
- (void)scheduleBagUpdates;	// IMP=0x00000001001ebeac
- (void)dispatchUpdateBagIfNecessary;	// IMP=0x00000001001ebe14
- (id)valueForKeyPath:(id)arg1 withDefault:(id)arg2;	// IMP=0x00000001001ebd60
- (id)valueForKey:(id)arg1 withDefault:(id)arg2;	// IMP=0x00000001001ebcac
- (id)valueForKeyPath:(id)arg1;	// IMP=0x00000001001ebc1c
- (id)valueForKey:(id)arg1;	// IMP=0x00000001001ebb8c
- (void)dealloc;	// IMP=0x00000001001ebab0
- (id)initWithBagURL:(id)arg1 andRefreshInterval:(double)arg2;	// IMP=0x00000001001eb864
- (id)initWithBagURL:(id)arg1;	// IMP=0x00000001001eb850

@end

