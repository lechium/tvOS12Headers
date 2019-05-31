/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFLockDeviceRequest : DMFTaskRequest {

	NSString* _message;
	NSString* _phoneNumber;
	NSString* _pin;

}

@property (nonatomic,copy) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * pin;                      //@synthesize pin=_pin - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(void)setPin:(NSString *)arg1 ;
-(NSString *)pin;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
@end

