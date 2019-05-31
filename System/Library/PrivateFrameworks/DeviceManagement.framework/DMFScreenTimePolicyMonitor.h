/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface DMFScreenTimePolicyMonitor : NSObject {

	long long _screenTimePolicy;
	NSUUID* _policyMonitorIdentifier;

}

@property (assign,nonatomic) long long screenTimePolicy;                      //@synthesize screenTimePolicy=_screenTimePolicy - In the implementation block
@property (nonatomic,readonly) NSUUID * policyMonitorIdentifier;              //@synthesize policyMonitorIdentifier=_policyMonitorIdentifier - In the implementation block
+(BOOL)automaticallyNotifiesObserversOfScreenTimePolicy;
-(NSUUID *)policyMonitorIdentifier;
-(void)_updateScreenTime;
-(void)_updateScreenTimeFromPolicies:(id)arg1 ;
-(void)setScreenTimePolicy:(long long)arg1 ;
-(BOOL)askPermissionForScreenTimeWithError:(id*)arg1 ;
-(long long)screenTimePolicy;
-(id)init;
-(void)dealloc;
@end

