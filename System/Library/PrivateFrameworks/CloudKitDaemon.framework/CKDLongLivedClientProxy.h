/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDClientProxy.h>

@interface CKDLongLivedClientProxy : CKDClientProxy
+(id)longLivedProxyWithContext:(id)arg1 ;
+(void)clearCachedLongLivedProxies;
+(id)sharedLongLivedProxies;
+(id)_sharedLongLivedProxyForContext:(id)arg1 ;
-(id)sourceApplicationBundleIdentifier;
-(BOOL)hasOutOfProcessUIEntitlement;
-(BOOL)hasParticipantPIIEntitlement;
-(id)CKPropertiesDescription;
-(id)initWithClientContext:(id)arg1 ;
-(void)addOperationWithOperationInfo:(id)arg1 ;
-(BOOL)hasAllowAccessDuringBuddyEntitlement;
-(BOOL)hasMasqueradingEntitlement;
-(id)_clientPrefixEntitlement;
-(BOOL)isLongLived;
-(void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2 ;
-(void)_handleCompletionForOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)_hasCustomAccountsEntitlement;
-(BOOL)_hasEnvironmentEntitlement;
-(BOOL)hasTCCAuthorization;
-(BOOL)hasProtectionDataEntitlement;
-(BOOL)hasZoneProtectionDataEntitlement;
-(BOOL)hasDeviceIdentifierEntitlement;
-(BOOL)hasCloudKitSystemServiceEntitlement;
-(BOOL)hasDarkWakeNetworkReachabilityEnabledEntitlement;
-(BOOL)hasLightweightPCSEntitlement;
-(BOOL)hasDisplaysSystemAcceptPromptEntitlement;
-(BOOL)hasNonLegacyShareURLEntitlement;
-(id)serviceNameForContainerMapEntitlement;
-(id)apsEnvironmentEntitlement;
-(BOOL)darkWakeEnabledEntitlement;
-(id)bundleIdentifier;
-(id)description;
-(id)applicationIdentifier;
@end

