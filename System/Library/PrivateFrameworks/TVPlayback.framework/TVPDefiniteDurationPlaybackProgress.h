/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPPlaybackProgress.h>

@class NSValueTransformer;

@interface TVPDefiniteDurationPlaybackProgress : TVPPlaybackProgress {

	double _elapsedTime;
	double _duration;
	NSValueTransformer* _valueTransformer;

}

@property (nonatomic,retain) NSValueTransformer * valueTransformer;              //@synthesize valueTransformer=_valueTransformer - In the implementation block
@property (assign,nonatomic) double elapsedTime;                                 //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) double duration;                                    //@synthesize duration=_duration - In the implementation block
-(void)setElapsedTime:(double)arg1 ;
-(NSValueTransformer *)valueTransformer;
-(void)setValueTransformer:(NSValueTransformer *)arg1 ;
-(void)_updateTitles;
-(id)init;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(double)elapsedTime;
@end

