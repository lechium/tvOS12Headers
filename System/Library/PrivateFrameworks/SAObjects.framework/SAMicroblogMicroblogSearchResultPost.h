/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMicroblogMicroblogSearchResultBase.h>

@class NSDate, SADecoratedString, NSArray, NSString, SAUIAppPunchOut, SAMicroblogTwitterPostAuthor, NSURL;

@interface SAMicroblogMicroblogSearchResultPost : SAMicroblogMicroblogSearchResultBase

@property (nonatomic,copy) NSDate * creationTime; 
@property (nonatomic,retain) SADecoratedString * decoratedContent; 
@property (nonatomic,copy) NSArray * embeddedHashtags; 
@property (nonatomic,copy) NSArray * embeddedImages; 
@property (nonatomic,copy) NSArray * embeddedLinks; 
@property (nonatomic,copy) NSArray * embeddedMentions; 
@property (assign,nonatomic) long long favoritesCount; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,retain) SAMicroblogTwitterPostAuthor * retweetAuthor; 
@property (assign,nonatomic) long long retweetCount; 
@property (nonatomic,copy) NSURL * webAddress; 
+(id)microblogSearchResultPost;
+(id)microblogSearchResultPostWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSURL *)webAddress;
-(void)setWebAddress:(NSURL *)arg1 ;
-(SADecoratedString *)decoratedContent;
-(void)setDecoratedContent:(SADecoratedString *)arg1 ;
-(NSArray *)embeddedHashtags;
-(void)setEmbeddedHashtags:(NSArray *)arg1 ;
-(NSArray *)embeddedImages;
-(void)setEmbeddedImages:(NSArray *)arg1 ;
-(NSArray *)embeddedLinks;
-(void)setEmbeddedLinks:(NSArray *)arg1 ;
-(NSArray *)embeddedMentions;
-(void)setEmbeddedMentions:(NSArray *)arg1 ;
-(long long)favoritesCount;
-(void)setFavoritesCount:(long long)arg1 ;
-(SAMicroblogTwitterPostAuthor *)retweetAuthor;
-(void)setRetweetAuthor:(SAMicroblogTwitterPostAuthor *)arg1 ;
-(long long)retweetCount;
-(void)setRetweetCount:(long long)arg1 ;
-(NSDate *)creationTime;
-(void)setCreationTime:(NSDate *)arg1 ;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
@end

