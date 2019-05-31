/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL, SAUIAppPunchOut, NSArray;

@interface SAGKLinkedAnswer : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * displayLink; 
@property (nonatomic,copy) NSURL * link; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSURL * searchUri; 
@property (nonatomic,copy) NSArray * thumbnails; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)linkedAnswer;
+(id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(id)encodedClassName;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSURL *)searchUri;
-(void)setSearchUri:(NSURL *)arg1 ;
-(NSArray *)thumbnails;
-(void)setThumbnails:(NSArray *)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setDisplayLink:(NSString *)arg1 ;
-(NSString *)displayLink;
-(NSString *)query;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
@end

