/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject {

	SCDynamicStoreRef _dynamicStore;
	CFRunLoopSourceRef _dynamicStoreSource;

}
+(id)sharedManager;
-(id)ethernetNetworkInterfaces;
-(BOOL)hasEthernetNetworkInterfaces;
-(BOOL)isHiddenEthernetInterface:(SCNetworkInterfaceRef)arg1 ;
-(void)registerForEthernetAdapterNotifications;
-(void)ethernetDynamicStoreDidChange;
-(id)init;
-(void)dealloc;
@end

