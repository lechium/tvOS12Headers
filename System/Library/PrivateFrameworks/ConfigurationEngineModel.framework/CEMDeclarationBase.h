/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber, CEMAnyPayload;

@interface CEMDeclarationBase : CEMPayloadBase {

	NSString* _declarationType;
	NSString* _declarationIdentifier;
	NSString* _declarationDescription;
	NSString* _declarationServerHash;
	NSNumber* _declarationRequiresNetworkTether;
	NSString* _declarationActivationScope;
	CEMAnyPayload* _declarationPayload;

}

@property (nonatomic,copy) NSString * declarationType;                               //@synthesize declarationType=_declarationType - In the implementation block
@property (nonatomic,copy) NSString * declarationIdentifier;                         //@synthesize declarationIdentifier=_declarationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * declarationDescription;                        //@synthesize declarationDescription=_declarationDescription - In the implementation block
@property (nonatomic,copy) NSString * declarationServerHash;                         //@synthesize declarationServerHash=_declarationServerHash - In the implementation block
@property (nonatomic,copy) NSNumber * declarationRequiresNetworkTether;              //@synthesize declarationRequiresNetworkTether=_declarationRequiresNetworkTether - In the implementation block
@property (nonatomic,copy) NSString * declarationActivationScope;                    //@synthesize declarationActivationScope=_declarationActivationScope - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * declarationPayload;                       //@synthesize declarationPayload=_declarationPayload - In the implementation block
+(id)declarationClass;
+(id)declarationForPayload:(id)arg1 error:(id*)arg2 ;
+(id)declarationForData:(id)arg1 error:(id*)arg2 ;
-(id)serialize;
-(void)setDeclarationType:(NSString *)arg1 ;
-(void)setDeclarationIdentifier:(NSString *)arg1 ;
-(void)updateServerHash;
-(id)serializeAsDataWithError:(id*)arg1 ;
-(NSString *)declarationType;
-(NSString *)declarationIdentifier;
-(BOOL)loadDeclarationFromDictionary:(id)arg1 error:(id*)arg2 ;
-(NSString *)declarationDescription;
-(void)setDeclarationDescription:(NSString *)arg1 ;
-(NSString *)declarationServerHash;
-(void)setDeclarationServerHash:(NSString *)arg1 ;
-(NSNumber *)declarationRequiresNetworkTether;
-(void)setDeclarationRequiresNetworkTether:(NSNumber *)arg1 ;
-(NSString *)declarationActivationScope;
-(void)setDeclarationActivationScope:(NSString *)arg1 ;
-(CEMAnyPayload *)declarationPayload;
-(void)setDeclarationPayload:(CEMAnyPayload *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

