/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKEventStatsCounterInternalProperty.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventTypeStatsTimerCounter : NSObject <_DKEventStatsCounterInternalProperty> {

	_DKEventStatsCounterInternal* _internal;

}

@property (retain) _DKEventStatsCounterInternal * internal;              //@synthesize internal=_internal - In the implementation block
+(id)counterInCollection:(id)arg1 withEventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 ;
-(void)addTimingWithStartDate:(id)arg1 endDate:(id)arg2 typeValue:(id)arg3 ;
-(unsigned long long)countWithTypeValue:(id)arg1 ;
-(void)addTimingWithTimeInterval:(double)arg1 typeValue:(id)arg2 ;
-(_DKEventStatsCounterInternal *)internal;
-(void)setInternal:(_DKEventStatsCounterInternal *)arg1 ;
-(id)eventName;
@end

