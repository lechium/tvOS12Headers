/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL, SALocation, NSDate, NSString, SAEmail, NSNumber, SAPhone;

@interface SAABPersonSearch : SADomainCommand

@property (nonatomic,copy) NSURL * accountIdentifier; 
@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSDate * birthday; 
@property (nonatomic,copy) NSString * company; 
@property (nonatomic,retain) SAEmail * email; 
@property (nonatomic,copy) NSNumber * me; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAPhone * phone; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,copy) NSString * scope; 
+(id)personSearch;
+(id)personSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)relationship;
-(void)setAddress:(SALocation *)arg1 ;
-(SALocation *)address;
-(id)groupIdentifier;
-(void)setMe:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setBirthday:(NSDate *)arg1 ;
-(NSString *)company;
-(void)setCompany:(NSString *)arg1 ;
-(NSNumber *)me;
-(void)setPhone:(SAPhone *)arg1 ;
-(void)setRelationship:(NSString *)arg1 ;
-(SAEmail *)email;
-(void)setEmail:(SAEmail *)arg1 ;
-(NSDate *)birthday;
-(SAPhone *)phone;
-(void)setAccountIdentifier:(NSURL *)arg1 ;
-(NSURL *)accountIdentifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setScope:(NSString *)arg1 ;
-(NSString *)scope;
@end
