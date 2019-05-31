//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class DASessionSettings, NSArray, NSData, NSDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface DADeviceState : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _pendingChanges;	// 8 = 0x8
    _Bool _freezeNotifications;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 24 = 0x18
    long long _phase;	// 32 = 0x20
    NSString *_serialNumber;	// 40 = 0x28
    NSDictionary *_attributes;	// 48 = 0x30
    NSString *_suiteName;	// 56 = 0x38
    NSString *_suiteDescription;	// 64 = 0x40
    NSData *_testSuiteImageData;	// 72 = 0x48
    NSNumber *_progress;	// 80 = 0x50
    double _durationRemaining;	// 88 = 0x58
    DASessionSettings *_sessionSettings;	// 96 = 0x60
    NSArray *_history;	// 104 = 0x68
    NSArray *_errors;	// 112 = 0x70
    NSNumber *_timestamp;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000dcf8
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSArray *history; // @synthesize history=_history;
@property(retain, nonatomic) DASessionSettings *sessionSettings; // @synthesize sessionSettings=_sessionSettings;
@property(nonatomic) double durationRemaining; // @synthesize durationRemaining=_durationRemaining;
@property(retain, nonatomic) NSNumber *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSData *testSuiteImageData; // @synthesize testSuiteImageData=_testSuiteImageData;
@property(retain, nonatomic) NSString *suiteDescription; // @synthesize suiteDescription=_suiteDescription;
@property(retain, nonatomic) NSString *suiteName; // @synthesize suiteName=_suiteName;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) long long phase; // @synthesize phase=_phase;
- (void).cxx_destruct;	// IMP=0x000000010000f33c
- (void)_sendChangeNotification;	// IMP=0x000000010000f040
- (void)_sendChangeNotificationIfNeeded;	// IMP=0x000000010000f020
- (id)_stringForPhase:(long long)arg1;	// IMP=0x000000010000ef78
- (id)description;	// IMP=0x000000010000ed7c
- (void)removeErrorCodes:(id)arg1;	// IMP=0x000000010000eabc
- (void)removeErrorCode:(long long)arg1;	// IMP=0x000000010000ea30
- (void)addErrorCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x000000010000e914
- (void)updateWithDeviceState:(id)arg1;	// IMP=0x000000010000e6b8
- (void)transactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e62c
- (_Bool)object:(id)arg1 isEqualToObject:(id)arg2;	// IMP=0x000000010000e5d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000dd00
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000da44
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000d510
- (id)initWithSerialNumber:(id)arg1 attributes:(id)arg2;	// IMP=0x000000010000d470
- (id)init;	// IMP=0x000000010000d2c8

@end
