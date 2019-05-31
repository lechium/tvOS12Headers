/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface WLKPlayEvent : NSObject {

	BOOL _played;
	NSString* _bundleID;
	NSString* _channelID;
	NSString* _externalPlayableID;
	NSString* _showID;
	double _elapsedTime;
	double _duration;
	NSDate* _occurrenceDate;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelID;                       //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalPlayableID;              //@synthesize externalPlayableID=_externalPlayableID - In the implementation block
@property (nonatomic,copy,readonly) NSString * showID;                          //@synthesize showID=_showID - In the implementation block
@property (getter=isPlayed,nonatomic,readonly) BOOL played;                     //@synthesize played=_played - In the implementation block
@property (nonatomic,readonly) double elapsedTime;                              //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (nonatomic,readonly) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSDate * occurrenceDate;                    //@synthesize occurrenceDate=_occurrenceDate - In the implementation block
-(NSDate *)occurrenceDate;
-(BOOL)isPlayed;
-(NSString *)externalPlayableID;
-(NSString *)showID;
-(NSString *)channelID;
-(id)init;
-(id)description;
-(double)duration;
-(id)initWithDictionary:(id)arg1 ;
-(double)elapsedTime;
-(NSString *)bundleID;
@end

