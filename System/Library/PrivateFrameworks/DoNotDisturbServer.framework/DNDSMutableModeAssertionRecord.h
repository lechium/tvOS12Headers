/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSModeAssertionRecord.h>

@class NSString, NSNumber;

@interface DNDSMutableModeAssertionRecord : DNDSModeAssertionRecord

@property (nonatomic,copy) NSString * assertionUUID; 
@property (nonatomic,copy) NSNumber * assertionStartDateTimestamp; 
@property (nonatomic,copy) NSString * assertionClientIdentifier; 
@property (nonatomic,copy) NSString * assertionDetailsIdentifier; 
@property (nonatomic,copy) NSString * assertionDetailsModeIdentifier; 
@property (nonatomic,copy) NSNumber * assertionDetailsUserRequested; 
@property (nonatomic,copy) NSNumber * assertionDetailsSyncSuppressionOptions; 
@property (nonatomic,copy) NSString * assertionDetailsLifetimeType; 
@property (nonatomic,copy) NSString * assertionDetailsCalendarEventLifetimeEventUniqueIdentifier; 
@property (nonatomic,copy) NSNumber * assertionDetailsCalendarEventLifetimeOccurrenceDateTimestamp; 
@property (nonatomic,copy) NSNumber * assertionDetailsCalendarEventLifetimeOnlyDuringEvent; 
@property (nonatomic,copy) NSNumber * assertionDetailsDateIntervalLifetimeStartDateTimestamp; 
@property (nonatomic,copy) NSNumber * assertionDetailsDateIntervalLifetimeEndDateTimestamp; 
-(void)setAssertionClientIdentifier:(NSString *)arg1 ;
-(void)setAssertionUUID:(NSString *)arg1 ;
-(void)setAssertionStartDateTimestamp:(NSNumber *)arg1 ;
-(void)setAssertionDetailsIdentifier:(NSString *)arg1 ;
-(void)setAssertionDetailsModeIdentifier:(NSString *)arg1 ;
-(void)setAssertionDetailsUserRequested:(NSNumber *)arg1 ;
-(void)setAssertionDetailsSyncSuppressionOptions:(NSNumber *)arg1 ;
-(void)setAssertionDetailsLifetimeType:(NSString *)arg1 ;
-(void)setAssertionDetailsCalendarEventLifetimeEventUniqueIdentifier:(NSString *)arg1 ;
-(void)setAssertionDetailsCalendarEventLifetimeOccurrenceDateTimestamp:(NSNumber *)arg1 ;
-(void)setAssertionDetailsCalendarEventLifetimeOnlyDuringEvent:(NSNumber *)arg1 ;
-(void)setAssertionDetailsDateIntervalLifetimeStartDateTimestamp:(NSNumber *)arg1 ;
-(void)setAssertionDetailsDateIntervalLifetimeEndDateTimestamp:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
