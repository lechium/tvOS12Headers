/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMDAppleAccountSettings : HMFObject <HMFLogging>

@property (getter=isKeychainSyncEnabled) BOOL keychainSyncEnabled; 
@property (getter=isHomeEnabled,readonly) BOOL homeEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsCloudSettings;
+(id)sharedSettings;
-(id)attributeDescriptions;
-(BOOL)isHomeEnabled;
-(BOOL)isKeychainSyncEnabled;
-(void)enableHome:(BOOL)arg1 userInitiated:(BOOL)arg2 ;
-(void)_notifyClientsOfUpdatedHomeState:(BOOL)arg1 userInitiated:(BOOL)arg2 ;
-(void)setKeychainSyncEnabled:(BOOL)arg1 ;
-(void)_notifyClientsOfUpdatedKeychainSyncState:(BOOL)arg1 ;
-(void)__synchronize;
-(void)__registerForKeychainChangeNotifications;
-(void)__migrateHomePreferences;
-(void)updateHomeEnabled:(BOOL)arg1 userInitiated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)__updateHomeEnabled:(BOOL)arg1 userInitiated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)synchronize;
@end
