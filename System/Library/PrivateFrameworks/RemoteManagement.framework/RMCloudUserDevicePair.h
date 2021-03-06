/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMUniquedManagedObject.h>
#import <libobjc.A.dylib/RMReconcilableObject.h>

@class NSString, NSData, NSUUID, RMCloudDevice, RMCloudUser;

@interface RMCloudUserDevicePair : RMUniquedManagedObject <RMReconcilableObject>

@property (nonatomic,copy) NSString * altURI; 
@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (nonatomic,copy) NSUUID * sortKey; 
@property (nonatomic,copy) NSString * uri; 
@property (nonatomic,retain) RMCloudDevice * sourceDevice; 
@property (nonatomic,retain) RMCloudUser * sourceUser; 
+(id)fetchRequest;
+(BOOL)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id*)arg3 ;
-(void)setUri:(NSString *)arg1 ;
-(id)computeUniqueIdentifier;
@end

