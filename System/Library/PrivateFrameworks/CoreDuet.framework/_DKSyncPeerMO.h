/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID;

@interface _DKSyncPeerMO : NSManagedObject

@property (nonatomic,copy) NSString * cloudID; 
@property (nonatomic,copy) NSString * deviceID; 
@property (nonatomic,copy) NSString * rapportID; 
@property (nonatomic,copy) NSUUID * uuid; 
+(id)fetchRequest;
@end

