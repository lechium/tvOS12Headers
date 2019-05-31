//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSURL;

@interface _TVSettingsOpenURLConfig : NSObject
{
    _Bool _shouldActivateLastComponent;	// 8 = 0x8
    NSURL *_originalURL;	// 16 = 0x10
    NSDictionary *_parameters;	// 24 = 0x18
    NSArray *_parsedPathComponents;	// 32 = 0x20
}

+ (id)_keyValueDictionaryForURL:(id)arg1;	// IMP=0x00000001000c410c
+ (id)configWithPrefsURL:(id)arg1;	// IMP=0x00000001000c38f0
+ (id)configWithAppSettingsURL:(id)arg1;	// IMP=0x00000001000c37bc
+ (id)configWithSettingsURL:(id)arg1;	// IMP=0x00000001000c370c
@property(nonatomic) _Bool shouldActivateLastComponent; // @synthesize shouldActivateLastComponent=_shouldActivateLastComponent;
@property(copy, nonatomic) NSArray *parsedPathComponents; // @synthesize parsedPathComponents=_parsedPathComponents;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSURL *originalURL; // @synthesize originalURL=_originalURL;
- (void).cxx_destruct;	// IMP=0x00000001000c4400

@end

