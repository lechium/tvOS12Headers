/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSUUID, NSNumber, NSDate, NSString, RMCoreUser, RMFamilyOrganization;

@interface RMAskForTimeRequestResponse : NSManagedObject

@property (nonatomic,retain) NSUUID * identifier; 
@property (nonatomic,retain) NSNumber * timeRequested; 
@property (assign,nonatomic) long long usageType; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * requestedApplicationBundleIdentifier; 
@property (nonatomic,copy) NSString * requestedCategoryIdentifier; 
@property (nonatomic,copy) NSString * requestedWebDomain; 
@property (nonatomic,retain) RMCoreUser * requestingUser; 
@property (nonatomic,retain) NSDate * requestTimeStamp; 
@property (nonatomic,retain) NSNumber * amountGranted; 
@property (nonatomic,retain) NSNumber * answer; 
@property (nonatomic,retain) NSDate * responseTimeStamp; 
@property (nonatomic,retain) RMCoreUser * respondingUser; 
@property (nonatomic,retain) RMFamilyOrganization * familyOrganization; 
+(id)_fetchPredicateForAskForTimeRequest:(id)arg1 requestingUserDSID:(id)arg2 ;
+(id)upsertAskForTimeRequest:(id)arg1 fromUser:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(void)awakeFromInsert;
@end

