/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMEventSubscriptionDeclaration_Schedule : CEMPayloadBase {

	NSString* _payloadFrequency;
	NSString* _payloadLocalTime;
	NSNumber* _payloadSpread;
	NSNumber* _payloadDay;

}

@property (nonatomic,copy) NSString * payloadFrequency;              //@synthesize payloadFrequency=_payloadFrequency - In the implementation block
@property (nonatomic,copy) NSString * payloadLocalTime;              //@synthesize payloadLocalTime=_payloadLocalTime - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSpread;                 //@synthesize payloadSpread=_payloadSpread - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDay;                    //@synthesize payloadDay=_payloadDay - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithFrequency:(id)arg1 withLocalTime:(id)arg2 withSpread:(id)arg3 withDay:(id)arg4 ;
+(id)buildRequiredOnlyWithFrequency:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadFrequency:(NSString *)arg1 ;
-(void)setPayloadLocalTime:(NSString *)arg1 ;
-(void)setPayloadSpread:(NSNumber *)arg1 ;
-(void)setPayloadDay:(NSNumber *)arg1 ;
-(NSString *)payloadFrequency;
-(NSString *)payloadLocalTime;
-(NSNumber *)payloadSpread;
-(NSNumber *)payloadDay;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

