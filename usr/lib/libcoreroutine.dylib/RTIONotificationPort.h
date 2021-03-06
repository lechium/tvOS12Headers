/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTIONotificationPort : NSObject {

	IONotificationPortRef _port;

}

@property (nonatomic,readonly) IONotificationPortRef port;                    //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) CFRunLoopSourceRef runLoopSource; 
+(id)newPort;
-(CFRunLoopSourceRef)runLoopSource;
-(unsigned)addMatchingNotificationForServiceName:(id)arg1 observer:(id)arg2 ;
-(unsigned)addInterestNotificationForEntry:(unsigned)arg1 observer:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(IONotificationPortRef)port;
@end

