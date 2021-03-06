/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreAssetPlaybackResponse.h>

@class NSDictionary, NSDate, NSArray, MPStoreHLSAssetInfo;

@interface MPMutableStoreAssetPlaybackResponse : MPStoreAssetPlaybackResponse

@property (nonatomic,copy) NSDictionary * dialogDictionary; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSArray * fileAssetInfoList; 
@property (nonatomic,retain) MPStoreHLSAssetInfo * hlsAssetInfo; 
@property (nonatomic,retain) id suzeLeaseID; 
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setDialogDictionary:(NSDictionary *)arg1 ;
-(void)setFileAssetInfoList:(NSArray *)arg1 ;
-(void)setHlsAssetInfo:(MPStoreHLSAssetInfo *)arg1 ;
-(void)setSuzeLeaseID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

