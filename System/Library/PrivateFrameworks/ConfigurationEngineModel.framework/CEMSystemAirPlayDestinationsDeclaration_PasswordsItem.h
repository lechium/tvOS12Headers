/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemAirPlayDestinationsDeclaration_PasswordsItem : CEMPayloadBase {

	NSString* _payloadDeviceName;
	NSString* _payloadPassword;
	NSString* _payloadDeviceID;

}

@property (nonatomic,copy) NSString * payloadDeviceName;              //@synthesize payloadDeviceName=_payloadDeviceName - In the implementation block
@property (nonatomic,copy) NSString * payloadPassword;                //@synthesize payloadPassword=_payloadPassword - In the implementation block
@property (nonatomic,copy) NSString * payloadDeviceID;                //@synthesize payloadDeviceID=_payloadDeviceID - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithDeviceName:(id)arg1 withPassword:(id)arg2 withDeviceID:(id)arg3 ;
+(id)buildRequiredOnlyWithDeviceName:(id)arg1 withPassword:(id)arg2 withDeviceID:(id)arg3 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadPassword:(NSString *)arg1 ;
-(NSString *)payloadPassword;
-(void)setPayloadDeviceID:(NSString *)arg1 ;
-(NSString *)payloadDeviceID;
-(void)setPayloadDeviceName:(NSString *)arg1 ;
-(NSString *)payloadDeviceName;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
