/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMSecurityFirewallDeclaration_ApplicationsItem : CEMPayloadBase {

	NSString* _payloadBundleID;
	NSNumber* _payloadAllowed;

}

@property (nonatomic,copy) NSString * payloadBundleID;              //@synthesize payloadBundleID=_payloadBundleID - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowed;               //@synthesize payloadAllowed=_payloadAllowed - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithBundleID:(id)arg1 withAllowed:(id)arg2 ;
+(id)buildRequiredOnlyWithBundleID:(id)arg1 withAllowed:(id)arg2 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadBundleID:(NSString *)arg1 ;
-(NSString *)payloadBundleID;
-(void)setPayloadAllowed:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowed;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
