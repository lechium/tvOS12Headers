/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSNumber;

@interface SASource : SADomainObject

@property (nonatomic,copy) NSString * accountIdentifier; 
@property (nonatomic,copy) NSString * accountName; 
@property (nonatomic,copy) NSString * domainIdentifier; 
@property (nonatomic,copy) NSNumber * remote; 
+(id)sourceWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)source;
-(NSString *)domainIdentifier;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSNumber *)remote;
-(void)setRemote:(NSNumber *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)accountName;
@end
