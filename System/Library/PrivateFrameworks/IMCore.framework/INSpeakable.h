/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol INSpeakable <NSObject>
@property (nonatomic,readonly) NSString * spokenPhrase; 
@property (nonatomic,readonly) NSString * pronunciationHint; 
@property (nonatomic,readonly) NSString * vocabularyIdentifier; 
@property (nonatomic,readonly) NSArray * alternativeSpeakableMatches; 
@property (nonatomic,readonly) NSString * identifier; 
@optional
-(NSString *)identifier;

@required
-(NSString *)spokenPhrase;
-(NSString *)pronunciationHint;
-(NSArray *)alternativeSpeakableMatches;
-(NSString *)vocabularyIdentifier;

@end

