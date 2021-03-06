/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL;

@interface SALCMContent : SADomainObject

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * channelId; 
@property (nonatomic,copy) NSURL * externalId; 
@property (nonatomic,copy) NSString * title; 
+(id)contentWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)content;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
-(NSURL *)externalId;
-(void)setExternalId:(NSURL *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

