/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAccountLDAPDeclaration_CommunicationServiceRulesDefaultServiceHandlers;

@interface CEMAccountLDAPDeclaration_CommunicationServiceRules : CEMPayloadBase {

	CEMAccountLDAPDeclaration_CommunicationServiceRulesDefaultServiceHandlers* _payloadDefaultServiceHandlers;

}

@property (nonatomic,copy) CEMAccountLDAPDeclaration_CommunicationServiceRulesDefaultServiceHandlers * payloadDefaultServiceHandlers;              //@synthesize payloadDefaultServiceHandlers=_payloadDefaultServiceHandlers - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithDefaultServiceHandlers:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDefaultServiceHandlers:(CEMAccountLDAPDeclaration_CommunicationServiceRulesDefaultServiceHandlers *)arg1 ;
-(CEMAccountLDAPDeclaration_CommunicationServiceRulesDefaultServiceHandlers *)payloadDefaultServiceHandlers;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
