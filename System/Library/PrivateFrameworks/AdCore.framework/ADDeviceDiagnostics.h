/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface ADDeviceDiagnostics : ADSingleton {

	NSObject*<OS_dispatch_queue> _notifyDispatchQueue;
	int _notifyTokenScreen;
	double _currentScreenStatusTime;
	double _previousScreenStatusTime;
	BOOL _screenStatus;
	int _notifyTokenLocked;
	double _currentLockedStatusTime;
	double _previousLockedStatusTime;
	BOOL _lockedStatus;
	int _notifyTokenACPower;
	double _currentACPowerStatusTime;
	double _previousACPowerStatusTime;
	BOOL _ACPowerStatus;
	double _currentNetworkStateChangeTime;
	double _previousNetworkStateChangeTime;
	int _currentConnectionStatus;
	int _previousConnectionStatus;
	BOOL _verbose;

}

@property (assign,nonatomic) BOOL verbose;                           //@synthesize verbose=_verbose - In the implementation block
@property (nonatomic,readonly) NSString * statusString; 
+(int)getDeviceBootTime;
+(int)getProcessStartTime;
+(id)sharedInstance;
-(BOOL)verbose;
-(void)setVerbose:(BOOL)arg1 ;
-(void)networkStateChanged;
-(NSString *)statusString;
-(void)screenStateChanged;
-(void)lockStateChanged;
-(void)powerStateChanged;
-(id)init;
@end

