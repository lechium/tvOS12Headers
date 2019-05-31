/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFUpdateAppRequest.h>

@class NSString, NSDictionary;

@interface DMFMDMv1UpdateAppRequest : DMFUpdateAppRequest {

	NSString* _originator;
	unsigned long long _managementOptions;
	NSString* _VPNUUIDString;
	NSDictionary* _configuration;

}

@property (nonatomic,copy) NSString * originator;                               //@synthesize originator=_originator - In the implementation block
@property (assign,nonatomic) unsigned long long managementOptions;              //@synthesize managementOptions=_managementOptions - In the implementation block
@property (nonatomic,copy) NSString * VPNUUIDString;                            //@synthesize VPNUUIDString=_VPNUUIDString - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;                        //@synthesize configuration=_configuration - In the implementation block
+(Class)whitelistedClassForResultObject;
+(BOOL)supportsSecureCoding;
-(NSString *)VPNUUIDString;
-(void)setVPNUUIDString:(NSString *)arg1 ;
-(unsigned long long)managementOptions;
-(void)setManagementOptions:(unsigned long long)arg1 ;
-(NSString *)originator;
-(void)setOriginator:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)configuration;
-(void)setConfiguration:(NSDictionary *)arg1 ;
@end

