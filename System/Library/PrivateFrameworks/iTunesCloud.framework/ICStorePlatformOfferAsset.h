/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface ICStorePlatformOfferAsset : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double previewDuration; 
@property (nonatomic,copy,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) long long size; 
-(id)initWithResponseDictionary:(id)arg1 ;
-(double)previewDuration;
-(NSURL *)previewURL;
-(long long)size;
-(double)duration;
@end

