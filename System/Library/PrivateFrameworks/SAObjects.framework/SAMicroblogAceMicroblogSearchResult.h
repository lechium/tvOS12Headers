/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAMicroblogTwitterPostAuthor, SAUIAppPunchOut, NSString, NSArray, SADecoratedString, NSURL;

@interface SAMicroblogAceMicroblogSearchResult : SADomainObject

@property (nonatomic,retain) SAMicroblogTwitterPostAuthor * globalAuthor; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSArray * resultNews; 
@property (nonatomic,copy) NSArray * resultPosts; 
@property (nonatomic,copy) NSArray * resultUsers; 
@property (nonatomic,retain) SADecoratedString * summary; 
@property (nonatomic,copy) NSURL * webAddress; 
+(id)aceMicroblogSearchResult;
+(id)aceMicroblogSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(SADecoratedString *)summary;
-(id)encodedClassName;
-(SAMicroblogTwitterPostAuthor *)globalAuthor;
-(void)setGlobalAuthor:(SAMicroblogTwitterPostAuthor *)arg1 ;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSArray *)resultNews;
-(void)setResultNews:(NSArray *)arg1 ;
-(NSArray *)resultPosts;
-(void)setResultPosts:(NSArray *)arg1 ;
-(NSArray *)resultUsers;
-(void)setResultUsers:(NSArray *)arg1 ;
-(NSURL *)webAddress;
-(void)setWebAddress:(NSURL *)arg1 ;
-(void)setSummary:(SADecoratedString *)arg1 ;
-(NSString *)query;
@end
