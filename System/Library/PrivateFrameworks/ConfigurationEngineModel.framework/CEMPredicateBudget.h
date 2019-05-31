/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPredicateBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSArray;

@interface CEMPredicateBudget : CEMPredicateBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadCalendarIdentifier;
	NSString* _payloadMonitor;
	NSArray* _payloadIdentifiers;
	NSArray* _payloadNotificationTimes;
	NSArray* _payloadTimeBudget;

}

@property (nonatomic,copy) NSString * payloadCalendarIdentifier;              //@synthesize payloadCalendarIdentifier=_payloadCalendarIdentifier - In the implementation block
@property (nonatomic,copy) NSString * payloadMonitor;                         //@synthesize payloadMonitor=_payloadMonitor - In the implementation block
@property (nonatomic,copy) NSArray * payloadIdentifiers;                      //@synthesize payloadIdentifiers=_payloadIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * payloadNotificationTimes;                //@synthesize payloadNotificationTimes=_payloadNotificationTimes - In the implementation block
@property (nonatomic,copy) NSArray * payloadTimeBudget;                       //@synthesize payloadTimeBudget=_payloadTimeBudget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithCalendarIdentifier:(id)arg1 withMonitor:(id)arg2 withIdentifiers:(id)arg3 withNotificationTimes:(id)arg4 withTimeBudget:(id)arg5 ;
+(id)buildRequiredOnlyWithMonitor:(id)arg1 withTimeBudget:(id)arg2 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadIdentifiers:(NSArray *)arg1 ;
-(NSArray *)payloadIdentifiers;
-(void)setPayloadCalendarIdentifier:(NSString *)arg1 ;
-(void)setPayloadMonitor:(NSString *)arg1 ;
-(void)setPayloadNotificationTimes:(NSArray *)arg1 ;
-(void)setPayloadTimeBudget:(NSArray *)arg1 ;
-(NSString *)payloadCalendarIdentifier;
-(NSString *)payloadMonitor;
-(NSArray *)payloadNotificationTimes;
-(NSArray *)payloadTimeBudget;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

