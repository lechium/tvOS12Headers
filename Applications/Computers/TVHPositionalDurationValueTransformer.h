//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValueTransformer.h"

@class NSDateComponentsFormatter;

@interface TVHPositionalDurationValueTransformer : NSValueTransformer
{
    NSDateComponentsFormatter *_formatter;	// 8 = 0x8
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x0000000100037144
+ (Class)transformedValueClass;	// IMP=0x0000000100037130
+ (void)initialize;	// IMP=0x0000000100036fcc
@property(retain, nonatomic) NSDateComponentsFormatter *formatter; // @synthesize formatter=_formatter;
- (void).cxx_destruct;	// IMP=0x0000000100037258
- (id)transformedValue:(id)arg1;	// IMP=0x000000010003714c
- (id)init;	// IMP=0x0000000100037074

@end

