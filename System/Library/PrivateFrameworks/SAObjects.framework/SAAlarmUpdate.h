/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SAAlarmAlarmAction.h>

@class NSArray, NSURL, NSNumber, NSString;

@interface SAAlarmUpdate : SADomainCommand <SAAlarmAlarmAction>

@property (nonatomic,copy) NSArray * addedFrequency; 
@property (nonatomic,copy) NSURL * alarmId; 
@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
@property (nonatomic,copy) NSArray * modifications; 
@property (nonatomic,copy) NSArray * removedFrequency; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)updateWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)update;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSURL *)alarmId;
-(void)setAlarmId:(NSURL *)arg1 ;
-(NSArray *)addedFrequency;
-(void)setAddedFrequency:(NSArray *)arg1 ;
-(NSArray *)modifications;
-(void)setModifications:(NSArray *)arg1 ;
-(NSArray *)removedFrequency;
-(void)setRemovedFrequency:(NSArray *)arg1 ;
-(void)setEnabled:(NSNumber *)arg1 ;
-(NSString *)label;
-(NSNumber *)enabled;
-(void)setLabel:(NSString *)arg1 ;
-(NSNumber *)hour;
-(NSNumber *)minute;
-(void)setHour:(NSNumber *)arg1 ;
-(void)setMinute:(NSNumber *)arg1 ;
@end

