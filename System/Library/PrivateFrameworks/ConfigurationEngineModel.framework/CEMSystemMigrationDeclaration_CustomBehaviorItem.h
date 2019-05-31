/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSArray;

@interface CEMSystemMigrationDeclaration_CustomBehaviorItem : CEMPayloadBase {

	NSString* _payloadContext;
	NSArray* _payloadPaths;

}

@property (nonatomic,copy) NSString * payloadContext;              //@synthesize payloadContext=_payloadContext - In the implementation block
@property (nonatomic,copy) NSArray * payloadPaths;                 //@synthesize payloadPaths=_payloadPaths - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithContext:(id)arg1 withPaths:(id)arg2 ;
+(id)buildRequiredOnlyWithContext:(id)arg1 withPaths:(id)arg2 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadContext:(NSString *)arg1 ;
-(void)setPayloadPaths:(NSArray *)arg1 ;
-(NSString *)payloadContext;
-(NSArray *)payloadPaths;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

