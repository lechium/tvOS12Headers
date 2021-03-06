//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol AirPlayReceiverUIDelegate <NSObject>

@optional
- (int)airplayUIStopVideo:(NSDictionary *)arg1;
- (int)airplayUIStartVideo:(NSDictionary *)arg1 outputParams:(id *)arg2;
- (int)airplayUIUpdateAudioProgress:(double)arg1 duration:(double)arg2;
- (int)airplayUIUpdateAudioMetaData:(NSDictionary *)arg1;
- (int)airplayUIStopAudio:(NSDictionary *)arg1;
- (int)airplayUIStartAudio:(NSDictionary *)arg1 outputParams:(id *)arg2;
- (void)airplayUIActivity;
- (int)airplayUIHideProgress;
- (int)airplayUIShowProgress;
- (int)airplayUIStopPresentation:(NSDictionary *)arg1;
- (int)airplayUIStartPresentation:(NSDictionary *)arg1 outputParams:(id *)arg2;
- (int)airplayUIPerform:(NSString *)arg1 inputParams:(id)arg2 outputParams:(id *)arg3;
- (int)airplayUISetProperty:(NSString *)arg1 qualifier:(id)arg2 value:(id)arg3;
- (id)airplayUIGetProperty:(NSString *)arg1 qualifier:(id)arg2 error:(int *)arg3;
@end

