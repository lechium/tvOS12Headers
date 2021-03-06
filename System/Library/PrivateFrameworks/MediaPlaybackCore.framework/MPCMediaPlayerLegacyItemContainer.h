/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCPlayerItemContainer.h>

@class MPQueueFeeder;

@interface MPCMediaPlayerLegacyItemContainer : MPCPlayerItemContainer {

	MPQueueFeeder* _queueFeeder;

}

@property (nonatomic,readonly) MPQueueFeeder * queueFeeder;              //@synthesize queueFeeder=_queueFeeder - In the implementation block
-(MPQueueFeeder *)queueFeeder;
-(id)initWithQueueFeeder:(id)arg1 ;
-(id)modelPlayEventRepresentation;
@end

