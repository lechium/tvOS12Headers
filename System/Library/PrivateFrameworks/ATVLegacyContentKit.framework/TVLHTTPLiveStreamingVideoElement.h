/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLVideoAssetElement.h>

@class TVLTrickPlayConfigElement, NSArray, NSDate;

@interface TVLHTTPLiveStreamingVideoElement : TVLVideoAssetElement {

	BOOL _indefiniteDuration;
	BOOL _beginPlaybackAtStartDate;
	float _bookmarkNetTimeSec;
	TVLTrickPlayConfigElement* _trickPlayConfig;
	NSArray* _eventGroups;
	NSArray* _requiredEventGroups;
	NSDate* _startDate;

}

@property (assign,nonatomic) BOOL indefiniteDuration;                                  //@synthesize indefiniteDuration=_indefiniteDuration - In the implementation block
@property (nonatomic,retain) TVLTrickPlayConfigElement * trickPlayConfig;              //@synthesize trickPlayConfig=_trickPlayConfig - In the implementation block
@property (nonatomic,retain) NSArray * eventGroups;                                    //@synthesize eventGroups=_eventGroups - In the implementation block
@property (nonatomic,retain) NSArray * requiredEventGroups;                            //@synthesize requiredEventGroups=_requiredEventGroups - In the implementation block
@property (assign,nonatomic) float bookmarkNetTimeSec;                                 //@synthesize bookmarkNetTimeSec=_bookmarkNetTimeSec - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                       //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL beginPlaybackAtStartDate;                            //@synthesize beginPlaybackAtStartDate=_beginPlaybackAtStartDate - In the implementation block
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(BOOL)beginPlaybackAtStartDate;
-(NSArray *)requiredEventGroups;
-(NSArray *)eventGroups;
-(void)setBeginPlaybackAtStartDate:(BOOL)arg1 ;
-(void)setIndefiniteDuration:(BOOL)arg1 ;
-(BOOL)indefiniteDuration;
-(TVLTrickPlayConfigElement *)trickPlayConfig;
-(float)bookmarkNetTimeSec;
-(void)setBookmarkNetTimeSec:(float)arg1 ;
-(void)setTrickPlayConfig:(TVLTrickPlayConfigElement *)arg1 ;
-(void)setEventGroups:(NSArray *)arg1 ;
-(void)setRequiredEventGroups:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

