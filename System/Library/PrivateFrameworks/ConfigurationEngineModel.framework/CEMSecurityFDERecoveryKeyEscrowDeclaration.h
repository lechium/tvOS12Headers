/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString;

@interface CEMSecurityFDERecoveryKeyEscrowDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadLocation;
	NSString* _payloadEncryptCertPayloadUUID;
	NSString* _payloadDeviceKey;

}

@property (nonatomic,copy) NSString * payloadLocation;                            //@synthesize payloadLocation=_payloadLocation - In the implementation block
@property (nonatomic,copy) NSString * payloadEncryptCertPayloadUUID;              //@synthesize payloadEncryptCertPayloadUUID=_payloadEncryptCertPayloadUUID - In the implementation block
@property (nonatomic,copy) NSString * payloadDeviceKey;                           //@synthesize payloadDeviceKey=_payloadDeviceKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withLocation:(id)arg2 withEncryptCertPayloadUUID:(id)arg3 withDeviceKey:(id)arg4 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withLocation:(id)arg2 withEncryptCertPayloadUUID:(id)arg3 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadLocation:(NSString *)arg1 ;
-(void)setPayloadEncryptCertPayloadUUID:(NSString *)arg1 ;
-(void)setPayloadDeviceKey:(NSString *)arg1 ;
-(NSString *)payloadLocation;
-(NSString *)payloadEncryptCertPayloadUUID;
-(NSString *)payloadDeviceKey;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

