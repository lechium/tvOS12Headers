/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSData, VSAccountProviderResponse;

@interface VSAccountMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSString* _accountProviderIdentifier;
	NSDate* _authenticationExpirationDate;
	NSData* _verificationData;
	VSAccountProviderResponse* _accountProviderResponse;

}

@property (nonatomic,copy) NSString * accountProviderIdentifier;                               //@synthesize accountProviderIdentifier=_accountProviderIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * authenticationExpirationDate;                              //@synthesize authenticationExpirationDate=_authenticationExpirationDate - In the implementation block
@property (nonatomic,copy) NSData * verificationData;                                          //@synthesize verificationData=_verificationData - In the implementation block
@property (nonatomic,retain) VSAccountProviderResponse * accountProviderResponse;              //@synthesize accountProviderResponse=_accountProviderResponse - In the implementation block
@property (nonatomic,copy,readonly) NSString * SAMLAttributeQueryResponse; 
+(BOOL)supportsSecureCoding;
-(NSData *)verificationData;
-(void)setVerificationData:(NSData *)arg1 ;
-(void)setAccountProviderIdentifier:(NSString *)arg1 ;
-(void)setAuthenticationExpirationDate:(NSDate *)arg1 ;
-(void)setAccountProviderResponse:(VSAccountProviderResponse *)arg1 ;
-(NSString *)accountProviderIdentifier;
-(NSDate *)authenticationExpirationDate;
-(NSString *)SAMLAttributeQueryResponse;
-(VSAccountProviderResponse *)accountProviderResponse;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
