/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HSCloudAvailability <NSObject>
@required
-(BOOL)canShowCloudMusic;
-(BOOL)canShowCloudVideo;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForVideos;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForStoreApps;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)canShowCloudDownloadButtons;
-(BOOL)isCellularDataRestricted;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;

@end

