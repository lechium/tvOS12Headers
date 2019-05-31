/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, BrightnessSystemClientExportedObj, NSMutableArray, NSCondition;

@interface BrightnessSystemClientInternal : NSObject {

	NSXPCConnection* _connection;
	id _remote;
	BrightnessSystemClientExportedObj* exportedObj;
	NSMutableArray* _clientProperties;
	NSCondition* copyPropertyForKeyWaitCondition;
	BOOL copyPropertyForKeyCompleted;

}
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)addKeyToClientProperties:(id)arg1 ;
-(void)removeKeyFromClientProperties:(id)arg1 ;
-(void)stopXpcService;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 forProperties:(id)arg2 ;
-(void)addPropertiesForNotification:(id)arg1 ;
-(void)removePropertiesFromNotification:(id)arg1 ;
-(void)addPropertyForNotification:(id)arg1 ;
-(void)removePropertyFromNotification:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
@end

