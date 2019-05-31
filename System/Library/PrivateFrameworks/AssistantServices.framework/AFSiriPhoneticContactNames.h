/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AFSiriPhoneticContactNames : NSObject {

	NSString* _givenName;
	NSString* _middleName;
	NSString* _familyName;
	NSString* _nickname;
	NSString* _organizationName;
	NSString* _languageCode;

}

@property (nonatomic,copy) NSString * givenName;                     //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * middleName;                    //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                    //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * nickname;                      //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,copy) NSString * organizationName;              //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                  //@synthesize languageCode=_languageCode - In the implementation block
-(id)spokenName;
-(NSString *)organizationName;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setFamilyName:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(NSString *)givenName;
-(NSString *)middleName;
-(NSString *)nickname;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)familyName;
@end
