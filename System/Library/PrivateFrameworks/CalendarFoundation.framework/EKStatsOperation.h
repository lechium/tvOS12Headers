/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKStatsOperation : NSObject {

	int _type;
	long long _intValue;
	double _doubleValue;

}

@property (assign) int type;                        //@synthesize type=_type - In the implementation block
@property (assign) long long intValue;              //@synthesize intValue=_intValue - In the implementation block
@property (assign) double doubleValue;              //@synthesize doubleValue=_doubleValue - In the implementation block
-(void)setIntValue:(long long)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(id)initWithType:(int)arg1 doubleValue:(double)arg2 ;
-(id)initWithType:(int)arg1 intValue:(long long)arg2 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(double)doubleValue;
-(long long)intValue;
@end

