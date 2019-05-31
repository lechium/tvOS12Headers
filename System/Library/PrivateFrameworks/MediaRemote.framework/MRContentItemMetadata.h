/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/_MRContentItemMetadataProtobuf.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSDictionary, NSDate, NSArray;

@interface MRContentItemMetadata : _MRContentItemMetadataProtobuf {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSURL* _assetURL;
	NSDictionary* _userInfo;
	NSDictionary* _appMetrics;
	NSDictionary* _nowPlayingInfo;
	NSDictionary* _collectionInfo;
	NSDate* _currentPlaybackDate;
	NSDictionary* _deviceSpecificUserInfo;
	NSArray* _artworkURLTemplates;

}

@property (nonatomic,copy) NSURL * assetURL; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSDictionary * deviceSpecificUserInfo; 
@property (nonatomic,copy) NSDictionary * collectionInfo; 
@property (nonatomic,copy) NSDictionary * appMetrics; 
@property (nonatomic,copy) NSDictionary * nowPlayingInfo; 
@property (nonatomic,copy) NSDate * currentPlaybackDate; 
@property (nonatomic,copy) NSArray * artworkURLTemplates;                      //@synthesize artworkURLTemplates=_artworkURLTemplates - In the implementation block
+(void)initialize;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setAssetURL:(NSURL *)arg1 ;
-(id)customDictionaryRepresentation;
-(NSDate *)currentPlaybackDate;
-(void)setCurrentPlaybackDate:(NSDate *)arg1 ;
-(NSDictionary *)appMetrics;
-(void)setAppMetrics:(NSDictionary *)arg1 ;
-(NSURL *)assetURL;
-(void)setArtworkURLTemplates:(NSArray *)arg1 ;
-(void)setCollectionInfo:(NSDictionary *)arg1 ;
-(void)setDeviceSpecificUserInfo:(NSDictionary *)arg1 ;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(NSDictionary *)deviceSpecificUserInfo;
-(NSArray *)artworkURLTemplates;
-(NSDictionary *)collectionInfo;
-(id)init;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
@end
