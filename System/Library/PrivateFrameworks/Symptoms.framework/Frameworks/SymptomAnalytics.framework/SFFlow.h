/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSNumber, NSSet, SFNetworkAttachment;

@interface SFFlow : NSManagedObject

@property (nonatomic,copy) NSDate * firstTimeStamp; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSNumber * kind; 
@property (nonatomic,copy) NSString * remoteID; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,retain) NSSet * hasLivePerformance; 
@property (nonatomic,retain) SFNetworkAttachment * onNetwork; 
+(id)fetchRequest;
+(id)entityName;
@end

