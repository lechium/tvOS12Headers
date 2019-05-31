/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLAssertion;

@interface SAMLEvidence : SAMLBaseElement

@property (nonatomic,readonly) NSString * assertionIdRef; 
@property (nonatomic,readonly) NSString * assertionURIRef; 
@property (nonatomic,readonly) SAMLAssertion * assertion; 
+(id)createElement:(id*)arg1 ;
-(SAMLAssertion *)assertion;
-(NSString *)assertionIdRef;
-(NSString *)assertionURIRef;
@end

