/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFAppRequest.h>

@class NSString;

@interface DMFSetAppVPNUUIDRequest : DMFAppRequest {

	NSString* _UUIDString;

}

@property (nonatomic,copy) NSString * UUIDString;              //@synthesize UUIDString=_UUIDString - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
-(void)setUUIDString:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)UUIDString;
@end

