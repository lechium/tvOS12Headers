/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMAccountLDAPDeclaration_LDAPSearchSettingsItem : CEMPayloadBase {

	NSString* _payloadLDAPSearchSettingDescription;
	NSString* _payloadLDAPSearchSettingSearchBase;
	NSString* _payloadLDAPSearchSettingScope;

}

@property (nonatomic,copy) NSString * payloadLDAPSearchSettingDescription;              //@synthesize payloadLDAPSearchSettingDescription=_payloadLDAPSearchSettingDescription - In the implementation block
@property (nonatomic,copy) NSString * payloadLDAPSearchSettingSearchBase;               //@synthesize payloadLDAPSearchSettingSearchBase=_payloadLDAPSearchSettingSearchBase - In the implementation block
@property (nonatomic,copy) NSString * payloadLDAPSearchSettingScope;                    //@synthesize payloadLDAPSearchSettingScope=_payloadLDAPSearchSettingScope - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithLDAPSearchSettingDescription:(id)arg1 withLDAPSearchSettingSearchBase:(id)arg2 withLDAPSearchSettingScope:(id)arg3 ;
+(id)buildRequiredOnlyWithLDAPSearchSettingSearchBase:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadLDAPSearchSettingDescription:(NSString *)arg1 ;
-(void)setPayloadLDAPSearchSettingSearchBase:(NSString *)arg1 ;
-(void)setPayloadLDAPSearchSettingScope:(NSString *)arg1 ;
-(NSString *)payloadLDAPSearchSettingDescription;
-(NSString *)payloadLDAPSearchSettingSearchBase;
-(NSString *)payloadLDAPSearchSettingScope;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

