/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/RMSerializableManagedObject.h>
#import <libobjc.A.dylib/RMSyncableSubObject.h>

@class RMBlueprint, NSString, NSArray, NSNumber;

@interface RMBlueprintUsageLimit : NSManagedObject <RMSerializableManagedObject, RMSyncableSubObject>

@property (assign,nonatomic) double day0Limit; 
@property (assign,nonatomic) double day1Limit; 
@property (assign,nonatomic) double day2Limit; 
@property (assign,nonatomic) double day3Limit; 
@property (assign,nonatomic) double day4Limit; 
@property (assign,nonatomic) double day5Limit; 
@property (assign,nonatomic) double day6Limit; 
@property (nonatomic,readonly) RMBlueprint * blueprint; 
@property (nonatomic,copy) NSString * usageItemType; 
@property (nonatomic,copy) NSArray * itemIdentifiers; 
@property (nonatomic,retain) NSNumber * notificationTimeInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)limitKeyPaths;
-(id)budgetLimitScheduleRepresentation;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)syncableRootObject;
-(void)setBudgetLimit:(double)arg1 ;
-(void)setBudgetLimit:(double)arg1 forDay:(unsigned long long)arg2 ;
-(id)dictionaryRepresentation;
@end

