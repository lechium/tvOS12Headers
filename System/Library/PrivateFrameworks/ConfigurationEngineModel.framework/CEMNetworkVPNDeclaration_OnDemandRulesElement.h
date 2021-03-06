/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface CEMNetworkVPNDeclaration_OnDemandRulesElement : CEMPayloadBase {

	NSArray* _payloadDNSDomainMatch;
	NSArray* _payloadDNSServerAddressMatch;
	NSString* _payloadURLStringProbe;
	NSString* _payloadAction;

}

@property (nonatomic,copy) NSArray * payloadDNSDomainMatch;                     //@synthesize payloadDNSDomainMatch=_payloadDNSDomainMatch - In the implementation block
@property (nonatomic,copy) NSArray * payloadDNSServerAddressMatch;              //@synthesize payloadDNSServerAddressMatch=_payloadDNSServerAddressMatch - In the implementation block
@property (nonatomic,copy) NSString * payloadURLStringProbe;                    //@synthesize payloadURLStringProbe=_payloadURLStringProbe - In the implementation block
@property (nonatomic,copy) NSString * payloadAction;                            //@synthesize payloadAction=_payloadAction - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithDNSDomainMatch:(id)arg1 withDNSServerAddressMatch:(id)arg2 withURLStringProbe:(id)arg3 withAction:(id)arg4 ;
+(id)buildRequiredOnlyWithAction:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDNSDomainMatch:(NSArray *)arg1 ;
-(void)setPayloadDNSServerAddressMatch:(NSArray *)arg1 ;
-(void)setPayloadURLStringProbe:(NSString *)arg1 ;
-(void)setPayloadAction:(NSString *)arg1 ;
-(NSArray *)payloadDNSDomainMatch;
-(NSArray *)payloadDNSServerAddressMatch;
-(NSString *)payloadURLStringProbe;
-(NSString *)payloadAction;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

