/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray, SAMPPlaylist;

@interface SAMPAddMediaItemsToPlaylist : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * insertLocation; 
@property (nonatomic,copy) NSArray * mediaItems; 
@property (nonatomic,retain) SAMPPlaylist * playlist; 
+(id)addMediaItemsToPlaylist;
+(id)addMediaItemsToPlaylistWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
-(NSString *)insertLocation;
-(void)setInsertLocation:(NSString *)arg1 ;
-(SAMPPlaylist *)playlist;
-(void)setPlaylist:(SAMPPlaylist *)arg1 ;
@end

