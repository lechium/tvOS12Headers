/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAML-Structs.h>
#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLNameId, NSDate;

@interface SAMLSubjectConfirmation : SAMLBaseElement

@property (nonatomic,readonly) NSString * method; 
@property (nonatomic,readonly) SAMLNameId * nameId; 
@property (nonatomic,readonly) NSDate * notBefore; 
@property (nonatomic,readonly) NSDate * notOnOrAfter; 
@property (nonatomic,readonly) NSString * recipient; 
@property (nonatomic,readonly) NSString * inResponseTo; 
@property (nonatomic,readonly) NSString * address; 
+(id)createElement:(id*)arg1 ;
-(NSString *)address;
-(NSString *)recipient;
-(NSDate *)notBefore;
-(NSDate *)notOnOrAfter;
-(xmlNode*)xmlNode:(id*)arg1 ;
-(SAMLNameId *)nameId;
-(NSString *)inResponseTo;
-(NSString *)method;
@end

