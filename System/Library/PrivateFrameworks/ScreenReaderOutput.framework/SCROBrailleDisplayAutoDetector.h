/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSMutableDictionary, NSObject;

@interface SCROBrailleDisplayAutoDetector : NSObject {

	BOOL _isDetectingDisplays;
	IONotificationPortRef _notificationPort;
	NSMutableDictionary* _iteratorDict;
	NSObject*<OS_dispatch_source> _serialSource;

}
+(id)sharedDetector;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(id)_driverBundleIdentifiers;
-(void)_autodetectIOServices:(id)arg1 ;
-(void)_initializeAutodetectSerialPorts:(id)arg1 ;
-(BOOL)_serialDataMatchesDriver:(id)arg1 driverBundleIdentifiers:(id)arg2 fileDescriptor:(int)arg3 ;
-(void)serialPortsWerePublished:(unsigned)arg1 ;
-(void)_detectSerialPorts:(id)arg1 ;
-(id)_serialPortMatchingDictionary;
-(void)_registerForSerialPortNotifications;
-(void)_openSerialPortService:(id)arg1 sortedDriverBundleIdentifiers:(id)arg2 ;
-(BOOL)isAutoDetectEnabled;
-(void)detectDisplays;
-(void)stopDetectingDisplays;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

