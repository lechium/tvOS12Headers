/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSString;

@interface SAARParaphrasedSuggestedResult : SAAceView

@property (nonatomic,retain) id<SAClientBoundCommand> command; 
@property (nonatomic,copy) NSString * displayText; 
@property (assign,nonatomic) long long rank; 
+(id)paraphrasedSuggestedResult;
+(id)paraphrasedSuggestedResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(long long)rank;
-(void)setRank:(long long)arg1 ;
-(id)encodedClassName;
-(id<SAClientBoundCommand>)command;
-(void)setCommand:(id<SAClientBoundCommand>)arg1 ;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
@end
