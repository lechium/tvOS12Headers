/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSVPushNotificationParameters, NSString;

@interface SSVPushNotificationRequest : SSRequest <SSXPCCoding> {

	SSVPushNotificationParameters* _parameters;

}

@property (nonatomic,copy) SSVPushNotificationParameters * pushNotificationParameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithPushNotificationParameters:(id)arg1 ;
-(SSVPushNotificationParameters *)pushNotificationParameters;
-(void)setPushNotificationParameters:(SSVPushNotificationParameters *)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)start;
@end

