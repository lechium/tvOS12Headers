/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAccount, NSError, NSDictionary, NSString;

@interface SSAuthenticateResponse : NSObject <SSXPCCoding> {

	SSAccount* _authenticatedAccount;
	long long _authenticateResponseType;
	NSError* _error;
	unsigned long long _credentialSource;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,retain) SSAccount * authenticatedAccount;                 //@synthesize authenticatedAccount=_authenticatedAccount - In the implementation block
@property (assign,nonatomic) long long authenticateResponseType;               //@synthesize authenticateResponseType=_authenticateResponseType - In the implementation block
@property (assign,nonatomic) unsigned long long credentialSource;              //@synthesize credentialSource=_credentialSource - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSDictionary * responseDictionary;                  //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)_setError:(id)arg1 ;
-(void)setAuthenticatedAccount:(SSAccount *)arg1 ;
-(void)setAuthenticateResponseType:(long long)arg1 ;
-(unsigned long long)credentialSource;
-(void)setCredentialSource:(unsigned long long)arg1 ;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)responseDictionary;
-(long long)authenticateResponseType;
-(SSAccount *)authenticatedAccount;
-(NSString *)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
