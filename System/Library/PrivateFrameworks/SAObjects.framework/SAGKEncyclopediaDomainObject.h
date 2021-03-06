/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAGKDomainObject.h>

@class NSArray, NSString;

@interface SAGKEncyclopediaDomainObject : SAGKDomainObject

@property (nonatomic,copy) NSArray * linkedAnswerGroups; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * nameAnnotation; 
@property (nonatomic,copy) NSArray * structuredAnswers; 
+(id)encyclopediaDomainObject;
+(id)encyclopediaDomainObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)linkedAnswerGroups;
-(void)setLinkedAnswerGroups:(NSArray *)arg1 ;
-(NSArray *)structuredAnswers;
-(void)setStructuredAnswers:(NSArray *)arg1 ;
-(NSString *)nameAnnotation;
-(void)setNameAnnotation:(NSString *)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
@end

