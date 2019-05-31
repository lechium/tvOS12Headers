/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FTServices/FTServices-Structs.h>
@class NSDictionary;

@interface FTEntitlementSupport : NSObject {

	CTServerConnectionRef _ctServerConnection;
	CFStringRef _entitlementStatus;

}

@property (nonatomic,readonly) BOOL faceTimeNonWiFiEntitled; 
@property (nonatomic,readonly) NSDictionary * registrationState; 
+(id)sharedInstance;
-(BOOL)_setupCTServerConnection;
-(BOOL)faceTimeNonWiFiEntitled;
-(NSDictionary *)registrationState;
-(void)_updateEntitlementStatusUsingCTEntitlementsInfo:(CFDictionaryRef)arg1 ;
-(void)_cleanupMachInfo;
-(BOOL)_registerForCTEntitlementNotifications;
-(void)_unregisterForCTEntitlementNotifications;
-(void)_entitlementStatusChanged;
-(BOOL)_disconnectCTServerConnection;
-(BOOL)_reconnectCTServerConnectionIfNecessary;
-(id)_rawEntitlementValue;
-(void)_handleCTServiceRequestName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 contextInfo:(void*)arg3 ;
-(id)init;
@end

