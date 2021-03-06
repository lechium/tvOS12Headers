/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class SAMLStatusCode, NSString;

@interface SAMLStatus : SAMLBaseElement

@property (nonatomic,readonly) SAMLStatusCode * statusCode; 
@property (nonatomic,readonly) NSString * statusMessage; 
@property (nonatomic,readonly) NSString * statusDetail; 
+(id)createElement:(id*)arg1 ;
-(NSString *)statusMessage;
-(NSString *)statusDetail;
-(id)status;
-(SAMLStatusCode *)statusCode;
@end

