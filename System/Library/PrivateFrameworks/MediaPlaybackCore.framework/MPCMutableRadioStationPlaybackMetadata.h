/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCRadioStationPlaybackMetadata.h>

@class RadioArtworkCollection, NSString, NSURL;

@interface MPCMutableRadioStationPlaybackMetadata : MPCRadioStationPlaybackMetadata

@property (nonatomic,retain) RadioArtworkCollection * artworkCollection; 
@property (nonatomic,copy) NSString * stationName; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
@property (nonatomic,copy) NSString * stationStringID; 
@property (nonatomic,copy) NSURL * stationURL; 
-(void)setStationName:(NSString *)arg1 ;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setStationURL:(NSURL *)arg1 ;
-(void)setStationStringID:(NSString *)arg1 ;
-(void)setArtworkCollection:(RadioArtworkCollection *)arg1 ;
@end

