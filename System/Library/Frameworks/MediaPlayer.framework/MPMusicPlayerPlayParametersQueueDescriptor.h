/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class NSArray, MPMusicPlayerPlayParameters;

@interface MPMusicPlayerPlayParametersQueueDescriptor : MPMusicPlayerQueueDescriptor {

	NSArray* _playParametersQueue;
	MPMusicPlayerPlayParameters* _startItemPlayParameters;

}

@property (nonatomic,copy) NSArray * playParametersQueue;                                        //@synthesize playParametersQueue=_playParametersQueue - In the implementation block
@property (nonatomic,retain) MPMusicPlayerPlayParameters * startItemPlayParameters;              //@synthesize startItemPlayParameters=_startItemPlayParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithPlayParametersQueue:(id)arg1 ;
-(void)setStartTime:(double)arg1 forItemWithPlayParameters:(id)arg2 ;
-(void)setEndTime:(double)arg1 forItemWithPlayParameters:(id)arg2 ;
-(NSArray *)playParametersQueue;
-(void)setPlayParametersQueue:(NSArray *)arg1 ;
-(MPMusicPlayerPlayParameters *)startItemPlayParameters;
-(void)setStartItemPlayParameters:(MPMusicPlayerPlayParameters *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

