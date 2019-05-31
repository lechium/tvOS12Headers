//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValueTransformer.h"

@class NSDate, NSDateComponentsFormatter;

@interface TVHRemainingTimeValueTransformer : NSValueTransformer
{
    NSDateComponentsFormatter *_daysFormatter;	// 8 = 0x8
    NSDateComponentsFormatter *_hoursFormatter;	// 16 = 0x10
    NSDateComponentsFormatter *_minutesFormatter;	// 24 = 0x18
    NSDate *_targetDate;	// 32 = 0x20
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x000000010000884c
+ (Class)transformedValueClass;	// IMP=0x0000000100008838
@property(copy, nonatomic) NSDate *targetDate; // @synthesize targetDate=_targetDate;
@property(retain, nonatomic) NSDateComponentsFormatter *minutesFormatter; // @synthesize minutesFormatter=_minutesFormatter;
@property(retain, nonatomic) NSDateComponentsFormatter *hoursFormatter; // @synthesize hoursFormatter=_hoursFormatter;
@property(retain, nonatomic) NSDateComponentsFormatter *daysFormatter; // @synthesize daysFormatter=_daysFormatter;
- (void).cxx_destruct;	// IMP=0x0000000100008c10
- (id)transformedValue:(id)arg1;	// IMP=0x0000000100008854
- (id)initWithTargetDate:(id)arg1;	// IMP=0x00000001000087b0
- (id)init;	// IMP=0x0000000100008728

@end

