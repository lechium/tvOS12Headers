/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTEventStark : RTEvent <NSSecureCoding> {

	long long _starkState;

}

@property (nonatomic,readonly) long long starkState;              //@synthesize starkState=_starkState - In the implementation block
+(id)stringFromStarkState:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(long long)starkState;
-(id)initWithDeviceStarkState:(long long)arg1 source:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

