/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNTimestamped : NSObject {

	id _value;
	double _timestamp;

}

@property (nonatomic,readonly) id value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(/*^block*/id)wrapTransformWithScheduler:(id)arg1 ;
+(id)timestampedWithValue:(id)arg1 timestamp:(double)arg2 ;
-(id)initWithValue:(id)arg1 timestamp:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(id)value;
@end

