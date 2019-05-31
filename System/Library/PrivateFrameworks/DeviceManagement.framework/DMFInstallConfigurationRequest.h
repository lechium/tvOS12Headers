/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSDictionary;

@interface DMFInstallConfigurationRequest : DMFTaskRequest {

	unsigned long long _type;
	NSString* _managingProfileIdentifier;
	NSDictionary* _profile;

}

@property (assign,nonatomic) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * managingProfileIdentifier;              //@synthesize managingProfileIdentifier=_managingProfileIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * profile;                            //@synthesize profile=_profile - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
-(void)setProfile:(NSDictionary *)arg1 ;
-(NSString *)managingProfileIdentifier;
-(void)setManagingProfileIdentifier:(NSString *)arg1 ;
-(NSDictionary *)profile;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
@end

