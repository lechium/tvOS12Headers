//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSetting.h"

@class MTOptionsDescription, NSString;

@interface MTOptionSetting : MTSetting
{
    MTOptionsDescription *_options;	// 8 = 0x8
    NSString *_headerTitle;	// 16 = 0x10
}

@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) MTOptionsDescription *options; // @synthesize options=_options;
- (void).cxx_destruct;	// IMP=0x000000010012ee80
- (id)currentShortTitle;	// IMP=0x000000010012ed7c

@end

