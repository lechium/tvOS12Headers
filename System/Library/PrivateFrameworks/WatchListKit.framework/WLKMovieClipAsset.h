/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WLKMovieClipAsset : NSObject {

	unsigned long long _duration;
	NSString* _flavor;
	NSString* _url;

}

@property (nonatomic,readonly) unsigned long long duration;                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSString * durationString; 
@property (nonatomic,copy,readonly) NSString * flavor;                      //@synthesize flavor=_flavor - In the implementation block
@property (nonatomic,copy,readonly) NSString * url;                         //@synthesize url=_url - In the implementation block
+(id)movieClipAssetsWithArray:(id)arg1 ;
-(NSString *)durationString;
-(NSString *)flavor;
-(id)init;
-(unsigned long long)duration;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)url;
-(id)_init;
@end
