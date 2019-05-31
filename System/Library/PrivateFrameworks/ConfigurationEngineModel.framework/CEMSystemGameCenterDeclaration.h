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

@interface CEMSystemGameCenterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowGameCenter;
	NSNumber* _payloadAllowMultiplayerGaming;
	NSNumber* _payloadAllowAddingGameCenterFriends;

}

@property (nonatomic,copy) NSNumber * payloadAllowGameCenter;                           //@synthesize payloadAllowGameCenter=_payloadAllowGameCenter - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowMultiplayerGaming;                    //@synthesize payloadAllowMultiplayerGaming=_payloadAllowMultiplayerGaming - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAddingGameCenterFriends;              //@synthesize payloadAllowAddingGameCenterFriends=_payloadAllowAddingGameCenterFriends - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withAllowGameCenter:(id)arg2 withAllowMultiplayerGaming:(id)arg3 withAllowAddingGameCenterFriends:(id)arg4 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowGameCenter:(NSNumber *)arg1 ;
-(void)setPayloadAllowMultiplayerGaming:(NSNumber *)arg1 ;
-(void)setPayloadAllowAddingGameCenterFriends:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowGameCenter;
-(NSNumber *)payloadAllowMultiplayerGaming;
-(NSNumber *)payloadAllowAddingGameCenterFriends;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

