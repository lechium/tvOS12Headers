/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, RMUsageBlock;

@interface RMUsageCountedItem : NSManagedObject

@property (nonatomic,retain) NSString * bundleIdentifier; 
@property (assign,nonatomic) long long numberOfPickups; 
@property (assign,nonatomic) long long numberOfNotifications; 
@property (nonatomic,retain) RMUsageBlock * block; 
@end

