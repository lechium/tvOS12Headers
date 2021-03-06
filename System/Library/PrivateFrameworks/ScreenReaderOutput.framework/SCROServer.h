/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCROServerDelegate;
#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSLock;

@interface SCROServer : NSObject {

	NSLock* _contentLock;
	id<SCROServerDelegate> _delegate;
	CFRunLoopSourceRef _serverSource;
	CFRunLoopSourceRef _deathSource;
	CFRunLoopTimerRef _deathTimer;
	unsigned _serverPort;
	unsigned _deathPort;
	long long _clientCount;
	BOOL _isRegisteredWithMach;

}
+(id)sharedServer;
-(CFRunLoopTimerRef)_deathTimer;
-(void)unregisterWithMach;
-(long long)_clientCount;
-(long long)_incrementClientCount;
-(void)_setClientCount:(long long)arg1 ;
-(int)_registerForNotificationOnDeathPort:(unsigned)arg1 ;
-(BOOL)isRegisteredWithMach;
-(BOOL)registerWithMach;
-(CFRunLoopSourceRef)serverSource;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

