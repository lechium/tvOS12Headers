/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, RMUser, NSSet;

@interface RMManagementSettings : NSManagedObject

@property (assign,nonatomic) BOOL isScreenTimeEnabled; 
@property (assign,nonatomic) BOOL isScreenTimeCloudSyncEnabled; 
@property (assign,nonatomic) BOOL isContentAndPrivacyEnabled; 
@property (assign,nonatomic) BOOL isContentAndPrivacyCloudSyncEnabled; 
@property (assign,nonatomic) BOOL isPreviouslyEnabled; 
@property (nonatomic,copy) NSString * passcode; 
@property (nonatomic,retain) RMUser * user; 
@property (nonatomic,retain) NSSet * userDevicePairs; 
+(id)fetchManagementSettingsForLocalUserForOrganization:(id)arg1 ;
+(id)fetchRequestMatchingManagementSettingsForLocalUserAndDeviceForOrganization:(id)arg1 ;
-(void)setIsScreenTimeEnabled:(BOOL)arg1 ;
-(void)setIsContentAndPrivacyEnabled:(BOOL)arg1 ;
@end

