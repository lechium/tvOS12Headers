/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, SASRecognition, NSString;

@interface SASResultCandidate : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * processedAudioDuration; 
@property (nonatomic,retain) SASRecognition * recognition; 
@property (nonatomic,copy) NSString * resultId; 
+(id)resultCandidate;
+(id)resultCandidateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSNumber *)processedAudioDuration;
-(void)setProcessedAudioDuration:(NSNumber *)arg1 ;
-(SASRecognition *)recognition;
-(void)setRecognition:(SASRecognition *)arg1 ;
-(NSString *)resultId;
-(void)setResultId:(NSString *)arg1 ;
@end

