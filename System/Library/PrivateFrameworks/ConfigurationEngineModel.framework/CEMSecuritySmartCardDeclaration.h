/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMSecuritySmartCardDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadUserPairing;
	NSNumber* _payloadAllowSmartCard;
	NSNumber* _payloadCheckCertificateTrust;
	NSNumber* _payloadOneCardPerUser;
	NSNumber* _payloadTokenRemovalAction;
	NSNumber* _payloadEnforceSmartCard;

}

@property (nonatomic,copy) NSNumber * payloadUserPairing;                        //@synthesize payloadUserPairing=_payloadUserPairing - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowSmartCard;                     //@synthesize payloadAllowSmartCard=_payloadAllowSmartCard - In the implementation block
@property (nonatomic,copy) NSNumber * payloadCheckCertificateTrust;              //@synthesize payloadCheckCertificateTrust=_payloadCheckCertificateTrust - In the implementation block
@property (nonatomic,copy) NSNumber * payloadOneCardPerUser;                     //@synthesize payloadOneCardPerUser=_payloadOneCardPerUser - In the implementation block
@property (nonatomic,copy) NSNumber * payloadTokenRemovalAction;                 //@synthesize payloadTokenRemovalAction=_payloadTokenRemovalAction - In the implementation block
@property (nonatomic,copy) NSNumber * payloadEnforceSmartCard;                   //@synthesize payloadEnforceSmartCard=_payloadEnforceSmartCard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withUserPairing:(id)arg2 withAllowSmartCard:(id)arg3 withCheckCertificateTrust:(id)arg4 withOneCardPerUser:(id)arg5 withTokenRemovalAction:(id)arg6 withEnforceSmartCard:(id)arg7 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadUserPairing:(NSNumber *)arg1 ;
-(void)setPayloadAllowSmartCard:(NSNumber *)arg1 ;
-(void)setPayloadCheckCertificateTrust:(NSNumber *)arg1 ;
-(void)setPayloadOneCardPerUser:(NSNumber *)arg1 ;
-(void)setPayloadTokenRemovalAction:(NSNumber *)arg1 ;
-(void)setPayloadEnforceSmartCard:(NSNumber *)arg1 ;
-(NSNumber *)payloadUserPairing;
-(NSNumber *)payloadAllowSmartCard;
-(NSNumber *)payloadCheckCertificateTrust;
-(NSNumber *)payloadOneCardPerUser;
-(NSNumber *)payloadTokenRemovalAction;
-(NSNumber *)payloadEnforceSmartCard;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

