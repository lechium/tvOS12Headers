//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTSettingsGroup, NSDictionary, NSString;

@interface MTSetting : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    NSDictionary *_userInfo;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    id _value;	// 40 = 0x28
    CDUnknownBlockType _changeHandler;	// 48 = 0x30
    NSString *_title;	// 56 = 0x38
    CDUnknownBlockType _generator;	// 64 = 0x40
    MTSettingsGroup *_group;	// 72 = 0x48
}

+ (id)optionSettingWithTitle:(id)arg1 initialValue:(unsigned long long)arg2 optionDescription:(id)arg3 identifier:(id)arg4 changeHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010012eaa4
+ (id)optionSettingWithTitle:(id)arg1 headerTitle:(id)arg2 initialValue:(unsigned long long)arg3 optionDescription:(id)arg4 identifier:(id)arg5 changeHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000010012e87c
+ (id)drilldownSettingWithTitle:(id)arg1 valueLabel:(id)arg2 identifier:(id)arg3 viewControllerGenerator:(CDUnknownBlockType)arg4;	// IMP=0x000000010012e764
+ (id)textSettingWithInitialValue:(id)arg1 placeholder:(id)arg2 identifier:(id)arg3 changeHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010012e644
+ (id)buttonSettingWithTitle:(id)arg1 identifier:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010012e4f0
+ (id)buttonSettingWithTitle:(id)arg1 detailText:(id)arg2 identifier:(id)arg3 changeHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010012e34c
+ (id)switchSettingWithTitle:(id)arg1 initialValue:(_Bool)arg2 identifier:(id)arg3 changeHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010012e184
+ (id)radioOptionWithTitle:(id)arg1 radioGroup:(id)arg2 value:(unsigned long long)arg3 identifier:(id)arg4;	// IMP=0x000000010012e03c
@property(nonatomic) __weak MTSettingsGroup *group; // @synthesize group=_group;
@property(copy, nonatomic) CDUnknownBlockType generator; // @synthesize generator=_generator;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;	// IMP=0x000000010012ecdc
- (id)init;	// IMP=0x000000010012eb54

@end

