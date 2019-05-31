/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class SASRecognition, NSString;

@interface SASSpeechAlternativesSnippet : SAUISnippet

@property (assign,nonatomic) long long maxEntryToShow; 
@property (nonatomic,retain) SASRecognition * recognition; 
@property (nonatomic,copy) NSString * sessionId; 
+(id)speechAlternativesSnippet;
+(id)speechAlternativesSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SASRecognition *)recognition;
-(void)setRecognition:(SASRecognition *)arg1 ;
-(long long)maxEntryToShow;
-(void)setMaxEntryToShow:(long long)arg1 ;
@end

