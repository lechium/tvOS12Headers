/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSDictionary;

@interface IDSMessage : IDSBaseMessage <NSCopying> {

	NSNumber* _wantsDeliveryStatus;
	NSDictionary* _deliveryStatusContext;
	NSNumber* _version;

}

@property (copy) NSNumber * wantsDeliveryStatus;                    //@synthesize wantsDeliveryStatus=_wantsDeliveryStatus - In the implementation block
@property (copy) NSDictionary * deliveryStatusContext;              //@synthesize deliveryStatusContext=_deliveryStatusContext - In the implementation block
@property (copy) NSNumber * version;                                //@synthesize version=_version - In the implementation block
-(id)messageBody;
-(NSNumber *)wantsDeliveryStatus;
-(void)setWantsDeliveryStatus:(NSNumber *)arg1 ;
-(NSDictionary *)deliveryStatusContext;
-(void)setDeliveryStatusContext:(NSDictionary *)arg1 ;
-(BOOL)wantsAPSRetries;
-(BOOL)wantsHTTPHeaders;
-(id)userAgentHeaderString;
-(BOOL)wantsUserAgentInHeaders;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
@end

