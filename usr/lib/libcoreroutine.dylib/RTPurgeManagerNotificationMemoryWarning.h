/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTPurgeManagerNotificationMemoryWarning : RTNotification {

	long long _pressureState;

}

@property (assign,nonatomic) long long pressureState;              //@synthesize pressureState=_pressureState - In the implementation block
-(id)initWithMemoryPressureState:(long long)arg1 ;
-(long long)pressureState;
-(void)setPressureState:(long long)arg1 ;
@end

