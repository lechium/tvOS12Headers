/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSString;

@interface SAIntentGroupMessageContentSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic,copy) NSString * content; 
@property (assign,nonatomic) BOOL sentStatus; 
+(id)messageContentSnippetTemplate;
+(id)messageContentSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setContent:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)sentStatus;
-(void)setSentStatus:(BOOL)arg1 ;
-(NSString *)content;
@end
