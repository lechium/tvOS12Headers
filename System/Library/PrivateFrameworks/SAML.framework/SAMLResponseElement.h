/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLStatus, NSArray;

@interface SAMLResponseElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * relatedRequest; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,readonly) NSString * destination; 
@property (nonatomic,readonly) NSString * consent; 
@property (nonatomic,readonly) NSString * issuer; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,readonly) SAMLStatus * status; 
@property (nonatomic,readonly) NSArray * assertions; 
+(id)createElement:(id*)arg1 ;
-(SAMLSignature *)signature;
-(NSArray *)assertions;
-(NSString *)issuer;
-(BOOL)assertionMeetsConditions:(id*)arg1 ;
-(NSDate *)issueInstant;
-(NSString *)consent;
-(id)authnStatement;
-(NSString *)relatedRequest;
-(NSString *)identifier;
-(NSString *)destination;
-(SAMLStatus *)status;
@end

