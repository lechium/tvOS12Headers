/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSArray;

@interface SAMLAttribute : SAMLBaseElement

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) NSString * nameFormat; 
@property (nonatomic,readonly) NSString * friendlyName; 
@property (nonatomic,readonly) NSArray * values; 
+(id)createElement:(id*)arg1 ;
-(NSString *)friendlyName;
-(void)addAttributeValue:(id)arg1 ;
-(NSString *)nameFormat;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)values;
@end

