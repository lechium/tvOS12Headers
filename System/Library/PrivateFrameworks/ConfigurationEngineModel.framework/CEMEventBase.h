/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMEventBase : CEMPayloadBase {

	NSString* _payloadType;

}

@property (nonatomic,copy) NSString * payloadType;              //@synthesize payloadType=_payloadType - In the implementation block
+(id)eventForPayload:(id)arg1 error:(id*)arg2 ;
-(void)setPayloadType:(NSString *)arg1 ;
-(NSString *)payloadType;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
