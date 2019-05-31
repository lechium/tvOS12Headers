/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMAccountSubscribedCalendarDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadSubCalAccountDescription;
	NSString* _payloadSubCalAccountHostName;
	NSNumber* _payloadSubCalAccountUseSSL;
	NSString* _payloadSubCalAccountCredentials;

}

@property (nonatomic,copy) NSString * payloadSubCalAccountDescription;              //@synthesize payloadSubCalAccountDescription=_payloadSubCalAccountDescription - In the implementation block
@property (nonatomic,copy) NSString * payloadSubCalAccountHostName;                 //@synthesize payloadSubCalAccountHostName=_payloadSubCalAccountHostName - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSubCalAccountUseSSL;                   //@synthesize payloadSubCalAccountUseSSL=_payloadSubCalAccountUseSSL - In the implementation block
@property (nonatomic,copy) NSString * payloadSubCalAccountCredentials;              //@synthesize payloadSubCalAccountCredentials=_payloadSubCalAccountCredentials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withSubCalAccountDescription:(id)arg2 withSubCalAccountHostName:(id)arg3 withSubCalAccountUseSSL:(id)arg4 withSubCalAccountCredentials:(id)arg5 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withSubCalAccountHostName:(id)arg2 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(NSString *)payloadSubCalAccountCredentials;
-(void)setPayloadSubCalAccountDescription:(NSString *)arg1 ;
-(void)setPayloadSubCalAccountHostName:(NSString *)arg1 ;
-(void)setPayloadSubCalAccountUseSSL:(NSNumber *)arg1 ;
-(void)setPayloadSubCalAccountCredentials:(NSString *)arg1 ;
-(NSString *)payloadSubCalAccountDescription;
-(NSString *)payloadSubCalAccountHostName;
-(NSNumber *)payloadSubCalAccountUseSSL;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

