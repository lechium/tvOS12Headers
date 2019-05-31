/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSArray, NSDictionary, NSNumber;

@interface MCLDAPAccountPayload : MCPayload {

	NSString* _accountDescription;
	NSString* _hostname;
	NSString* _username;
	NSString* _password;
	BOOL _useSSL;
	NSArray* _searchSettings;
	NSString* _accountPersistentUUID;
	NSDictionary* _communicationServiceRules;
	NSNumber* _useSSLNum;

}

@property (nonatomic,readonly) NSNumber * useSSLNum;                                  //@synthesize useSSLNum=_useSSLNum - In the implementation block
@property (nonatomic,retain,readonly) NSString * accountDescription;                  //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain,readonly) NSString * hostname;                            //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,retain) NSString * username;                                     //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                                     //@synthesize password=_password - In the implementation block
@property (nonatomic,retain,readonly) NSArray * searchSettings;                       //@synthesize searchSettings=_searchSettings - In the implementation block
@property (nonatomic,readonly) BOOL useSSL;                                           //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,readonly) NSDictionary * communicationServiceRules;              //@synthesize communicationServiceRules=_communicationServiceRules - In the implementation block
@property (nonatomic,copy) NSString * accountPersistentUUID;                          //@synthesize accountPersistentUUID=_accountPersistentUUID - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(BOOL)containsSensitiveUserInformation;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(NSDictionary *)communicationServiceRules;
-(NSString *)accountPersistentUUID;
-(void)setAccountPersistentUUID:(NSString *)arg1 ;
-(NSNumber *)useSSLNum;
-(NSArray *)searchSettings;
-(NSString *)hostname;
-(id)restrictions;
-(NSString *)accountDescription;
-(BOOL)useSSL;
-(void)setUsername:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(id)description;
-(id)title;
-(NSString *)username;
-(NSString *)password;
@end

