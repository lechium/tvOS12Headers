/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface WLKPlayActivityMetadata : NSObject {

	NSString* _key;
	unsigned long long _contentType;
	NSString* _externalShowID;
	NSString* _canonicalID;
	NSString* _canonicalShowID;
	NSString* _internalLegID;
	NSString* _overrideChannelID;
	NSNumber* _isCurrentEpisode;
	NSNumber* _isShowClosed;

}

@property (nonatomic,readonly) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned long long contentType;                //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) NSString * externalShowID;                     //@synthesize externalShowID=_externalShowID - In the implementation block
@property (nonatomic,readonly) NSString * canonicalID;                        //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,readonly) NSString * canonicalShowID;                    //@synthesize canonicalShowID=_canonicalShowID - In the implementation block
@property (nonatomic,readonly) NSString * internalLegID;                      //@synthesize internalLegID=_internalLegID - In the implementation block
@property (nonatomic,readonly) NSString * overrideChannelID;                  //@synthesize overrideChannelID=_overrideChannelID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isCurrentEpisode;              //@synthesize isCurrentEpisode=_isCurrentEpisode - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isShowClosed;                  //@synthesize isShowClosed=_isShowClosed - In the implementation block
-(unsigned long long)contentType;
-(NSString *)canonicalID;
-(id)initWithKey:(id)arg1 dictionary:(id)arg2 ;
-(NSString *)canonicalShowID;
-(NSString *)externalShowID;
-(NSString *)internalLegID;
-(NSString *)overrideChannelID;
-(NSNumber *)isCurrentEpisode;
-(NSNumber *)isShowClosed;
-(NSString *)key;
@end

