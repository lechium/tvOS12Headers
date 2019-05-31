/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTrafficDevice/AirTrafficDevice-Structs.h>
#import <ATFoundation/ATSocket.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface ATLockdownSocket : ATSocket {

	void* _lockdownInfo;
	lockdown_connectionRef _connection;
	NSObject*<OS_dispatch_source> _recvSource;
	NSObject*<OS_dispatch_queue> _socketRWQueue;
	char _readBuffer[65536];

}

@property (nonatomic,readonly) BOOL isWifi; 
-(void)writeData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)isWifi;
-(id)initWithLockdownInfo:(void*)arg1 ;
-(void)_readLength:(unsigned long long)arg1 ;
-(int)send:(const char*)arg1 offset:(unsigned)arg2 len:(unsigned)arg3 error:(id*)arg4 ;
-(int)recv:(char*)arg1 offset:(unsigned)arg2 len:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)isOpen;
-(BOOL)open;
-(void)close;
@end

