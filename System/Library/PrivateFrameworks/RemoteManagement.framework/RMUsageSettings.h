/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class RMUser, NSSet;

@interface RMUsageSettings : NSManagedObject

@property (assign,nonatomic) BOOL isEnabled; 
@property (assign,nonatomic) BOOL shareWebUsage; 
@property (nonatomic,retain) RMUser * user; 
@property (nonatomic,retain) NSSet * userDevicePairs; 
+(id)fetchRequestMatchingUsageSettingsForLocalUserAndDeviceForOrganization:(id)arg1 ;
@end

