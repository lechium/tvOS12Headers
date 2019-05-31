//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DASessionSettings : NSObject
{
    _Bool _displayDeviceIdentifier;	// 8 = 0x8
    _Bool _fullscreenPromptsEnabled;	// 9 = 0x9
    NSString *_deviceIdentifier;	// 16 = 0x10
    unsigned long long _allowCellularSizeThreshold;	// 24 = 0x18
}

+ (id)acceptableValueClasses;	// IMP=0x0000000100016e0c
+ (id)sessionSettingsWithDictionary:(id)arg1;	// IMP=0x00000001000168f0
@property(nonatomic) unsigned long long allowCellularSizeThreshold; // @synthesize allowCellularSizeThreshold=_allowCellularSizeThreshold;
@property(nonatomic) _Bool fullscreenPromptsEnabled; // @synthesize fullscreenPromptsEnabled=_fullscreenPromptsEnabled;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(nonatomic) _Bool displayDeviceIdentifier; // @synthesize displayDeviceIdentifier=_displayDeviceIdentifier;
- (void).cxx_destruct;	// IMP=0x00000001000172a4
- (id)description;	// IMP=0x0000000100017130
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000170a8
- (_Bool)isEqualToSessionSettings:(id)arg1;	// IMP=0x0000000100016f74
- (id)dictionary;	// IMP=0x0000000100016c64
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100016964
- (id)init;	// IMP=0x0000000100016954

@end
