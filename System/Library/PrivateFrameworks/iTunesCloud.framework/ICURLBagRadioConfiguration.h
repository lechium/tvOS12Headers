/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface ICURLBagRadioConfiguration : NSObject {

	NSDictionary* _bagRadioDictionary;

}

@property (nonatomic,copy,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) long long getTracksDPInfoKBSyncCount; 
-(NSURL *)baseURL;
-(id)urlForBagRadioKey:(id)arg1 ;
-(id)initWithBagRadioDictionary:(id)arg1 ;
-(long long)getTracksDPInfoKBSyncCount;
-(BOOL)shouldIncludeHTTPHeaderField:(id)arg1 forRequestURL:(id)arg2 ;
@end
