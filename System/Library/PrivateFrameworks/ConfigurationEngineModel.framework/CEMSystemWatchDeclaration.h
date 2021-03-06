/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMSystemWatchDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadForceWatchWristDetection;
	NSNumber* _payloadAllowPairedWatch;

}

@property (nonatomic,copy) NSNumber * payloadForceWatchWristDetection;              //@synthesize payloadForceWatchWristDetection=_payloadForceWatchWristDetection - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowPairedWatch;                      //@synthesize payloadAllowPairedWatch=_payloadAllowPairedWatch - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withForceWatchWristDetection:(id)arg2 withAllowPairedWatch:(id)arg3 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadForceWatchWristDetection:(NSNumber *)arg1 ;
-(void)setPayloadAllowPairedWatch:(NSNumber *)arg1 ;
-(NSNumber *)payloadForceWatchWristDetection;
-(NSNumber *)payloadAllowPairedWatch;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

