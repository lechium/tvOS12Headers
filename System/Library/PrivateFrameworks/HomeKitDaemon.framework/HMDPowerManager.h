/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HMDPowerManager : HMFObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _networkInterfaceActive;
	BOOL _networkAccessRequired;
	unsigned _powerAssertion;
	SCDynamicStoreRef _scStore;
	void* _scContext;
	BOOL _started;

}

@property (assign,getter=isNetworkAccessRequired,nonatomic) BOOL networkAccessRequired;              //@synthesize networkAccessRequired=_networkAccessRequired - In the implementation block
-(int)_ensureNetworkInterfaceMonitorStarted;
-(void)_ensureNetworkInterfaceMonitorStopped;
-(void)setNetworkAccessRequired:(BOOL)arg1 ;
-(BOOL)isNetworkAccessRequired;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)_update;
@end

