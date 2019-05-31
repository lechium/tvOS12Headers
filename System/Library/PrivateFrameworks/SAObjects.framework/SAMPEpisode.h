/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPMediaItem.h>

@class NSString;

@interface SAMPEpisode : SAMPMediaItem

@property (assign,nonatomic) long long episodeNumber; 
@property (assign,nonatomic) long long seasonNumber; 
@property (assign,nonatomic) long long showEpisodesCount; 
@property (nonatomic,copy) NSString * showName; 
+(id)episodeWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)episode;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)showEpisodesCount;
-(void)setShowEpisodesCount:(long long)arg1 ;
-(NSString *)showName;
-(void)setShowName:(NSString *)arg1 ;
-(long long)seasonNumber;
-(void)setEpisodeNumber:(long long)arg1 ;
-(long long)episodeNumber;
-(void)setSeasonNumber:(long long)arg1 ;
@end

