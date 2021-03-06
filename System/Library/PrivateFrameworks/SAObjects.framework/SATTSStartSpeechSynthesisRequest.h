/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SATTSStartSpeechSynthesisRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * audioType; 
@property (assign,nonatomic) BOOL enableAudioInfo; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (assign,nonatomic) BOOL streaming; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)startSpeechSynthesisRequest;
+(id)startSpeechSynthesisRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)streaming;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(BOOL)enableAudioInfo;
-(void)setEnableAudioInfo:(BOOL)arg1 ;
-(void)setStreaming:(BOOL)arg1 ;
-(NSString *)audioType;
-(void)setAudioType:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
@end

