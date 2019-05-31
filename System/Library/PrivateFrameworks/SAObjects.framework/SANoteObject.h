/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate;

@interface SANoteObject : SADomainObject

@property (nonatomic,copy) NSString * contents; 
@property (nonatomic,copy) NSDate * createdDate; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (assign,nonatomic) BOOL restricted; 
@property (nonatomic,copy) NSString * title; 
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)object;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDate *)createdDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSDate *)lastModifiedDate;
-(BOOL)restricted;
-(void)setRestricted:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)contents;
-(void)setContents:(NSString *)arg1 ;
@end

