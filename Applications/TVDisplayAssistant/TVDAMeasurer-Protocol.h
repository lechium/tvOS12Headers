//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class NSString, TVDAWiFiQualityMeasurement;

@protocol TVDAMeasurer <NSObject, NSCopying>
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) TVDAWiFiQualityMeasurement *measurementToRun;
- (id)copy;
- (void)runMeasurement:(void (^)(NSError *))arg1;
@end
