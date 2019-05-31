//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValueTransformer.h"

@class NSDateComponentsFormatter;

@interface TVHDurationValueTransformer : NSValueTransformer
{
    NSDateComponentsFormatter *_hoursMinutesFormatter;	// 8 = 0x8
    NSDateComponentsFormatter *_secondsFormatter;	// 16 = 0x10
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x0000000100003d2c
+ (Class)transformedValueClass;	// IMP=0x0000000100003d18
+ (void)initialize;	// IMP=0x0000000100003b60
@property(retain, nonatomic) NSDateComponentsFormatter *secondsFormatter; // @synthesize secondsFormatter=_secondsFormatter;
@property(retain, nonatomic) NSDateComponentsFormatter *hoursMinutesFormatter; // @synthesize hoursMinutesFormatter=_hoursMinutesFormatter;
- (void).cxx_destruct;	// IMP=0x0000000100003e58
- (id)transformedValue:(id)arg1;	// IMP=0x0000000100003d34
- (id)init;	// IMP=0x0000000100003c08

@end

