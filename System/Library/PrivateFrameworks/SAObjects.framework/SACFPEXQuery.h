/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString, NSNumber;

@interface SACFPEXQuery : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSArray * criteriaFields; 
@property (nonatomic,copy) NSString * criteriaSemanticTag; 
@property (nonatomic,copy) NSString * criteriaSubType; 
@property (nonatomic,copy) NSString * criteriaTimeType; 
@property (nonatomic,copy) NSString * criteriaType; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * localeIdentifier; 
@property (nonatomic,copy) NSArray * people; 
@property (assign,nonatomic) long long queryLimit; 
@property (nonatomic,copy) NSNumber * queryTimeOut; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSString * socialLabelType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)query;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)criteriaFields;
-(void)setCriteriaFields:(NSArray *)arg1 ;
-(NSString *)criteriaSemanticTag;
-(void)setCriteriaSemanticTag:(NSString *)arg1 ;
-(NSString *)criteriaSubType;
-(void)setCriteriaSubType:(NSString *)arg1 ;
-(NSString *)criteriaTimeType;
-(void)setCriteriaTimeType:(NSString *)arg1 ;
-(NSString *)criteriaType;
-(void)setCriteriaType:(NSString *)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(long long)queryLimit;
-(void)setQueryLimit:(long long)arg1 ;
-(NSNumber *)queryTimeOut;
-(void)setQueryTimeOut:(NSNumber *)arg1 ;
-(NSString *)socialLabelType;
-(void)setSocialLabelType:(NSString *)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)people;
-(void)setPeople:(NSArray *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)localeIdentifier;
@end
